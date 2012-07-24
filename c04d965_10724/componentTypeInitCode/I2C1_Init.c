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
    <input = integer[0-1023]>Own Address[0-1023] 
    <code>$ownAddress$
    <list>Acknowledgement
        <I2C_Ack_Enable =>Enable
        <I2C_Ack_Disable =>Disable
    <code>$ack$
    <list>Acknowledge Address
        <I2C_AcknowledgedAddress_7bit =>7bit
        <I2C_AcknowledgedAddress_10bit =>10bit
    <code>$ackAddress$
    <input = integer[1-400000]>Speed[1-400000]
    <default>1    
    <code>$speed$
</group>
<group>Transfer Set
    <input=integer[0-1023]>Own Address[0-1023] 
    <code>$slaveAddress$
    <list>Transfer Direction
        <I2C_Direction_Transmitter =>Read
        <I2C_Direction_Receiver =>Write
    <code>$transferDirection$
</group>
<group>DMA
    <list>DMA Enable
        <0 =>Disable
        <1 =>Enable
    <code>$dmaEn$
    <list>DMA Mode
        <DMA_DIR_PeripheralDST =>Receive
        <DMA_DIR_PeripheralSRC =>Transmit
    <code>$dmaMode$
    <list>DMA Channel
        <DMA1_Channel1 =>DMA1_Channel1
        <DMA1_Channel2 =>DMA1_Channel2
        <DMA1_Channel3 =>DMA1_Channel3
        <DMA1_Channel4 =>DMA1_Channel4
        <DMA1_Channel5 =>DMA1_Channel5
        <DMA1_Channel6 =>DMA1_Channel6
        <DMA1_Channel7 =>DMA1_Channel7
        <DMA2_Channel1 =>DMA2_Channel1
        <DMA2_Channel2 =>DMA2_Channel2
        <DMA2_Channel3 =>DMA2_Channel3
        <DMA2_Channel4 =>DMA2_Channel4
        <DMA2_Channel5 =>DMA2_Channel5
    <code>$dmaChannel$
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
    <list>SCL
        <I2C_SCL=>Enable
    <code>$SCL$
    <list>SDA
        <I2C_SDA=>Enable
    <code>$SDA$
</group>
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
<dep>
    <type>state
    <trigger>DMA->DMA Enable = Disable
    <action>DMA->DMA Mode = disable
    <action>DMA->DMA Channel = disable
</dep>
********<<config wizard end>>**********/

#include "stm32f10x_i2c.h"
#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"
#if($dmaEn$)
#include "stm32f10x_dma.h"
#define bufferSize 512
#endif
#define  ENABLE   1
#define  DISABLE  0
#define I2C_SCL  ENABLE
#define I2C_SDA  ENABLE
//PUT_A_NEW_LINE_HERE
void GPIOConfig();
void I2CConfig();
#if($dmaEn$)
void DMAConfig();
#endif
#if($pecTransmitEn$)
void PECConfig();
#endif

//PUT_A_NEW_LINE_HERE
/*************************************************************
 * I2C initialization code template
**************************************************************/
void I2C1_Init()
{

    //PUT_A_NEW_LINE_HERE
    //
    // System clocks configuration
    //
    SystemInit();
    
    //PUT_A_NEW_LINE_HERE
    //
    // Enable AFIO & I2C clock
    //
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB | RCC_APB2Periph_AFIO, ENABLE);
    
    //PUT_A_NEW_LINE_HERE
    //
    // GPIO initialize Configure I2C SCL pin, I2C SDA pin
    //
    GPIOConfig();
    
    //PUT_A_NEW_LINE_HERE
    // 
    // I2C configuration 
    //
    I2CConfig();
    
    #if($dmaEn$)
    //PUT_A_NEW_LINE_HERE
    //
    // DMA Enable and config
    //
    DMAConfig();
    #endif
    
    #if($pecTransmitEn$)
    //PUT_A_NEW_LINE_HERE
    //
    // PEC Transmit Enable
    //
    PECConfig();
    #endif
    
	#if(!STRCMP($mode$, I2C_Mode_I2C))
    //PUT_A_NEW_LINE_HERE
    //
    // PEC Transmit Enable
    //
    I2C_SMBusAlertConfig($I2C$, $SMBusAlertCfg$);
    I2C_ARPCmd($I2C$, $ARPEn$);
    #endif
	
    #if($modeSelect$)
    //PUT_A_NEW_LINE_HERE
    //
    // Transmits the address byte to select the slave device.
    //
    I2C_Send7bitAddress($I2C$, $slaveAddress$, $transferDirection$);
    #endif
}

//PUT_A_NEW_LINE_HERE
/*************************************************************
 * GPIO config code template
**************************************************************/
void GPIOConfig()
{
    GPIO_InitTypeDef  GPIO_InitStructure;
    GPIO_PinRemapConfig(GPIO_Remap_I2C1,ENABLE);
    GPIO_InitStructure.GPIO_Pin =  GPIO_Pin_8 | GPIO_Pin_9;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_OD;
    GPIO_Init(GPIOB, &GPIO_InitStructure);
}

//PUT_A_NEW_LINE_HERE
/*************************************************************
 * I2C config code template
**************************************************************/
void I2CConfig()
{
    I2C_InitTypeDef I2C_InitStructure;
    I2C_InitStructure.I2C_Mode = $mode$;
    I2C_InitStructure.I2C_DutyCycle = $dutyCycle$;
    I2C_InitStructure.I2C_OwnAddress1 = $ownAddress$;
    I2C_InitStructure.I2C_Ack = $ack$;
    I2C_InitStructure.I2C_AcknowledgedAddress = $ackAddress$;
    I2C_InitStructure.I2C_ClockSpeed = $speed$;
    I2C_Init($I2C$, &I2C_InitStructure);
            
    //PUT_A_NEW_LINE_HERE
    //
    // Interrupt config
    //
    I2C_ITConfig($I2C$, $interruptEn$, ENABLE);
    
    //PUT_A_NEW_LINE_HERE
    //
    // Enable I2C
    //
    I2C_Cmd($I2C$, ENABLE);
    I2C_Init($I2C$, &I2C_InitStructure);
}

#if($dmaEn$)
//PUT_A_NEW_LINE_HERE
/*************************************************************
 * DMA config code template
**************************************************************/
void DMAConfig()
{
    DMA_InitTypeDef DMA_InitStructure;
    uint32_t buffer[bufferSize];
    DMA_DeInit($dmaChannel$);
    DMA_InitStructure.DMA_PeripheralBaseAddr = (uint32_t)$I2C$->DR;
    DMA_InitStructure.DMA_MemoryBaseAddr = buffer;
    DMA_InitStructure.DMA_DIR = $dmaMode$;
    DMA_InitStructure.DMA_BufferSize = bufferSize;
    DMA_InitStructure.DMA_PeripheralInc = DMA_PeripheralInc_Enable;
    DMA_InitStructure.DMA_MemoryInc = DMA_MemoryInc_Enable;
    DMA_InitStructure.DMA_PeripheralDataSize = DMA_PeripheralDataSize_Byte;
    DMA_InitStructure.DMA_MemoryDataSize = DMA_MemoryDataSize_Byte;
    DMA_InitStructure.DMA_Mode = DMA_Mode_Normal;
    DMA_InitStructure.DMA_Priority = DMA_Priority_High;
    DMA_InitStructure.DMA_M2M = DMA_M2M_Disable;
    DMA_Init($dmaChannel$, &DMA_InitStructure);
    DMA_Cmd($dmaChannel$, ENABLE);
}
#endif

#if($pecTransmitEn$)
//PUT_A_NEW_LINE_HERE
/*************************************************************
 * PEC config code template
**************************************************************/
void PECConfig()
{
    I2C_TransmitPEC($I2C$, 1);
    #if($pecCalculateEn$)
    I2C_CalculatePEC($I2C$, 1);
    #endif
    
    #if(STRCMP($pecPosition$, I2C_PECPosition_Next))
    I2C_PECPositionConfig($I2C$, $pecPosition$);
    #endif
    
    #if(STRCMP($pecPosition$, I2C_PECPosition_Current))
    I2C_PECPositionConfig($I2C$, $pecPosition$);
    #endif
}
#endif
