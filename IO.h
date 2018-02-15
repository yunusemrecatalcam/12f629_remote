#ifndef IO_H
#define	IO_H

#define BUTTON1    GPIObits.GP2
#define BUTTON2    GPIObits.GP3  
#define BUTTON3    GPIObits.GP4  
#define BUTTON4    GPIObits.GP5
#define LED        GPIObits.GP1

void IO_init(void);
void led_click(int);
void Send_data(char[]);
        
#endif	/* XC_HEADER_TEMPLATE_H */

