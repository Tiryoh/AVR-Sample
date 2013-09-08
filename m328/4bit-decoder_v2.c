#include<avr/io.h>

int main(void){
    int in = 0;
    /***** IN *****/
    DDRC = 0x00;
    PORTC = 0x00;
    /***** OUT *****/
    DDRB = 0xFF;
    DDRD = 0xFF;
    PORTB = 0x00;
    PORTD = 0x00;
    while(1){
        in = PINC;
        switch(in){
        case(0b00000000):
            PORTB = 0;
            PORTD = 0;
            break;
        case(0b00000001):
            PORTB = 0b00000001;
            PORTD = 0;
            break;
        case(0b00000010):
            PORTB = 0b00000010;
            PORTD = 0;
            break;
        case(0b00000011):
            PORTB = 0b00000100;
            PORTD = 0;
            break;
        case(0b00000100):
            PORTB = 0b00001000;
            PORTD = 0;
            break;
        case(0b00000101):
            PORTB = 0b00010000;
            PORTD = 0;
            break;
        case(0b00000110):
            PORTB = 0b00100000;
            PORTD = 0;
            break;
        case(0b00000111):
            PORTB = 0b01000000;
            PORTD = 0;
            break;
        case(0b00001000):
            PORTB = 0b10000000;
            PORTD = 0;
            break;
        case(0b00001001):
            PORTB = 0;
            PORTD = 0b00000001;
            break;
        case(0b00001010):
            PORTB = 0;
            PORTD = 0b00000010;
            break;
        case(0b00001011):
            PORTB = 0;
            PORTD = 0b00000100;
            break;
        case(0b00001100):
            PORTB = 0;
            PORTD = 0b00001000;
            break;
        case(0b00001101):
            PORTB = 0;
            PORTD = 0b00010000;
            break;
        case(0b00001110):
            PORTB = 0;
            PORTD = 0b00100000;
            break;
        case(0b00001111):
            PORTB = 0;
            PORTD = 0b01000000;
            break;
        }
    }
}
