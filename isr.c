#include <xc.h>

extern unsigned char sec, min;
extern unsigned char pre_heat;
void __interrupt() isr(void)
{
    static unsigned int count = 0;
    
    if (TMR2IF)
    {    
        if (++count == 1250) // 1sec
        {
            count = 0;
            if (sec > 0) sec--;
            else if (min > 0){ min--; sec = 59; }
            
            if(pre_heat > 0) pre_heat--;
            
        }
        
        TMR2IF = 0;
    }
}