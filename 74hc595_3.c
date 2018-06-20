#define F_CPU 11059200ul
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <avr/pgmspace.h>
#include <string.h>
#include "font5x7.h"

#define HC595_DDR  DDRD
#define HC595_PORT PORTD
#define DS_PIN     PD0
#define ST_CP_PIN  PD1
#define SH_CP_PIN  PD2

#define ST_CP_Low()  HC595_PORT&=~1<<(ST_CP_PIN)
#define ST_CP_High() HC595_PORT|=(1<<ST_CP_PIN)
#define SH_CP_Low()  HC595_PORT&=~(1<<SH_CP_PIN)
#define SH_CP_High() HC595_PORT|=(1<<SH_CP_PIN)
#define PGM_READ_BYTE pgm_read_byte_near( smallFont + ((string[chr_tmp]-' ')*5)+ind_tmp)

#define HC595DataHigh() (HC595_PORT|=(1<<DS_PIN))
#define HC595DataLow() (HC595_PORT&=(~(1<<DS_PIN)))

#define ROW_CNT 7
#define COL_CNT 30

#define DDR_ROW DDRC
#define PORT_ROW PORTC

void HC595Init();

void HC595Pulse();

void HC595Latch();

//-----------------------------------------------------------
//volatile  PGM_P abc=smallFont;
volatile char string[]="  *Hello world*   ";
uint8_t chr=0,len,col=0,row=0,spd=100,cnt=0,ind=0,chr_tmp,ind_tmp;

int main(void)
{
    DDR_ROW=0xff;
    timer_init();
    HC595Init();
    len=strlen(string);
    sei();
    while(1)
    {
       
    }
}


void timer_init(void)
{
   TCCR0|=(1<<CS00);//|(1<<CS01); add CS01 if you are going to upload in hardware.
    TIMSK|=1<<TOIE0;
	}

void HC595Init()
{
    HC595_DDR|=((1<<SH_CP_PIN)|(1<<ST_CP_PIN)|(1<<DS_PIN));
}


void HC595Pulse()
{HC595_PORT|=(1<<SH_CP_PIN);
 HC595_PORT&=(~(1<<SH_CP_PIN));
}

void HC595Latch()
{
  
    HC595_PORT|=(1<<ST_CP_PIN);
     _delay_us(1);
    HC595_PORT&=(~(1<<ST_CP_PIN));
     _delay_us(1);
}

ISR(TIMER0_OVF_vect)
{
    cnt++;
    chr_tmp = chr;
    ind_tmp=ind;
    
    if (cnt==spd)
    {
        cnt=0;
        ind++;
        if (ind==5)
        {
            ind=0;
            chr++;
            if (chr==len)
            {
                chr=0;
            }
        }
    
        return;   
    }
 
    for(col=0;col<COL_CNT;col++)
    {
        uint8_t data;
       
        if(ind_tmp!=5)
        {
            data=PGM_READ_BYTE;
			}
        else
        {
            data=0x00;
        }
    
        if((data & (1<<row)))
            HC595DataHigh();
        else
            HC595DataLow();

        HC595Pulse();

        ind_tmp++;

        if(ind_tmp==6)//if we get 5. byte of a char we get next char's first byte next time
        {
            chr_tmp++;
            ind_tmp=0;

            if(chr_tmp >=len)
                chr_tmp=0;
        }           
       
    }
    
    //changes row and cloumns simultaneously
    PORT_ROW=~(1<<row);
    HC595Latch();

    row++;
    if(row==ROW_CNT)
    {
        row=0;
    }
    
    
}       
