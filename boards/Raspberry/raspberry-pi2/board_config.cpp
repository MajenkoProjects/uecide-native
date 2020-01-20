#include <wiring_pins.h>

struct _pin _pins_gpio[] {
    {  __NOT_A_PIN, (pthread_t)-1, 0   },  // 1    3V3
    {  __NOT_A_PIN, (pthread_t)-1, 0   },  // 2    5V
    {            2, (pthread_t)-1, 0   },  // 3    SDA
    {  __NOT_A_PIN, (pthread_t)-1, 0   },  // 4    5V
    {            3, (pthread_t)-1, 0   },  // 5    SCL
    {  __NOT_A_PIN, (pthread_t)-1, 0   },  // 6    Gnd
    {            4, (pthread_t)-1, 0   },  // 7    GPCLKO
    {           14, (pthread_t)-1, 0   },  // 8    TXD
    {  __NOT_A_PIN, (pthread_t)-1, 0   },  // 9    Gnd
    {           15, (pthread_t)-1, 0   },  // 10   RXD
    {           17, (pthread_t)-1, 0   },  // 11
    {           18, (pthread_t)-1, 0   },  // 12   PCM_C
    {           27, (pthread_t)-1, 0   },  // 13   PCM_D
    {  __NOT_A_PIN, (pthread_t)-1, 0   },  // 14   Gnd
    {           22, (pthread_t)-1, 0   },  // 15
    {           23, (pthread_t)-1, 0   },  // 16
    {  __NOT_A_PIN, (pthread_t)-1, 0   },  // 17   3V3
    {           24, (pthread_t)-1, 0   },  // 18
    {           10, (pthread_t)-1, 0   },  // 19   MOSI 1
    {  __NOT_A_PIN, (pthread_t)-1, 0   },  // 20   Gnd
    {            9, (pthread_t)-1, 0   },  // 21   MISO 1
    {           25, (pthread_t)-1, 0   },  // 22
    {           11, (pthread_t)-1, 0   },  // 23   SCK 1
    {            8, (pthread_t)-1, 0   },  // 24   CE0
    {  __NOT_A_PIN, (pthread_t)-1, 0   },  // 25   Gnd
    {            7, (pthread_t)-1, 0   },  // 26   CE1

    {            0, (pthread_t)-1, 0   },  // 27   ID_SD
    {            1, (pthread_t)-1, 0   },  // 28   ID_SC
    {            5, (pthread_t)-1, 0   },  // 29   
    {  __NOT_A_PIN, (pthread_t)-1, 0   },  // 30   Gnd
    {            6, (pthread_t)-1, 0   },  // 31
    {           12, (pthread_t)-1, 0   },  // 32
    {           13, (pthread_t)-1, 0   },  // 33
    {  __NOT_A_PIN, (pthread_t)-1, 0   },  // 34   Gnd
    {           19, (pthread_t)-1, 0   },  // 35   MISO 2
    {           16, (pthread_t)-1, 0   },  // 36
    {           26, (pthread_t)-1, 0   },  // 37
    {           20, (pthread_t)-1, 0   },  // 38   MOSI 2
    {  __NOT_A_PIN, (pthread_t)-1, 0   },  // 39   Gnd
    {           21, (pthread_t)-1, 0   },  // 40   SCK 2
};

