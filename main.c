/*
 * File:   main.c
 * Author: Monster
 *
 * Created on 15 ?ubat 2018 Per?embe, 11:01
 */


#include <xc.h>
#include <stdint.h>
#include "config.h"
#include "IO.h"
#include "timer.h"

#define _XTAL_FREQ 4000000

uint32_t timetochange=0;
char command[10];
void main(void) {

    IO_init();
    Timer_init();
    
    LED =1;
    timetochange=timetick;
    
    //while (1) {
      //  Send_data();
    //}

    while(1){
        if(timetick-timetochange>=100){
            LED^=1;
            timetochange=timetick;
        }
    }
    while (1) {
        
        if(BUTTON1){
            led_click(1);
        }else{
            if(BUTTON2){
                led_click(2);
            }else{
                if(BUTTON3){  //bozuk 
                    led_click(3);
                }else{
                    if(BUTTON4){
                        led_click(4);
                    }
                }
            }
        }
    }

    
    return;
}
