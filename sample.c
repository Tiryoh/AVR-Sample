/*
 * sample.c - AVR-Sample
 * Copyright (c) 2014 Tiryoh <tiryoh@gmail.com>
 * 
 * This software is released under the MIT License.
 * http://opensource.org/licenses/mit-license.php
 */

#include <avr/io.h>
int main(void){
    
    /***** IN *****/
    DDRD = 0x00;  //すべてに"0"を入れてるので"入力"指定。
    PORTD = 0xFF;  //"1"を入れると内部プルアップ。
    
    
    /***** OUT *****/
    DDRB = 0xFF;  //すべてに"1"を入れてるので"出力"指定。
    PINB = 0x00;  //"1"を入れると出力が反転。
    
    //出力レジスタは"PORT"
    //入力レジスタは"PIN"
    
    PORTB = 0x00;  //初期化
    
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
