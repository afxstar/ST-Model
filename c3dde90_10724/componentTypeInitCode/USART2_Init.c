/******************************<<config wizard begin>>*************************
<group>Perpheral
    <list>Peripheral Name
       <USART2=>USART2
    <code>$usartName$
</group>

<group>Mode Config
    <list>Mode Selection
        <USART_MODE_NORMAL=>Normal
		<USART_MODE_SYNCHRONOUS=>Synchronous
		<USART_MODE_DMA=>DMA
        <USART_MODE_IRDA=>IrDA
        <USART_MODE_LIN=>LIN
		<USART_MODE_SMARTCARD=>SmartCard
		<USART_MODE_HALFDUPLEX=>HalfDuplex
    <code>$modeSelect$
</group>

<group>Basic Config
    <input=integer>BaudRate
	<default>9600
    <code>$baudRate$
    <list>DataBits
	    <USART_WordLength_8b=>8 bits
	    <USART_WordLength_9b=>9 bits
    <code>$dataBits$
    <list>StopBits
	    <USART_StopBits_1=>1 bit
		<USART_StopBits_2=>2 bit
	    <USART_StopBits_0_5=>0.5 bit
		<USART_StopBits_1_5=>1.5 bit
    <code>$stopBits$
    <list>Parity
	    <USART_Parity_No=>None
	    <USART_Parity_Even=>Even
	    <USART_Parity_Odd=>Odd
    <code>$parityBits$
	<list>Mode
		<USART_Mode_Rx|USART_Mode_Tx=>Both
	    <USART_Mode_Rx=>Rx
	    <USART_Mode_Tx=>Tx
    <code>$modeSet$
    <list>Hardware Flow Control
        <USART_HardwareFlowControl_None=>None
        <USART_HardwareFlowControl_RTS=>RTS
		<USART_HardwareFlowControl_CTS=>CTS
		<USART_HardwareFlowControl_RTS_CTS=>RTS_CTS
    <code>$HardwareFlowControl$
    <input=integer[0-511]>Guard Time(8bit)
    <code>$guardTime$
</group>

<group>WakeUp Config
    <list>Select WakeUp method
	    <USART_WakeUp_IdleLine=>IdleLine
		<USART_WakeUp_AddressMark=>AddressMark
		<code>$WakeUpmethod$
</group> 

<group>DMA Config
    <list>DMA Request
	    <USART_DMAReq_Tx=>Tx
	    <USART_DMAReq_Rx=>Rx
	<code>$DMAReq$
</group>

<group>IrDA Config
	<list>Mode Select
	    <USART_IrDAMode_LowPower=>LowPower
	    <USART_IrDAMode_Normal=>Normal
	<code>$IrDAModeSel$
</group>

<group>LIN Config
    <list>Break Detect Length
	    <USART_LINBreakDetectLength_10b=>10-bit
		<USART_LINBreakDetectLength_11b=>11-bit
	<code>$LINBreakDetectLen$
</group>	

<group>SmartCard Config
    <list>NACK transmission
	    <DISABLE=>Disable
	    <ENABLE=>Enable
	<code>$NACKTrans$	
</group>		

<group>Synchronous Config
    <list>Clock Phase
        <USART_CPHA_1Edge=>1Edge
        <USART_CPHA_2Edge=>2Edge
    <code>$synClockPhaseSet$
    <list>Clock Polarity
        <USART_CPOL_Low=>Low
        <USART_CPOL_High=>High
    <code>$synClockPolSet$
    <list>Last Bit 
        <USART_LastBit_Disable=>Disable
        <USART_LastBit_Enable=>Enable
    <code>$lastbitenable$
</group>


<group=or>Interrupt Config
    <list>CTS change interrupt
	    <0=>Disable
		<USART_IT_CTS=>Enable
	<list>LIN Break detection interrupt
	    <0=>Disable
		<USART_IT_LBD=>Enable
    <list>Transmit Data Register empty interrupt
	    <0=>Disable
		<USART_IT_TXE=>Enable
    <list>Transmission complete interrupt
	    <0=>Disable
		<USART_IT_TC=>Enable
    <list>Receive Data register not empty interrupt
	    <0=>Disable
		<USART_IT_RXNE=>Enable
    <list>Idle line detection interrupt
	    <0=>Disable
		<USART_IT_IDLE=>Enable
    <list>Parity Error interrupt
	    <0=>Disable
		<USART_IT_PE=>Enable
    <list>Error interrupt
	    <0=>Disable
		<USART_IT_ERR=>Enable
    <code>$USARTIntSet$		
</group>

<group=pin>Pin used
    <list>USART2_RX
	    <USART2_RX=>Enable
        <DISABLE=>Disable
	<code>$NOCODE$
	<list>USART2_TX 
        <USART2_TX=>Enable
        <DISABLE=>Disable
    <code>$NOCODE$	
	<list>USART2_CK
        <DISABLE=>Disable
        <USART2_CK=>Enable
    <code>$NOCODE$
	<list>USART2_CTS
        <DISABLE=>Disable
        <USART2_CTS=>Enable
    <code>$NOCODE$
	<list>USART2_RTS
        <DISABLE=>Disable
        <USART2_RTS=>Enable
    <code>$NOCODE$
</group>

<dep>
    <type>value
	<trigger>Mode Config->Mode Selection = Synchronous
	<action>Pin used->USART2_CK = Enable
</dep>

<dep>
    <type>value
	<trigger>Basic Config->Hardware Flow Control=RTS
	<action>Pin used->USART2_RTS = Enable
</dep>

<dep>
    <type>value
	<trigger>Basic Config->Hardware Flow Control=CTS
	<action>Pin used->USART2_CTS = Enable
</dep>

<dep>
    <type>value
	<trigger>Basic Config->Hardware Flow Control=RTS_CTS
	<action>Pin used->USART2_RTS = Enable
	<action>Pin used->USART2_CTS = Enable
</dep>

<dep>
    <type>state
    <trigger>Mode Config->Mode Selection = Normal
    <action>IrDA Config = disable
	<action>DMA Config = disable
	<action>LIN Config = disable
	<action>SmartCard Config = disable
	<action>Synchronous Config = disable
</dep>

<dep>
    <type>state
    <trigger>Mode Config->Mode Selection = IrDA
    <action>IrDA Config = enable
	<action>DMA Config = disable
    <action>LIN Config = disable
	<action>SmartCard Config = disable
    <action>Synchronous Config = disable
</dep>

<dep>
    <type>state
    <trigger>Mode Config->Mode Selection = DMA
    <action>DMA Config = enable
	<action>IrDA Config = disable
    <action>LIN Config = disable
	<action>SmartCard Config = disable
    <action>Synchronous Config = disable
</dep>

<dep>
    <type>state
    <trigger>Mode Config->Mode Selection = LIN
    <action>IrDA Config = disable
	<action>DMA Config = disable
	<action>LIN Config = enable
	<action>SmartCard Config = disable
	<action>Synchronous Config = disable
</dep>

<dep>
    <type>state
    <trigger>Mode Config->Mode Selection = SmartCard
    <action>IrDA Config = disable
	<action>DMA Config = disable
	<action>LIN Config = disable
	<action>SmartCard Config = enable
	<action>HalfDuplex Config = disable
	<action>Synchronous Config = disable
</dep>

<dep>
    <type>state
    <trigger>Mode Config->Mode Selection = HalfDuplex
    <action>IrDA Config = disable
	<action>DMA Config = disable
	<action>LIN Config = disable
	<action>SmartCard Config = disable
	<action>Synchronous Config = disable
</dep>

<dep>
    <type>state
    <trigger>Mode Config->Mode Selection = Synchronous
    <action>IrDA Config = disable
	<action>DMA Config = disable
	<action>LIN Config = disable
	<action>SmartCard Config = disable
	<action>Synchronous Config = enable
</dep>

******************************<<config wizard end>>***************************/

/*************************************************************
 * USART Initialization
**************************************************************/
#include "stm32f10x.h"
#include "stm32f10x_usart.h"
#include "stm32f10x_rcc.h"
#include "misc.h"

#if (!STRCMP($USARTIntSet$, 0))
/*******************************************************************************
 * Declare function prototype
*******************************************************************************/
//PUT_A_NEW_LINE_HERE
void USART2_IRQHandler(void);
#endif
//PUT_A_NEW_LINE_HERE
/******************************************************************************
 * USART2 Initialization Code Template
******************************************************************************/
void USART2__Init()
{
    USART_InitTypeDef USART_InitStruct;
    
    #if (STRCMP($modeSelect$, USART_MODE_SYNCHRONOUS) == 1)
    //PUT_A_NEW_LINE_HERE
    USART_ClockInitTypeDef USART_ClockInitStruct;
    #endif
   
    #if (!STRCMP($USARTIntSet$, 0))
    NVIC_InitTypeDef NVIC_InitStructure;
	#endif
	
    //PUT_A_NEW_LINE_HERE
    //
    // Enable peripheral clock of USART2 and GPIOA
    //
    RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART2, ENABLE);
   
    //PUT_A_NEW_LINE_HERE	
    //
    // USART Config
    //	
    USART_InitStruct.USART_BaudRate = $baudRate$;
    USART_InitStruct.USART_WordLength = $dataBits$;
    USART_InitStruct.USART_StopBits = $stopBits$;
    USART_InitStruct.USART_Parity = $parityBits$;
    USART_InitStruct.USART_Mode = $modeSet$;
    USART_InitStruct.USART_HardwareFlowControl = $HardwareFlowControl$;
    USART_Init(USART2, &USART_InitStruct);  
  
    #if ($guardTime$ != 0)
    //PUT_A_NEW_LINE_HERE	
    //
    // Set Guard Time
    //
    USART_SetGuardTime(USART2, $guardTime$);
    #endif
	
    //PUT_A_NEW_LINE_HERE
    USART_WakeUpConfig(USART2, $WakeUpmethod$);
	
    //PUT_A_NEW_LINE_HERE	
    #if (STRCMP($modeSelect$, USART_MODE_NORMAL) == 1)
    
    #elif (STRCMP($modeSelect$, USART_MODE_IRDA) == 1)
    //PUT_A_NEW_LINE_HERE
    //
    //USART IrDA  Mode Config
    //
    USART_IrDAConfig(USART2, $IrDAModeSel$);
    USART_IrDACmd(USART2, ENABLE);
    
    #elif (STRCMP($modeSelect$, USART_MODE_DMA) == 1)
    //PUT_A_NEW_LINE_HERE
    //
    //USART DMA Mode Config
    //
    USART_DMACmd(USART2, $DMAReq$, ENABLE);
	
    #elif (STRCMP($modeSelect$, USART_MODE_SYNCHRONOUS) == 1)
    //PUT_A_NEW_LINE_HERE
    //
    // USART Synchronous Mode Config
    //
    USART_Clock_InitStruct.USART_Clock = USART_CLOCK_ENABLE;
    USART_Clock_InitStruct.USART_CPOL = $synClockPolSet$;
    USART_Clock_InitStruct.USART_CPHA = $synClockPhaseSet$;
    USART_Clock_InitStruct.USART_LastBit = $lastbitenable$;
    USART_ClockInit(USART2, &USART_Clock_InitStruct);
	
    #elif (STRCMP($modeSelect$, USART_MODE_LIN) == 1)
    //PUT_A_NEW_LINE_HERE
    //
    // USART LIN Mode Config
    //
    USART_LINBreakDetectLengthConfig(USART2, $LINBreakDetectLen$);
    USART_LINCmd(USART2, ENABLE);
	
    #elif (STRCMP($modeSelect$, USART_MODE_SMARTCARD) == 1)
    //PUT_A_NEW_LINE_HERE
    //
    // USART SmartCard Mode Config
    //
    USART_SmartCardCmd(USART2, ENABLE);
    #elif (STRCMP($NACKTrans$, ENABLE) == 1)
    //PUT_A_NEW_LINE_HERE
    USART_SmartCardNACKCmd(USART2, ENABLE);
	
    #elif (STRCMP($modeSelect$, USART_MODE_HALFDUPLEX) == 1)
    //PUT_A_NEW_LINE_HERE
    //
    // USART HalfDuplex Mode Config
    //
    USART_HalfDuplexCmd(USART2, ENABLE);	
    #endif
    
    
    #if (!STRCMP($USARTIntSet$, 0))
    //PUT_A_NEW_LINE_HERE
    //
    // Enable the USART Interrupt Function 
    //
    USART_ITConfig(USART2, $USARTIntSet$, ENABLE);
    NVIC_InitStructure.NVIC_IRQChannel = USART2_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);
    #endif
}

#if (!STRCMP($USARTIntSet$, 0))
//PUT_A_NEW_LINE_HERE
/*USART2 IRQ Handler*/    
void USART2_IRQHandler(void)
{
    /*Add your code here*/
}
#endif
//PUT_A_NEW_LINE_HERE
