#ifndef _WIRING_PINS_H
#define _WIRING_PINS_H

#include <pthread.h>

struct _pin {
	int gpio;
	pthread_t thread;
	int data;
};

#endif
