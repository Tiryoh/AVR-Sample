#include <avr/io.h>
int main(void){
    
    /***** IN *****/
    DDRD = 0x00;
    PORTD = 0xFF;
    
    /***** DEFINE *****
     PD2 0b0001
     PD3 0b0010
     PD4 0b0100
     PD5 0b1000
    ******  END  *****/
    
    /***** OUT *****/
    DDRB = 0xFF;
    PORTB = 0x00;
    
    /***** DEFINE *****
     PB7 a
     PB6 b
     PB5 c
     PB4 d
     PB3 e
     PB2 f
     PB1 g
     PB0 N/A(dot)
    ******  END  *****/
    
    while(1){
        switch( PIND ){
            //0
            case 0b00000000:
                PORTB = 0b11111100;
                break;
            //1
            case 0b00000100:
                PORTB = 0b01100000;
                break;
            //2
            case 0b00001000:
                PORTB = 0b11011010;
                break;
            //3
            case 0b00001100:
                PORTB = 0b11110010;
                break;
            //4
            case 0b00010000:
                PORTB = 0b01100110;
                break;
            //5
            case 0b00010100:
                PORTB = 0b10110110;
                break;
            //6
            case 0b00011000:
                PORTB = 0b10111110;
                break;
            //7
            case 0b00011100:
                PORTB = 0b11100000;
                break;
            //8
            case 0b00100000:
                PORTB = 0b11111110;
                break;
        }
    }
}
