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



#if 0

void isr_update_input_pdo(void)
{

//////////////////////////// Two-Thee Channel Controllers /////////////////////////////////////////////////////

#if defined M3_HMB_H1R1 || defined M3_GMB_G1R1 || defined M3_HEX2_S1R1 || defined M3_HB2_H2R1_J0J1 \
	|| defined M3_HB2_H2R1_J2J3J4 || defined M3_HB2_H2R2_J0J1 || defined M3_HB2_H2R2_J2J3J4 \
	|| defined M3_HB2_H2R3_J0J1 || defined M3_HB2_H2R3_J2J3J4

#ifdef USE_ENCODER_MA3
	ec_stat.status[0].qei_period=ma3_period(0);
	ec_stat.status[1].qei_period=ma3_period(1);
	ec_stat.status[0].qei_on=ma3_on(0);
	ec_stat.status[1].qei_on=ma3_on(1);
	ec_stat.status[0].qei_rollover=ma3_rollover(0);
	ec_stat.status[1].qei_rollover=ma3_rollover(1);
#if defined M3_HB2_H2R1_J2J3J4 || defined M3_HB2_H2R2_J2J3J4 || defined M3_HB2_H2R3_J2J3J4
	ec_stat.status[2].qei_period=ma3_period(2);
	ec_stat.status[2].qei_on=ma3_on(2);
	ec_stat.status[2].qei_rollover=ma3_rollover(2);
#endif
#endif

#if defined USE_ADC

#if defined M3_HB2_H2R2_J0J1  || defined M3_HB2_H2R3_J0J1 
	ec_stat.status[0].adc_torque=get_avg_adc(ADC_SEAS_A);
	ec_stat.status[1].adc_torque=get_avg_adc(ADC_SEAS_B);
	ec_stat.status[0].adc_amp_temp=get_avg_adc(ADC_AMP_TEMP_A);
	ec_stat.status[1].adc_amp_temp=get_avg_adc(ADC_AMP_TEMP_B);
	ec_stat.status[0].adc_motor_temp=ec_stat.status[0].adc_amp_temp;//shared, approximate as ambient temp
	ec_stat.status[1].adc_motor_temp=ec_stat.status[1].adc_amp_temp;//shared, approximate as ambient temp
	ec_stat.status[0].adc_current_a=get_avg_adc(ADC_CURRENT_A);
	ec_stat.status[1].adc_current_a=get_avg_adc(ADC_CURRENT_B);
#endif

#if defined M3_HB2_H2R2_J2J3J4 || defined M3_HB2_H2R3_J2J3J4
	ec_stat.status[0].adc_torque=get_avg_adc(ADC_SEAS_A);
	ec_stat.status[1].adc_torque=get_avg_adc(ADC_SEAS_B);
	ec_stat.status[2].adc_torque=get_avg_adc(ADC_SEAS_C);
	ec_stat.status[0].adc_amp_temp=get_avg_adc(ADC_AMP_TEMP_A);
	ec_stat.status[1].adc_amp_temp=ec_stat.status[0].adc_amp_temp;//shared
	ec_stat.status[2].adc_amp_temp=ec_stat.status[0].adc_amp_temp;//shared
	ec_stat.status[0].adc_motor_temp=ec_stat.status[0].adc_amp_temp;//shared
	ec_stat.status[1].adc_motor_temp=ec_stat.status[0].adc_amp_temp;//shared
	ec_stat.status[2].adc_motor_temp=ec_stat.status[0].adc_amp_temp;//shared
	ec_stat.status[0].adc_current_a=get_avg_adc(ADC_CURRENT_A);
	ec_stat.status[1].adc_current_a=get_avg_adc(ADC_CURRENT_B);
	ec_stat.status[2].adc_current_a=get_avg_adc(ADC_CURRENT_C);
#endif
#endif

#ifdef USE_PWM
	ec_stat.status[0].pwm_cmd=pwm_cmd(0);
	ec_stat.status[1].pwm_cmd=pwm_cmd(1);
#endif
	ec_stat.status[0].debug=ec_debug[0];
	ec_stat.status[1].debug=ec_debug[1];
	ec_stat.status[0].flags=ec_flags[0] | M3ACT_FLAG_QEI_CALIBRATED;
	ec_stat.status[1].flags=ec_flags[1] | M3ACT_FLAG_QEI_CALIBRATED;

#if defined M3_HB2_H2R1_J2J3J4 || defined M3_HB2_H2R2_J2J3J4 || defined M3_HB2_H2R3_J2J3J4
#if defined USE_PWM
	ec_stat.status[2].pwm_cmd=pwm_cmd(2);
#endif
	ec_stat.status[2].debug=ec_debug[2];
	ec_stat.status[2].flags=ec_flags[2] | M3ACT_FLAG_QEI_CALIBRATED;
#endif


#endif
//////////////////////////////////////////////////////////////////

}
#endif


#ifdef USE_ETHERCAT

#include "setup.h"
#include "ethercat.h"
#include "ethercat_def.h"
#include "ethercat_slave_fsm.h"


ec_cmd_t  ec_cmd;
ec_stat_t   ec_stat;

unsigned char pdo_cmd[PDO_COMMAND_SIZE];
unsigned char pdo_stat[PDO_STATUS_SIZE];

int eeprom_loaded(void){return EEPROM_LOADED;}

int ec_wd_expired;
long ec_wd_timestamp;
int ec_debug[NUM_DBG_CH];
int ec_flags[NUM_DBG_CH];
int tmp_debug;

unsigned int rcon_reg;

void isr_update_input_pdo(void);

/////////////////////////////////////////////////////////////
int step_ethercat(void)
{
    if (!DMA1CONbits.CHEN)
    {
        DISABLE_AL_EVENT_INT;
	ECAT_Main();		/* check if masked interrupts were received */
        ENABLE_AL_EVENT_INT;
    }

    return 0;
}

/////////////////////////////////////////////////////////////
void isr_reset_outputs(void)
{
}
/////////////////////////////////////////////////////////////

void isr_update_outputs(void)
{
	if ( EscAlEvent.Byte[1] & (PROCESS_OUTPUT_EVENT>>8) )	/* check if the watchdog should be reset */
	{
		bEcatFirstOutputsReceived = 1;						/* reset watchdog */
		#ifdef EC_USE_WATCHDOG
		ec_wd_timestamp = 0;//ECAT_TIMER_REG;
		ec_wd=0;
		#endif
		ISR_EscReadAccessDMA( (unsigned char *) pdo_cmd, nEscAddrOutputData, nPdOutputSize );
		//memcpy((unsigned char *)&ec_cmd,pdo_cmd,sizeof(ec_cmd_t));
	}
}
/////////////////////////////////////////////////////////////

void isr_update_inputs(void)
{
	unsigned long long dc_timestamp;

	#ifndef USE_SYNC0
	isr_update_input_pdo();
	#endif

	#ifdef USE_TIMESTAMP_DC
	ISR_EscReadAccess((unsigned char*)&dc_timestamp, (unsigned int)EC_LATCH1_POS_EDG_ADDR, (unsigned int)8 );
	ec_stat.timestamp=dc_timestamp;
	#endif

	memcpy(pdo_stat,(unsigned char *)&ec_stat,sizeof(ec_stat_t));
	ISR_EscWriteAccessDMA( (UINT8 *) pdo_stat, nEscAddrInputData, nPdInputSize );
	return;
}


void isr_update_input_pdo(void)
{


//////////////////////////// Two-Thee Channel Controllers /////////////////////////////////////////////////////

#if defined M3_HMB_H1R1 || defined M3_GMB_G1R1 || defined M3_HEX2_S1R1 || defined M3_HB2_H2R1_J0J1 \
	|| defined M3_HB2_H2R1_J2J3J4 || defined M3_HB2_H2R2_J0J1 || defined M3_HB2_H2R2_J2J3J4 \
	|| defined M3_HB2_H2R3_J0J1 || defined M3_HB2_H2R3_J2J3J4

#ifdef USE_ENCODER_MA3
	ec_stat.status[0].qei_period=ma3_period(0);
	ec_stat.status[1].qei_period=ma3_period(1);
	ec_stat.status[0].qei_on=ma3_on(0);
	ec_stat.status[1].qei_on=ma3_on(1);
	ec_stat.status[0].qei_rollover=ma3_rollover(0);
	ec_stat.status[1].qei_rollover=ma3_rollover(1);
#if defined M3_HB2_H2R1_J2J3J4 || defined M3_HB2_H2R2_J2J3J4 || defined M3_HB2_H2R3_J2J3J4
	ec_stat.status[2].qei_period=ma3_period(2);
	ec_stat.status[2].qei_on=ma3_on(2);
	ec_stat.status[2].qei_rollover=ma3_rollover(2);
#endif
#endif

#if defined USE_ADC

#if defined M3_HB2_H2R2_J0J1  || defined M3_HB2_H2R3_J0J1
	ec_stat.status[0].adc_torque=get_avg_adc(ADC_SEAS_A);
	ec_stat.status[1].adc_torque=get_avg_adc(ADC_SEAS_B);
	ec_stat.status[0].adc_amp_temp=get_avg_adc(ADC_AMP_TEMP_A);
	ec_stat.status[1].adc_amp_temp=get_avg_adc(ADC_AMP_TEMP_B);
	ec_stat.status[0].adc_motor_temp=ec_stat.status[0].adc_amp_temp;//shared, approximate as ambient temp
	ec_stat.status[1].adc_motor_temp=ec_stat.status[1].adc_amp_temp;//shared, approximate as ambient temp
	ec_stat.status[0].adc_current_a=get_avg_adc(ADC_CURRENT_A);
	ec_stat.status[1].adc_current_a=get_avg_adc(ADC_CURRENT_B);
#endif

#if defined M3_HB2_H2R2_J2J3J4 || defined M3_HB2_H2R3_J2J3J4
	ec_stat.status[0].adc_torque=get_avg_adc(ADC_SEAS_A);
	ec_stat.status[1].adc_torque=get_avg_adc(ADC_SEAS_B);
	ec_stat.status[2].adc_torque=get_avg_adc(ADC_SEAS_C);
	ec_stat.status[0].adc_amp_temp=get_avg_adc(ADC_AMP_TEMP_A);
	ec_stat.status[1].adc_amp_temp=ec_stat.status[0].adc_amp_temp;//shared
	ec_stat.status[2].adc_amp_temp=ec_stat.status[0].adc_amp_temp;//shared
	ec_stat.status[0].adc_motor_temp=ec_stat.status[0].adc_amp_temp;//shared
	ec_stat.status[1].adc_motor_temp=ec_stat.status[0].adc_amp_temp;//shared
	ec_stat.status[2].adc_motor_temp=ec_stat.status[0].adc_amp_temp;//shared
	ec_stat.status[0].adc_current_a=get_avg_adc(ADC_CURRENT_A);
	ec_stat.status[1].adc_current_a=get_avg_adc(ADC_CURRENT_B);
	ec_stat.status[2].adc_current_a=get_avg_adc(ADC_CURRENT_C);
#endif
#endif

#ifdef USE_PWM
	ec_stat.status[0].pwm_cmd=pwm_cmd(0);
	ec_stat.status[1].pwm_cmd=pwm_cmd(1);
#endif
	ec_stat.status[0].debug=ec_debug[0];
	ec_stat.status[1].debug=ec_debug[1];
	ec_stat.status[0].flags=ec_flags[0] | M3ACT_FLAG_QEI_CALIBRATED;
	ec_stat.status[1].flags=ec_flags[1] | M3ACT_FLAG_QEI_CALIBRATED;

#if defined M3_HB2_H2R1_J2J3J4 || defined M3_HB2_H2R2_J2J3J4 || defined M3_HB2_H2R3_J2J3J4
#if defined USE_PWM
	ec_stat.status[2].pwm_cmd=pwm_cmd(2);
#endif
	ec_stat.status[2].debug=ec_debug[2];
	ec_stat.status[2].flags=ec_flags[2] | M3ACT_FLAG_QEI_CALIBRATED;
#endif


#endif

}
/////////////////////////////////////////////////////////////

void __attribute__((__interrupt__, no_auto_psv)) _INT0Interrupt(void)
{
	//Interrupt service routine for the interrupts from the EtherCAT Slave Controller
	//Do the processing of PDOs here

	/* INTERRUPT_PROTECT_ENABLE acts as an atomic lock on the data. This can protect
	against mode change blips, etc. However it causes priority issues, in particular it affects
	the TIMER3 timing with VertX. Disabling it doesn't seem to affect performance.*/


//	INTERRUPT_PROTECT_ENABLE; //For Elmo board which has QEI but no VertX encoder, disable interrupts to make timestamp copy atomic.	//WAS
	SPI_SEL = SPI_DEACTIVE;				/* SPI should be deactivated to interrupt a possible transmission */
	ACK_ESC_INT;						/* reset the interrupt flag */
	DISABLE_AL_EVENT_INT;

        if (DMA1CONbits.CHEN)
            return;

         {
            DMA1CONbits.CHEN = 0; // Enable DMA0 Channel
            DMA0CONbits.CHEN = 0; // Enable DMA0 Channel
            IEC0bits.DMA1IE = 0;
            IFS0bits.DMA1IF = 0;
            IFS0bits.DMA0IF = 0;		// Clear the DMA0 Interrupt Flag;
            did_tx = 0;
            did_rx = 0;
            do_tx = 0;

        }

	ISR_GetInterruptRegister();			/* get the AL event in EscAlEvent */
	#if DC_SUPPORTED
	if ( bDcSyncActive )				/* read the sync 0 status to acknowledge the SYNC interrupt */
		ISR_EscReadAccess( dummy, ESC_ADDR_SYNC_STATUS, 2);
	#endif

	if (bSynchronMode)						/* Application is synchronized to DC-, SM2- or SM3-event */
	{
		if ( bEcatOutputUpdateRunning )		// Get Process Outputs
                {
			isr_update_outputs();				// EtherCAT slave is in OPERATIONAL, update outputs
                }
		else
			isr_reset_outputs();
		if ( bEcatInputUpdateRunning )		//Update Process Inputs
                {
                    if (did_rx)
                    {
                        do_tx = 1;
                    }
                    else
                    {
			isr_update_inputs();				/* EtherCAT slave is at least in SAFE-OPERATIONAL, update inputs */
                    }

                }
                 if (did_rx || did_tx)
                {
                    SPI_SEL = SPI_ACTIVE;
                    ISR_StartDMA();
                }


	}

//	INTERRUPT_PROTECT_DISABLE;		//WAS
}



/////////////////////////////////////////////////////////////
void setup_ethercat(void)
{
	int i;
	UINT8 u8PDICtrl = 0;

	/* Hardcode PDO size for now*/
	nPdInputSize=PDO_STATUS_SIZE;
	nPdOutputSize=PDO_COMMAND_SIZE;

	// Initialize structs
	memset((unsigned char *)&ec_stat,0,sizeof(ec_stat_t));
	memset((unsigned char *)&ec_cmd,0,sizeof(ec_cmd_t));
	memset(pdo_cmd,0,PDO_COMMAND_SIZE);
	memset(pdo_stat,0,PDO_STATUS_SIZE);

	for (i=0;i<NUM_DBG_CH;i++)
	{
		ec_debug[i]=0;
		ec_flags[i]=0;
	}

	ec_wd_expired=0;
	ec_wd_timestamp=0;
	//Setup SPI
        cfgDma0SpiTx();
	cfgDma1SpiRx();
	setup_spi();

	//Setup synchronization and timers
	INTCON2bits.INT0EP=1;			//INT0 on falling edge
	INTCON2bits.INT1EP=1;			//INT1 on falling edge
	INTCON2bits.INT2EP=1;			//INT2 on falling edge

	SPI_SEL = SPI_DEACTIVE;		/* deactivate SPI */


	ACK_ESC_INT;				/* reset ESC interrupt */

	#ifdef USE_SYNC0
	ACK_SYNC_INT;  				/* RJK: reset INT2 for SYNC0 */
	#endif

	#if DC_SUPPORTED
	ACK_ECAT_TIMER_INT;
	DISABLE_ECAT_TIMER_INT;
	#endif

	#if DC_SUPPORTED
	//	ECAT_CAPTURE_CONFIG_REG = ESC_CAPTURE;
	#endif

	//Make sure the ESC is booted completely
	do
	{
		//Note: If PDI Type is SPI, DPRAM size could be changed in future (ASIC)
		HW_EscReadAccess( (UINT8 *)(&u8PDICtrl), ESC_ADDR_PDICTRL, 1 );
		//ToggleHeartbeatLED();
	}while (u8PDICtrl != 5);

	HW_EscReadAccess(&nMaxSyncMan, ESC_ADDR_SYNCMANCHANNELS, 1 );

	HW_ResetIntMask(0);


	#if AL_EVENT_ENABLED
	ENABLE_ESC_INT;
	#ifdef USE_SYNC0
	ENABLE_SYNC_INT;   /* RJK: Enable INT2 for SYNC0  */
	#endif
	#endif

	///////////////////////////////////////////////////
	//Prepare to run
	ECAT_Init();					//Initialize the EtherCAT Slave Interface
}

void setup_spi(void)
{
	/*
	Initialize and enable the SPI as:
	* SPI-Master with clock Fosc/4=10Mhz
	* High level of clock as idle state
	* SPI_MODE == 3
	* LATE_SAMPLE = FALSE
	* Save input data at middle of data output time
	* Data transmitting on rising edge of SC
	*/

	//The ET1200 should be configured to SPI Mode 3
	//SPI_CLK is then max 50ns, or 20Mhz
	//FCSK = FCY/(PrimaryPrescale*SecondaryPrescale) = 40M/(4*2)=5Mhz

	_SPI1IF=0; //Clear interrupt
	_SPI1IE=0; //Disable interrupt

	SPI1CON1=0;
	SPI1CON1bits.MSTEN=1;		//Act as SPI Master
	SPI1CON1bits.PPRE=0b10;		// ((0b10, 4:1), (0b00, 64:1) (0b11,1:1) prescalar
	SPI1CON1bits.SPRE=0b111;	// (0b111, 1:1),(0b110, 2:1) secondary scalar
    SPI1CON1bits.CKP=1;			//Idle state is high
    SPI1CON1bits.CKE=0;			//Data changes on clock transition from idle to active
    SPI1CON1bits.SMP=0;			//Input data sampled at middle of data output time
    SPI1CON1bits.MODE16=0;		//Communication is 8bit bytes

	SPI1STATbits.SPIROV=0;	//Clear overflow flag
	SPI1STATbits.SPIEN=1;	//Enable SPI
	SPI_SEL = SPI_DEACTIVE; //Clear slave select (active low)
	//_SPI1IE=1; //Enable interrupt
}


#endif
