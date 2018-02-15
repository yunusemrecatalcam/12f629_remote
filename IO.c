#include <xc.h>

#include "IO.h"

void IO_init(){

    CMCON = 0x07;//comparator off

    TRISIObits.TRISIO1=0; //led pin output
    OPTION_REGbits.nGPPU=1;//pull up setting
    
    TRISIObits.TRISIO2=1;  //buttons initialized as input
    TRISIObits.TRISIO3=1;
    TRISIObits.TRISIO4=1;
    TRISIObits.TRISIO5=1;
    
    
}

int Button_check(){
    if(BUTTON1 || BUTTON2 || BUTTON3 || BUTTON4)
        return 1;
    else
        return 0;
}
