#AVR-Sample
##What's this?

Sample Program for AVR.

* ATtiny2313
* ATtiny13A
* ATmega168
* ATmega328P
* etc...

##LISENCE
This software is released under the MIT License, see LICENSE.md.

***
Sample.c

    #include <avr/io.h>
    
    int main(void){
    
        
        /***** IN *****/
        DDRD = 0x00;
        //すべてに"0"を入れてるので"入力"指定。
        PORTD = 0xFF;
        //"1"を入れると内部プルアップ。
        
        
        /***** OUT *****/
        DDRB = 0xFF;
        //すべてに"1"を入れてるので"出力"指定。
        PORTB = 0x00;
        //"1"を入れると出力が反転。
        
        //出力レジスタは"PORT"
        //入力レジスタは"PIN"
        
        while(1){
            if( PIND == 0x04 ){  //*0000100
                PORTB = 0x03 ;   //00000011
            }
            if( PIND == 0x0C ){  //*0001100
                PORTB = 0x02 ;   //00000010
            }
            if( PIND == 0x1C ){  //*0011100
                PORTB = 0x01 ;   //00000001
            }
            if( PIND == 0x3C ){  //*0111100
                PORTB = 0x00 ;   //00000000
            }
        }
        return 0;
    }
