#ifndef TIMER_H
#define	TIMER_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h>

void Timer_init(void);
void interrupt kes(void);

extern uint32_t timetick;
#endif	/* XC_HEADER_TEMPLATE_H */

