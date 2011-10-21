/* 
M3 -- Meka Robotics Real-Time Control System
Copyright (c) 2010 Meka Robotics
Author: edsinger@mekabot.com (Aaron Edsinger)

M3 is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

M3 is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with M3.  If not, see <http://www.gnu.org/licenses/>.
*/


#include "p33fxxxx.h"
#include "setup.h"

void setup_oscillator(void);
void setup_ports(void);
void setup_peripheral_pin_select(void);
void setup_interrupt_priorities(void);


void setup_interrupt_priorities(void)
{
	//Higher number = Higher priority

	//Ethercat Master AL interrupt on INT0

	//Apps inherit Bootloader settings so need set here for Bootloader too.
	//ToDo:FIX!

	_INT0IP=3;	//Ethercat Interrupt
	_INT2IP=2;	//SYNC0 Interrupt

	_AD1IP=5;	//ADC conversion done 
	_T3IP=4;	//Timer3 

#ifdef USE_ENCODER_MA3

	_IC1IP=3;	//InputCapture 1 (Abs Encoder)
#if defined HB2_H2R1_J0J1 \
	|| defined HB2_H2R1_J2J3J4 ||defined HB2_H2R2_J0J1 || defined HB2_H2R2_J2J3J4  \
	|| defined HB2_0_2_H2R3_J0J1 || defined HB2_0_2_H2R3_J2J3J4
	_IC2IP=4; //InputCapture 2 (Abs Encoder)
#endif

#if defined HB2_H2R1_J2J3J4 || defined HB2_H2R2_J2J3J4 || defined HB2_0_2_H2R3_J2J3J4
	_IC7IP=4; //InputCapture 7 (Abs Encoder)
#endif
#endif
}


void setup_oscillator(void)
{
	/*
	Need to Multiply FIN by factor of 3.2
	FIN (INPUT FREQ)	25MHZ	FOR OSCILLATOR FOR ET1200	
	N1	25	PLLPRE	
	N2	2	PLLPOST	
	M	160	PLLDIV	
	FOSC=FIN*(M/(N1*N2))	80MHZ		
	FCY=FOSC/2	GIVES A 40 MIPS	OUTPUT FREQUENCY	
	*/
	PLLFBD=160;
	CLKDIVbits.PLLPOST=0;//Gives divide by 2
	CLKDIVbits.PLLPRE=23; //Gives divide by 25
	// the CPU will automatically switch when all is stable....
	while(OSCCONbits.LOCK!=1) {};  // Wait for PLL to lock
	return;
}

void setup_ports(void)
{

	// Clear All Ports Prior to defining I/O
	PORTA=0;
	PORTB=0;
	PORTC=0;

	/* 
	TRIS<X>=1 MAKES PIN AS INPUT	
	TRIS<X>=0 MAKES PIN AS OUTPUT	
	AFTER RESET, ALL PORT PINS ARE INPUTS			
	PORT<X> READS OR WRITES TO PIN			
	ODC<X>=1 SETS PIN TO OPEN DRAIN OUTPUT			
	OPEN DRAIN WITH 5V PULLUP ALLOWS 5V OUTPUT			
	FOR ADC MUST SET TRIS<X>=1		

	TRISA			
	RA0	INPUT	PIN19	AN0
	RA1	INPUT	PIN20	AN1
	RA2	INPUT	PIN30	OSCI
	RA3	INPUT	PIN31	NC
	RA4	OUTPUT	PIN34	HEARTBEAT LED
	RA7	INPUT	PIN13	NC
	RA8	INPUT	PIN32	EEPROM_LOADED
	RA9	INPUT	PIN35	NC
	RA10 INPUT	PIN12	NC

	TRISB			
	RB0	INPUT	PIN21	AN2
	RB1	INPUT	PIN22	AN3
	RB2	INPUT	PIN23	AN4
	RB3	INPUT	PIN24	AN5
	RB4	INPUT	PIN33	RP4
	RB5	INPUT	PIN41	RP5
	RB6	INPUT	PIN42	RP6
	RB7	INPUT	PIN43	SPI_IRQ
	RB8	INPUT	PIN44	RP8_UART_RX
	RB9	OUTPUT	PIN1	RP9_UART_TX
	RB10	INPUT	PIN8	PGM_PGD
	RB11	INPUT	PIN9	PGM_PGC
	RB12	OUTPUT	PIN10	RP12_PWM
	RB13	OUTPUT	PIN11	RP13_PWM
	RB14	OUTPUT	PIN14	RP14_PWM
	RB15	OUTPUT	PIN15	RP15_PWM

	TRISC			
	RC0	INPUT	PIN25	AN6
	RC1	INPUT	PIN26	AN7
	RC2	INPUT	PIN27	AN8
	RC3	INPUT	PIN36	SYNC_1
	RC4	INPUT	PIN37	SYNC_0
	RC5	INPUT	PIN38	NC
	RC6	OUTPUT	PIN2	SPI_SEL
	RC7	OUTPUT	PIN3	SPI_CLK
	RC8	OUTPUT	PIN4	SPI_DO
	RC9	INPUT	PIN5	SPI_DI
	*/


	// Hardwired pins
	TRISAbits.TRISA4=0;		//RA4	OUTPUT	PIN34	HEARTBEAT LED
	TRISAbits.TRISA8=1;		//RA8	INPUT	PIN32	EEPROM_LOADED
	TRISBbits.TRISB7=1;		//RB7	INPUT	PIN43	SPI_IRQ
	TRISBbits.TRISB10=1;	//RB10	INPUT	PIN8	PGM_PGD
	TRISBbits.TRISB11=1;	//RB10	INPUT	PIN8	PGM_PGD
	TRISCbits.TRISC3=0;		//RC3	OUTPUT	PIN36	LATCH_1
	TRISCbits.TRISC4=1;		//RC4	INPUT	PIN37	SYNC_0
	TRISCbits.TRISC6=0;		//RC6	OUTPUT	PIN2	SPI_SEL
	TRISCbits.TRISC7=0;		//RC7	OUTPUT	PIN3	SPI_CLK
	TRISCbits.TRISC8=0;		//RC8	OUTPUT	PIN4	SPI_DO
	TRISCbits.TRISC9=1;		//RC9	INPUT	PIN5	SPI_DI

		
	/*TRISAbits.TRISA0=1;		//RA0	INPUT	PIN19	AN0
	TRISAbits.TRISA1=1;		//RA1	INPUT	PIN20	AN1
	
	TRISBbits.TRISB0=1;		//RB0	INPUT	PIN21	AN2
	TRISBbits.TRISB1=1;		//RB1	INPUT	PIN22	AN3
	TRISBbits.TRISB2=1;		//RB2	INPUT	PIN23	AN4
	TRISBbits.TRISB3=1;		//RB3	INPUT	PIN24	AN5
	TRISBbits.TRISB4=1;		//RB4	INPUT	PIN33	RP4
	TRISBbits.TRISB5=1;		//RB5	INPUT	PIN41	RP5
	TRISBbits.TRISB6=1;		//RB6	INPUT	PIN42	RP6		
	TRISBbits.TRISB7=1;		//RB7	INPUT	PIN43	SPI_IRQ
	TRISBbits.TRISB8=1;		//RB8	INPUT	PIN44	RP8_UART_RX
	TRISBbits.TRISB9=1;		//RB9	OUTPUT	PIN1	RP9_UART_TX
	TRISBbits.TRISB10=1;	//RB10	INPUT	PIN8	PGM_PGD
	TRISBbits.TRISB11=1;	//RB11	INPUT	PIN9	PGM_PGC
	TRISBbits.TRISB12=1;	//RB12	OUTPUT	PIN10	RP12_PWM
	TRISBbits.TRISB13=1;	//RB13	OUTPUT	PIN11	RP13_PWM
	TRISBbits.TRISB14=1;	//RB14	OUTPUT	PIN14	RP14_PWM
	TRISBbits.TRISB15=1;	//RB15	OUTPUT	PIN15	RP15_PWM

	TRISCbits.TRISC0=1;		//RC0	INPUT	PIN25	AN6
	TRISCbits.TRISC1=1;		//RC1	INPUT	PIN26	AN7
	TRISCbits.TRISC2=1;		//RC2	INPUT	PIN27	AN8*/


#if defined HB2_H2R1_J0J1 
	TRISAbits.TRISA0=1;		//RA0	INPUT	PIN19	AN0
	TRISAbits.TRISA1=1;		//RA1	INPUT	PIN20	AN1
	TRISBbits.TRISB0=1;		//RB0	INPUT	PIN21	AN2
	TRISBbits.TRISB1=1;		//RB1	INPUT	PIN22	AN3
	TRISBbits.TRISB2=1;		//RB2	INPUT	PIN23	AN4
	TRISBbits.TRISB3=1;		//RB3	INPUT	PIN24	AN5
	TRISCbits.TRISC0=1;		//RC0	INPUT	PIN25	AN6
	TRISCbits.TRISC1=1;		//RC1	INPUT	PIN26	AN7
	TRISCbits.TRISC2=1;		//RC2	INPUT	PIN27	AN8
	TRISBbits.TRISB4=0;		//RB4	OUTPUT	PIN33	RP4 (AMP_EN1)
	TRISBbits.TRISB5=1;		//RB5	INPUT	PIN41	RP5 (MA3 ENC 1)
	TRISBbits.TRISB6=1;		//RB6	INPUT	PIN42	RP6 (MA3 ENC 0)
	TRISBbits.TRISB9=0;		//RB9	OUTPUT	PIN1	RP9 (AMP_EN0)
	TRISBbits.TRISB12=0;	//RB12	OUTPUT	PIN10	RP12_PWM	(Pwm0)
	TRISBbits.TRISB13=0;	//RB13	OUTPUT	PIN11	RP13_PWM	(Dir0)
	TRISBbits.TRISB14=0;	//RB14	OUTPUT	PIN14	RP14_PWM	(Pwm1)
	TRISBbits.TRISB15=0;	//RB15	OUTPUT	PIN15	RP15_PWM	(Dir1)
#endif

#if defined HB2_H2R2_J0J1  || defined HB2_0_2_H2R3_J0J1 
	TRISAbits.TRISA0=1;		//RA0	INPUT	PIN19	AN0
	TRISAbits.TRISA1=1;		//RA1	INPUT	PIN20	AN1
	TRISBbits.TRISB0=1;		//RB0	INPUT	PIN21	AN2
	TRISBbits.TRISB1=1;		//RB1	INPUT	PIN22	AN3
	TRISBbits.TRISB2=1;		//RB2	INPUT	PIN23	AN4
	TRISBbits.TRISB3=1;		//RB3	INPUT	PIN24	AN5
	TRISCbits.TRISC0=1;		//RC0	INPUT	PIN25	AN6 (Not Used)
	TRISCbits.TRISC1=1;		//RC1	INPUT	PIN26	AN7 (Not Used)
	TRISCbits.TRISC2=1;		//RC2	INPUT	PIN27	AN8 (Not Used)
	TRISBbits.TRISB4=1;		//RB4	INPUT	PIN33	RP4 (Not Used)
	TRISBbits.TRISB5=1;		//RB5	INPUT	PIN41	RP5 (MA3 ENC 1)
	TRISBbits.TRISB6=1;		//RB6	INPUT	PIN42	RP6 (MA3 ENC 0)
	TRISBbits.TRISB9=1;		//RB9	Input	PIN1	RP9 (Not Used)
	TRISBbits.TRISB12=0;	//RB12	OUTPUT	PIN10	RP12_PWM	(Pwm0)
	TRISBbits.TRISB13=0;	//RB13	OUTPUT	PIN11	RP13_PWM	(Dir0)
	TRISBbits.TRISB14=0;	//RB14	OUTPUT	PIN14	RP14_PWM	(PwmHJ1)
	TRISBbits.TRISB15=0;	//RB15	OUTPUT	PIN15	RP15_PWM	(PwmLJ1)
#endif

#if defined HB2_H2R1_J2J3J4 
	TRISAbits.TRISA0=1;		//RA0	INPUT	PIN19	AN0
	TRISAbits.TRISA1=1;		//RA1	INPUT	PIN20	AN1
	TRISBbits.TRISB0=1;		//RB0	INPUT	PIN21	AN2
	TRISBbits.TRISB1=1;		//RB1	INPUT	PIN22	AN3
	TRISBbits.TRISB2=1;		//RB2	INPUT	PIN23	AN4
	TRISBbits.TRISB3=1;		//RB3	INPUT	PIN24	AN5
	TRISCbits.TRISC0=1;		//RC0	INPUT	PIN25	AN6
	TRISCbits.TRISC1=1;		//RC1	INPUT	PIN26	AN7
	
	TRISBbits.TRISB4=0;		//RB4	OUTPUT	PIN33	RP4 (AMP_EN2)
	TRISBbits.TRISB9=0;		//RB9	OUTPUT	PIN1	RP9 (AMP_EN3)
	TRISCbits.TRISC2=0;		//RC2	OUTPUT	PIN27	AN8 (AMP_EN4)

	TRISBbits.TRISB5=1;		//RB5	INPUT	PIN41	RP5 (MA3 ENC 2)
	TRISBbits.TRISB6=1;		//RB6	INPUT	PIN42	RP6 (MA3 ENC 3)
	TRISBbits.TRISB8=1;		//RB8	INPUT	PIN44	RP8 (MA3 ENC 4)

	TRISBbits.TRISB10=0;	//RB10	OUTPUT	PIN8	RP10_PWM    (Pwm4)
	TRISBbits.TRISB11=0;	//RB11	OUTPUT	PIN9	RP11_PWM    (Dir4)
	TRISBbits.TRISB12=0;	//RB12	OUTPUT	PIN10	RP12_PWM	(Pwm3)
	TRISBbits.TRISB13=0;	//RB13	OUTPUT	PIN11	RP13_PWM	(Dir3)
	TRISBbits.TRISB14=0;	//RB14	OUTPUT	PIN14	RP14_PWM	(Pwm2)
	TRISBbits.TRISB15=0;	//RB15	OUTPUT	PIN15	RP15_PWM	(Dir2)
#endif

#if defined HB2_H2R2_J2J3J4 || defined HB2_0_2_H2R3_J2J3J4
	TRISAbits.TRISA0=1;		//RA0	INPUT	PIN19	AN0
	TRISAbits.TRISA1=1;		//RA1	INPUT	PIN20	AN1
	TRISBbits.TRISB0=1;		//RB0	INPUT	PIN21	AN2
	TRISBbits.TRISB1=1;		//RB1	INPUT	PIN22	AN3
	TRISBbits.TRISB2=1;		//RB2	INPUT	PIN23	AN4
	TRISBbits.TRISB3=1;		//RB3	INPUT	PIN24	AN5
	TRISCbits.TRISC0=1;		//RC0	INPUT	PIN25	AN6
	TRISCbits.TRISC1=1;		//RC1	INPUT	PIN26	AN7
	
	TRISBbits.TRISB4=1;		//RB4	INPUT	PIN33	RP4 (Not Used)
	TRISBbits.TRISB9=1;		//RB9	INPUT	PIN1	RP9 (Not Used)
	TRISCbits.TRISC2=1;		//RC2	INPUT	PIN27	AN8 (Not Used)

	TRISBbits.TRISB5=1;		//RB5	INPUT	PIN41	RP5 (MA3 ENC 2)
	TRISBbits.TRISB6=1;		//RB6	INPUT	PIN42	RP6 (MA3 ENC 3)
	TRISBbits.TRISB8=1;		//RB8	INPUT	PIN44	RP8 (MA3 ENC 4)

	TRISBbits.TRISB10=0;	//RB10	OUTPUT	PIN8	RP10_PWM    (PwmHJ4)
	TRISBbits.TRISB11=0;	//RB11	OUTPUT	PIN9	RP11_PWM    (PwmLJ4)
	TRISBbits.TRISB12=0;	//RB12	OUTPUT	PIN10	RP12_PWM	(PwmHJ3)
	TRISBbits.TRISB13=0;	//RB13	OUTPUT	PIN11	RP13_PWM	(PwmLJ3)
	TRISBbits.TRISB14=0;	//RB14	OUTPUT	PIN14	RP14_PWM	(PwmHJ2)
	TRISBbits.TRISB15=0;	//RB15	OUTPUT	PIN15	RP15_PWM	(PwmLJ2)
#endif
	return;
}

//Note: If using bootloader, only the first call (Bootloader) works
//Second call by app doesn't work. So for now, bootloader peripheral config.
//must support all devices.
//TODO: leave PPS unlocked after one call. 

void setup_peripheral_pin_select(void)
{
	//Unlock ala datasheet #OSCONL 
	asm volatile (	"mov #0x742, w1 \n"
					"mov #0x46, w2 \n"
					"mov #0x57, w3 \n"
					"mov.b w2, [w1] \n"
					"mov.b w3, [w1] \n"
					"bclr 0x742, #0x6");

	//RPINRX AND RPORX ARE SET TO 0X0000 AFTER RESET
	//THEREFORE ALL INPUTS INITIALLY TIED TO RP0
	//WHICH IS AN2  IN THIS DESIGN.
	//THIS SEEMS OK...
	//RP21 IS NC SO THIS ALL UNUSED PERIPHERAL INPUTS
	//SHOULD BE DISABLED AND MAPPED TO THIS PIN
	//ALL UNUSED OUTPUTS GET MAPPED TO VSS
	
#ifdef USE_ETHERCAT
	////// Inputs  /////
	//RPINR0bits.INT1R=19;	//(SYNC1) INT1 ON RP19 :					RPINR0
	RPINR1bits.INT2R=20;	//(SYNC0) INT2 ON RP20 :					RPINR1	
	RPINR20bits.SDI1R=25;	//SPI DATA IN ON RP25 :						RPINR20	
	////// Outputs /////
	RPOR11bits.RP22R = 0b01001;  //SPI SLAVE SELECT OUT ON RP22 :			RPOR11
	RPOR11bits.RP23R = 0b01000; //SPI CLOCK OUT ON RP23 :					RPOR11	
	RPOR12bits.RP24R = 0b00111; //SPI DATA OUT ON RP24  :					RPOR12	

#endif

#ifdef USE_ENCODER_MA3

#if defined HB2_H2R1_J0J1  || defined HB2_H2R2_J0J1 || defined HB2_0_2_H2R3_J0J1 
	RPINR7bits.IC1R=6;		//InputCapture 1 ON RP6					RPINR7
	RPINR7bits.IC2R=5;		//InputCapture 2 ON RP5					RPINR7
#endif
#if defined HB2_H2R1_J2J3J4 || defined HB2_H2R2_J2J3J4 || defined HB2_0_2_H2R3_J2J3J4
	RPINR7bits.IC1R=5;		//InputCapture 1 ON RP5 :					RPINR7
	RPINR7bits.IC2R=6;		//InputCapture 2 ON RP6 :					RPINR7
	RPINR10bits.IC7R=8;		//InputCapture 3 ON RP8 :					RPINR10
#endif
#endif

	//Lock ala datasheet
	asm volatile (	"mov #0x742, w1 \n"
				"mov #0x46, w2 \n"
				"mov #0x57, w3 \n"
				"mov.b w2, [w1] \n"
				"mov.b w3, [w1] \n"
				"bset 0x742, #0x6");
	return;
}

void us_delay(int n) {
  int i,j;
  for (i=0;i<n;i++) {
    for(j=0;j<US_DELAY_CONST;j++) ;
  }
}
void ms_delay(int n) {
  int i,j;
  for (i=0;i<n;i++) {
    for(j=0;j<MS_DELAY_CONST;j++) ;
  }
}

void us100_delay(int n) {
  int i,j;
  for (i=0;i<n;i++) {
    for(j=0;j<US100_DELAY_CONST;j++) ;
  }
}

