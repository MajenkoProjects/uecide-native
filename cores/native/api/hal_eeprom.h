#ifndef _HAL_EEPROM_H
#define _HAL_EEPROM_H

#include <stdint.h>

#define E2END 1023

extern uint8_t eeprom_read_byte(uint8_t *);
extern void eeprom_write_byte(uint8_t *, uint8_t);

#endif
