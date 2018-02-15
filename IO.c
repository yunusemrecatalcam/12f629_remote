#include <xc.h>
#include "IO.h"
#include "timer.h"
#define _XTAL_FREQ 4000000

void IO_init(){

    CMCON = 0x07;//comparator off

    TRISIObits.TRISIO1=0; //led pin output
    OPTION_REGbits.nGPPU=1;//pull up setting
    
    TRISIObits.TRISIO2=1;  //buttons initialized as input
    TRISIObits.TRISIO3=1;
    TRISIObits.TRISIO4=1;
    TRISIObits.TRISIO5=1;
    
    
}

void led_click(int times){
    for(int i=0;i<times;i++){
        LED=1;
        __delay_ms(200);
        LED=0;
        __delay_ms(200);
    }
}

void Send_data(char command[]){
    
}
