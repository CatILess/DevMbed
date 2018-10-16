#include "mbed.h"

DigitalOut led1(LED1);

int main() {
    printf("Hello World?\n\r");
    char ch[150] = "";
    while (true) {
        scanf("%s",&ch);
        printf(">%s\n\r",ch);
        
        led1 = !led1;
        wait(0.5);
    }
}


