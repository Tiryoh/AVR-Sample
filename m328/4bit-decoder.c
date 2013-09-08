#include<avr/io.h>

int main(void){
    int i,o4b,o4d = 0;
    /***** IN *****/
    DDRC = 0x00;
    PORTC = 0x00;
    /***** OUT *****/
    DDRB = 0xFF;
    DDRD = 0xFF;
    PORTB = 0x00;
    PORTD = 0x00;

    while(1){
        i = PINC;
        PORTB = 0;
        PORTD = 0;
        if(i != 0){
            o4b = 1;
            PORTB = o4b;
            while(i != 1){
                o4d = o4d * 2;
                PORTD = o4d;
                if(o4b == 0x80){
                    o4d = 1;
                    PORTD = o4d;
                }
                o4b = o4b * 2;
                PORTB = o4b;
                i--;
            }
        }
    }
}
