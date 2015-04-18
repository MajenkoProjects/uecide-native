#include <Arduino.h>

#include <signal.h>

void nativeCleanup() {
    Serial.end();
    Console.end();
}

void intHandler(int sig) {
    nativeCleanup();
    exit(0);
}

void quitHandler(int sig) {
    nativeCleanup();
    exit(0);
}

void nativeInit() {
    signal(SIGINT, intHandler);
    signal(SIGQUIT, quitHandler);
    atexit(&nativeCleanup);
}
