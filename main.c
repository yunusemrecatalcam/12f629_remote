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
    
    LED =1;
            
    while(Button_check()){

        LED =0;
            
            
        
    }
    
    return;
}
