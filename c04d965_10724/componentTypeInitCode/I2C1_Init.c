/*******<<config wizard begin>>********
<group>Peripheral
    <list>Peripheral Name
        <I2C1 =>I2C1
        <code>$I2C$
</group>
<group>Basic Config
    <list>Mode Select
        <I2C_Mode_I2C =>I2C_Mode_I2C
        <I2C_Mode_SMBusDevice =>I2C_Mode_SMBusDevice
        <I2C_Mode_SMBusHost =>I2C_Mode_SMBusHost
        <code>$mode$
    <list>Master Or Slave
        <0 =>Slave
        <1 =>Master
        <code>$modeSelect$
    <list>Fast Mode Select 
        <I2C_DutyCycle_2 =>I2C_DutyCycle_2
        <I2C_DutyCycle_16_9 =>I2C_DutyCycle_16_9
        <code>$dutyCycle$
    <input = integer[0-1023]>Own Address
        <default>0 
        <code>$ownAddress$
    <list>Acknowledgement
        <I2C_Ack_Disable =>Disable
        <I2C_Ack_Enable =>Enable
        <code>$ack$
    <list>Acknowledge Address
        <I2C_AcknowledgedAddress_7bit =>7bit
        <I2C_AcknowledgedAddress_10bit =>10bit
        <code>$ackAddress$
    <input = integer[1-400000]>Speed[1-400000]
        <default>1    
        <code>$speed$
    <list>Dual Address Enable
        <DISABLE=>Disable
        <ENABLE=>Enable
        <code>$DualAddrEn$
    <input = integer[0-127]>Own Address2(7 bit)
        <default>0 
        <code>$ownAddress2$
    <list>General Call Enable
        <DISABLE=>Disable
        <ENABLE=>Enable
        <code>$GenCallEn$
    <list>Stretch Clock Enable
        <DISABLE=>Disable
        <ENABLE=>Enable
        <code>$StrchClkEn$
</group>

<group>Transfer Set
    <input=integer[0-1023]>Slave Address[0-1023] 
    <code>$slaveAddress$
    <list>Transfer Direction
        <I2C_Direction_Transmitter =>Read
        <I2C_Direction_Receiver =>Write
    <code>$transferDirection$
</group>

<group>PEC
    <list>PEC Transmit Enable
        <0 =>Disable
        <1 =>Enable
    <code>$pecTransmitEn$
    <list>PEC Calculate Enable
        <0 =>Disable
        <1 =>Enable
    <code>$pecCalculateEn$
    <list>PEC Position Config
        <I2C_PECPosition_Next =>NextByte
        <I2C_PECPosition_Current =>CurrentByte
    <code>$pecPosition$
</group>
<group =or>Interrupt config
    <list>Buffer interrupt
        <0 =>Disable
        <I2C_IT_BUF =>Enable
    <list>Event interrupt
        <0 =>Disable
        <I2C_IT_EVT =>Enable
    <list>Error interrupt
        <0 =>Disable
        <I2C_IT_ERR =>Enable
    <code>$interruptEn$
</group>
<group>SMBus
	<list>SMBus Alert Config
		<I2C_SMBusAlert_Low =>Low
		<I2C_SMBusAlert_High =>High
	<code>$SMBusAlertCfg$
	<list>ARP Enable
		<0 =>Disable
	    <1 =>Enable
	<code>$ARPEn$
</group>
<group=pin>Pins Used
    <list>I2C1_SMBAI
		<DISABLE =>Disable
        <I2C1_SMBAI=>Enable
        <code>$SMBAL$
    <list>I2C1_SCL_0
		<DISABLE =>Disable
        <I2C1_SCL_0=>Enable
        <code>$SCL0$
    <list>I2C1_SDA_0
		<DISABLE =>Disable
        <I2C1_SDA_0=>Enable
        <code>$SDA0$
    <list>I2C1_SCL_1
		<DISABLE =>Disable
        <I2C1_SCL_1=>Enable
        <code>$SCL1$
    <list>I2C1_SDA_1
		<DISABLE =>Disable
        <I2C1_SDA_1=>Enable
        <code>$SDA1$
</group>

<dep>
    <type>state
	<trigger>Basic Config->Master Or Slave = Master
	<action>Basic Config->Dual Address Enable= Disable
	<action>Basic Config->Own Address2(7 bit) = Disable
</dep>

<dep>
    <type>state
	<trigger>Basic Config->Acknowledge Address = 10bit
	<action>Basic Config->Dual Address Enable= Disable
	<action>Basic Config->Own Address2(7 bit) = Disable
</dep>

<dep>
    <type>state
	<trigger>Basic Config->Dual Address Enable = Disable
	<action>Basic Config->Own Address2(7 bit) = Disable
</dep>

<dep>
    <type>value
	<trigger>Basic Config->Master Or Slave = Master
	<action>Basic Config->Own Address2(7 bit) = 0
	<action>Basic Config->Dual Address Enable= Disable
</dep>

<dep>
    <type>value
	<trigger>Basic Config->Acknowledge Address = 10bit
	<action>Basic Config->Own Address2(7 bit) = 0
	<action>Basic Config->Dual Address Enable= Disable
</dep>

<dep>
	<type>state
	<trigger>Pins Used->I2C1_SCL_0 = Enable
	<action>Pins Used->I2C1_SCL_1 = Disable
	<action>Pins Used->I2C1_SDA_1 = Disable
</dep>
<dep>
	<type>state
	<trigger>Pins Used->I2C1_SDA_0 = Enable
	<action>Pins Used->I2C1_SCL_1 = Disable
	<action>Pins Used->I2C1_SDA_1 = Disable
</dep>
<dep>
	<type>state
	<trigger>Pins Used->I2C1_SCL_1 = Enable
	<action>Pins Used->I2C1_SCL_0 = Disable
	<action>Pins Used->I2C1_SDA_0 = Disable
</dep>
<dep>
	<type>state
	<trigger>Pins Used->I2C1_SDA_1 = Enable
	<action>Pins Used->I2C1_SCL_0 = Disable
	<action>Pins Used->I2C1_SDA_0 = Disable
</dep>
<dep>
	<type>value
	<trigger>Pins Used->I2C1_SCL_0 = Enable
    <action>Pins Used->I2C1_SCL_1 = Disable
	<action>Pins Used->I2C1_SDA_1 = Disable
</dep>
<dep>
	<type>value
	<trigger>Pins Used->I2C1_SDA_0 = Enable
    <action>Pins Used->I2C1_SCL_1 = Disable
	<action>Pins Used->I2C1_SDA_1 = Disable
</dep>
<dep>
	<type>value
	<trigger>Pins Used->I2C1_SCL_1 = Enable
    <action>Pins Used->I2C1_SCL_0 = Disable
	<action>Pins Used->I2C1_SDA_0 = Disable
</dep>
<dep>
	<type>value
	<trigger>Pins Used->I2C1_SDA_1 = Enable
    <action>Pins Used->I2C1_SCL_0 = Disable
	<action>Pins Used->I2C1_SDA_0 = Disable
</dep>
<dep>
	<type>state
	<trigger>Basic Config->Mode Select = I2C_Mode_I2C
	<action>SMBus = disable
</dep>
<dep>
    <type>state
    <trigger>Basic Config->Master Or Slave = Slave
    <action>Transfer Set = disable
</dep>
<dep>
    <type>state
    <trigger>PEC->PEC Transmit Enable = Disable
    <action>PEC->PEC Calculate Enable = disable
    <action>PEC->PEC Position Config = disable
</dep>
********<<config wizard end>>**********/
#include "stm32f10x.h"
#include "stm32f10x_rcc.h"
#include "stm32f10x_i2c.h"

#define I2C1_SMBAI  ENABLE
#define I2C1_SCL_0  ENABLE
#define I2C1_SDA_0  ENABLE
#define I2C1_SCL_1  ENABLE
#define I2C1_SDA_1  ENABLE

//PUT_A_NEW_LINE_HERE
#if (STRCMP($interruptEn$, 0) == 0)
#include "misc.h"
//PUT_A_NEW_LINE_HERE
/***************************************************************************//**
 * Declare function prototype
*******************************************************************************/
#if (STRCMP($interruptEn$, 0) == 0 )
void I2C1_EV_IRQHandler(void);
#endif

#if (STRCMP($interruptEn$, 0) == 0 )
void I2C1_ER_IRQHandler(void);
#endif
#endif

//PUT_A_NEW_LINE_HERE
/*************************************************************
 * I2C initialization code template
**************************************************************/
void I2C1_Init()
{
    #if (STRCMP($interruptEn$, 0) == 0)
    NVIC_InitTypeDef NVIC_InitStructure;
    #endif
    I2C_InitTypeDef I2C_InitStructure;
	
    //PUT_A_NEW_LINE_HERE
    //
    // Enable I2C clock
    //
    RCC_APB1PeriphClockCmd(RCC_APB1Periph_I2C1, ENABLE);

    #if (STRCMP($SCL1$, DISABLE) == 0 || STRCMP($SDA1$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Enable AFIO and I2C clock
    //
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO, ENABLE);	
    //PUT_A_NEW_LINE_HERE
    //
    // I2C SCL pin remap to PB8, I2C SDA pin remap to PB8
    //
    GPIO_PinRemapConfig(GPIO_Remap_I2C1,ENABLE);
	#endif

    //PUT_A_NEW_LINE_HERE
    //
    // I2C config
    //
    I2C_InitStructure.I2C_Mode = $mode$;
    I2C_InitStructure.I2C_DutyCycle = $dutyCycle$;
    I2C_InitStructure.I2C_OwnAddress1 = $ownAddress$;
    I2C_InitStructure.I2C_Ack = $ack$;
    I2C_InitStructure.I2C_AcknowledgedAddress = $ackAddress$;
    I2C_InitStructure.I2C_ClockSpeed = $speed$;
    I2C_Init($I2C$, &I2C_InitStructure);

    //PUT_A_NEW_LINE_HERE
    //
    // Enable I2C
    //
    I2C_Cmd($I2C$, ENABLE);
    I2C_Init($I2C$, &I2C_InitStructure);
	
    #if (STRCMP($interruptEn$, 0) == 0)	
    //PUT_A_NEW_LINE_HERE
    //
    // Enable I2C DualAddress
    //
    I2C_OwnAddress2Config($I2C$, $ownAddress2$);
    I2C_DualAddressCmd($I2C$, ENABLE);
    #endif
	
    #if($modeSelect$)
    //PUT_A_NEW_LINE_HERE
    //
    // Transmits the address byte to select the slave device
    //
    I2C_Send7bitAddress($I2C$, $slaveAddress$, $transferDirection$);
    #endif
	
    #if(STRCMP($GenCallEn$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Enables I2C1 general call feature
    //
    I2C_GeneralCallCmd($I2C$, ENABLE);
    #endif

    #if(STRCMP($StrchClkEn$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Enables I2C1 Clock stretching
    //
    I2C_StretchClockCmd($I2C$, ENABLE);
    #endif
	
    #if (STRCMP($interruptEn$, 0) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Interrupt config
    //
    I2C_ITConfig($I2C$, $interruptEn$, ENABLE);
    NVIC_InitStructure.NVIC_IRQChannel = I2C1_EV_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);
    #endif

    #if($pecTransmitEn$)
    //PUT_A_NEW_LINE_HERE
    //
    // PEC Transmit Enable
    //
    #if($pecTransmitEn$)
    I2C_TransmitPEC($I2C$, ENABLE);
    #endif
    #if($pecCalculateEn$)
    I2C_CalculatePEC($I2C$, ENABLE);
    #endif   
    #if(STRCMP($pecPosition$, I2C_PECPosition_Next))
    I2C_PECPositionConfig($I2C$, $pecPosition$);
    #endif  
    #if(STRCMP($pecPosition$, I2C_PECPosition_Current))
    I2C_PECPositionConfig($I2C$, $pecPosition$);
    #endif
    #endif
    
	#if(!STRCMP($mode$, I2C_Mode_I2C))
    //PUT_A_NEW_LINE_HERE
    //
    // PEC Transmit Enable
    //
    I2C_SMBusAlertConfig($I2C$, $SMBusAlertCfg$);
    I2C_ARPCmd($I2C$, $ARPEn$);
    #endif
}
//PUT_A_NEW_LINE_HERE
#if (STRCMP($interruptEn$, 0) == 0)
/* I2C1_EV Interrupt function */
void I2C1_EV_IRQHandler(void)
{
    //
    // add your code 
    //
}
#endif

//PUT_A_NEW_LINE_HERE
#if (STRCMP($interruptEn$, 0) == 0 )
/* I2C1_ER Interrupt function */
void I2C1_ER_IRQHandler(void)
{
    //
    // add your code 
    //
}
#endif

