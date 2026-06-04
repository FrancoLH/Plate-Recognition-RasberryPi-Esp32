#pragma config FOSC  = XT      
#pragma config WDTE  = OFF    
#pragma config PWRTE = ON      
#pragma config MCLRE = ON      
#pragma config BOREN = ON      
#pragma config LVP   = OFF     
#pragma config CPD   = OFF     
#pragma config CP    = OFF     

#define _XTAL_FREQ 4000000     
#include <xc.h>

char mi_letra = 'A';

void main(void) {
    CMCON = 0x07;
    TRISB0 = 0;    
    TRISB1 = 1;   
    TRISB2 = 0;    
    SPEN = 0;      
    CREN = 0;      
    TXEN = 0;     
    RB0 = 0;
    RB2 = 0;
    while (1) {
        if (RB1 == 0) {
            if (mi_letra == 'A') {
             RB2 = 1;   
             RB0 = 0;   
            } 
            else {
            RB0 = 1;   
            RB2 = 0;   
         }
        while (RB1 == 0);
         __delay_ms(20);   
		RB0=0;
		RB2=0;
            }
        }
    }
