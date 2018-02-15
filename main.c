/*
 * File:   main.c
 * Author: Monster
 *
 * Created on 15 ?ubat 2018 Per?embe, 11:01
 */


#include <xc.h>
#include "config.h"
#include "IO.h"

#define _XTAL_FREQ 4000000
void main(void) {

    IO_init();
    //gp2 button 1
            //gp5 button 4
    
    while(1){

        GPIObits.GP1=1;//led
        __delay_ms(100);
        GPIObits.GP1=0;//led
        __delay_ms(100);
        
    }
    
    return;
}
