#include<18LF4620.h>
#FUSES NOWDT                    //No Watch Dog Timer
#FUSES NOFCMEN                  //Fail-safe clock monitor disabled
#FUSES NOIESO                   //Internal External Switch Over mode disabled
#FUSES PUT                      //Power Up Timer
#FUSES NOBROWNOUT               //No brownout reset
#FUSES NOPBADEN                 //PORTB pins are configured as digital I/O on RESET
#FUSES NOLPT1OSC                //Timer1 configured for higher power operation
#FUSES NOLVP                    //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O
#FUSES NOXINST                  //Extended set extension and Indexed Addressing mode disabled (Legacy mode)
#use rs232(baud=9600,parity=N,xmit=PIN_C6,rcv=PIN_C7,bits=8)
#use i2c(MASTER,FAST,SDA=PIN_C4,SCL=PIN_C3)


#int_timer0
void isr_timer0()
{
}

#int_RDA
void isr_serial()
{
}

#use delay(clock=16000000)

void main()
{
    int x=0;
    while(TRUE)
    {
      x++;
    }
}
