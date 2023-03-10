#include <mega64.h>

//macros
#define PORTA_DIRECTION DDRA
#define PORTA_OUTPUT PORTA
#define PORTB_DIRECTION DDRB
#define PORTB_OUTPUT PORTB
#define PORTC_DIRECTION DDRC
#define PORTC_OUTPUT PORTC
#define PORTD_DIRECTION DDRD
#define PORTD_OUTPUT PORTD
#define PORTE_DIRECTION DDRE
#define PORTE_OUTPUT PORTE
#define PORTF_DIRECTION DDRF
#define PORTF_OUTPUT PORTF
#define PORTG_DIRECTION DDRG
#define PORTG_OUTPUT PORTG

//main function
void main(void)
{

//set PORTA
PORTA_DIRECTION=0xFF; 
PORTA_OUTPUT=0x00;

//set PORTB
PORTB_DIRECTION=0xFF; 
PORTB_OUTPUT=0x00;

//set PORTC
PORTC_DIRECTION=0xFF; 
PORTC_OUTPUT=0x01;

//set PORTD
PORTD_DIRECTION=0xFF; 
PORTD_OUTPUT=0x00;

//set PORTE
PORTE_DIRECTION=0xFF; 
PORTE_OUTPUT=0x00;

//set PORTF
PORTF_DIRECTION=0xFF; 
PORTF_OUTPUT=0x00;

//set PORTG
PORTG_DIRECTION=0xFF; 
PORTG_OUTPUT=0x00;

}