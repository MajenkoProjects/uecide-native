#include <fcntl.h>
#include <stdint.h>
#include <sys/types.h>
#include <unistd.h>
#include <hal_eeprom.h>

static int eeprom_fd = -1;
static const char *eeprom_filename = "/tmp/eeprom.dat";

static int eeprom_open_or_create() {
    if (access(eeprom_filename, R_OK | W_OK) == 0) { // Exists and we have read/write access
        return open(eeprom_filename, O_RDWR);
    }

    if (access(eeprom_filename, F_OK) == 0) { // Exists, but we don't have access
        return -1;
    }

    int fd = open(eeprom_filename, O_RDWR | O_CREAT, 0666); // Make the file
    
    // Fill it with 0xff (erased eeprom cells)
    uint8_t ff = 0xff;
    for (int i = 0; i <= E2END; i++) {
        write(fd, &ff, 1);
    }
    return fd;
}

uint8_t eeprom_read_byte(uint8_t *index) {
    if ((intptr_t)index > E2END) return 0;
    if (eeprom_fd == -1) { // Open it
        eeprom_fd = eeprom_open_or_create();
    }
    if (eeprom_fd == -1) { // It didn't work
        return 0;
    }

    lseek(eeprom_fd, (intptr_t)index, SEEK_SET);
    uint8_t v;
    read(eeprom_fd, &v, 1);
    return v;
}

void eeprom_write_byte(uint8_t *index, uint8_t b) {
    if ((intptr_t)index > E2END) return;
    if (eeprom_fd == -1) { // Open it
        eeprom_fd = eeprom_open_or_create();
    }
    if (eeprom_fd == -1) { // It didn't work
        return;
    }
    
    lseek(eeprom_fd, (intptr_t)index, SEEK_SET);
    write(eeprom_fd, &b, 1);
}
