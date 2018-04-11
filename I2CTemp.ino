#include "mbed.h"
#include "TMP102.h"

TMP102 temperature(p28, p27, 0x90); //A0 pin is connected to ground

int main() {
    while(1) {
        printf("Temperature: %f\r\n", temperature.read());
        wait(1.0);
    }
}
