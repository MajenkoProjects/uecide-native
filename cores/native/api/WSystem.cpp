#include <Arduino.h>

#include <signal.h>

void nativeCleanup() {
    Serial.end();
    Console.end();
}

void intHandler(int sig) {
    fprintf(stderr, "Exited on INT\r\n");
    nativeCleanup();
    exit(0);
}

void quitHandler(int sig) {
    fprintf(stderr, "Exited on QUIT\r\n");
    nativeCleanup();
    exit(0);
}

void nativeInit() {
    signal(SIGINT, intHandler);
    signal(SIGQUIT, quitHandler);
    atexit(&nativeCleanup);
}
