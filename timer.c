#include "timer.h"
#include <stdint.h>

uint32_t timetick=0;

void Timer_init(){
    INTCONbits.GIE=1;
    INTCONbits.T0IE=1;
    INTCONbits.T0IF=0;
    
    OPTION_REGbits.T0CS=0;
    OPTION_REGbits.T0SE=0;
    OPTION_REGbits.PSA=0;//0 for assigned
    OPTION_REGbits.PS0=0;
    OPTION_REGbits.PS1=0;
    OPTION_REGbits.PS2=0;    
}

void interrupt kes(void){
    if(INTCONbits.T0IF && INTCONbits.T0IE){
        timetick++;
        INTCONbits.T0IF=0;
    }
    
}
