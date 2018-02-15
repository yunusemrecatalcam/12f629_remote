#include <xc.h>

void IO_init(){
    CMCON = 0x07;//comparator off

    TRISIObits.TRISIO1=0; //led pin output
    OPTION_REGbits.nGPPU=1;
}
