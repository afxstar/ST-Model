/*******<<config wizard begin>>**************************************
<group>Peripheral
    <list>Peripheral Name
        <DAC2=>DAC2
    <code>$DAC2$
</group>
<group>Base Config
    <list>DAC2 Trigger
        <DAC_Trigger_None=>None
		<DAC_Trigger_Software=>SW Trigger
		<DAC_Trigger_T2_TRGO=>Tim2 Trigger
		<DAC_Trigger_T3_TRGO=>Tim3 Trigger
		<DAC_Trigger_T4_TRGO=>Tim4 Trigger
		<DAC_Trigger_T5_TRGO=>Tim5 Trigger
		<DAC_Trigger_T6_TRGO=>Tim6 Trigger
		<DAC_Trigger_T7_TRGO=>Tim7 Trigger
        <DAC_Trigger_T8_TRGO=>Tim8 Trigger
		<DAC_Trigger_Ext_IT9=>Ext 9 Trigger
    <code>$DAC2Tri$
	<list>DAC2 Wave Generation
        <DAC_WaveGeneration_None=>No Wave
		<DAC_WaveGeneration_Noise=>Noise
		<DAC_WaveGeneration_Triangle=>Triangle 
    <code>$DAC2WaveGene$
    <list>LFSR Unmask 
        <DAC_LFSRUnmask_Bit0=>Unmask bit0
		<DAC_LFSRUnmask_Bit1_0=>Unmask bit[1:0]
		<DAC_LFSRUnmask_Bit2_0=>Unmask bit[2:0]
        <DAC_LFSRUnmask_Bit3_0=>Unmask bit[3:0]
        <DAC_LFSRUnmask_Bit4_0=>Unmask bit[4:0]
        <DAC_LFSRUnmask_Bit5_0=>Unmask bit[5:0]
        <DAC_LFSRUnmask_Bit6_0=>Unmask bit[6:0]
        <DAC_LFSRUnmask_Bit7_0=>Unmask bit[7:0]
        <DAC_LFSRUnmask_Bit8_0=>Unmask bit[8:0]
        <DAC_LFSRUnmask_Bit9_0=>Unmask bit[9:0]
        <DAC_LFSRUnmask_Bit10_0=>Unmask bit[10:0]
        <DAC_LFSRUnmask_Bit11_0=>Unmask bit[11:0]		
    <code>$DAC2LFSRUnma$
    <list>Triangle Amplitude 
        <DAC_TriangleAmplitude_1=>Amplitude 1
		<DAC_TriangleAmplitude_3=>Amplitude 3
		<DAC_TriangleAmplitude_7=>Amplitude 7
		<DAC_TriangleAmplitude_15=>Amplitude 15
		<DAC_TriangleAmplitude_31=>Amplitude 31
		<DAC_TriangleAmplitude_63=>Amplitude 63
		<DAC_TriangleAmplitude_127=>Amplitude 127
		<DAC_TriangleAmplitude_255=>Amplitude 255
		<DAC_TriangleAmplitude_511=>Amplitude 5111
		<DAC_TriangleAmplitude_1023=>Amplitude 1023
		<DAC_TriangleAmplitude_2047=>Amplitude 2047
		<DAC_TriangleAmplitude_4095=>Amplitude 4095
    <code>$DAC2TriAmpli$	
	<list>Output Buffer
	    <DAC_OutputBuffer_Disable=>Disable
		<DAC_OutputBuffer_Enable=>Enable
	<code>$DAC2OutBuff$	
	<list>Channel Chose
	    <DAC_Channel_2=>Channel 2
	<code>$DAC2Ch$
</group>
<group>Data Register
    <list>Alignment Style
	    <DAC_Align_8b_R =>8 bit right
	    <DAC_Align_12b_L =>12 bit light
	    <DAC_Align_12b_R =>12 bit right
	<code>$AlignSty$
	<input = integer[0-255]>8 bit Data
	<code>$EightB$
	<input = integer[0-4095]>12 bit Data
	<code>$ElevB$
</group>
<group>DMA
    <list>DMA Enable
	    <DISABLE =>Disable
        <ENABLE =>Enable       
    <code>$DMAEn$
    <list>DMA Underrun Interrupt Mask
	   <DISABLE =>Disable
	   <ENABLE =>Enable	   
	<code>$DAC2Int$
</group>

<dep>  
    <type>state
    <trigger>Base Config->DAC2 Wave Generation = No Wave
	<action>Base Config->LFSR Unmask = disable
	<action>Base Config->Triangle Amplitude = disable
</dep>

<dep>  
    <type>state
    <trigger>Base Config->DAC2 Wave Generation = Noise
    <action>Base Config->LFSR Unmask = enable
	<action>Base Config->Triangle Amplitude = disable
</dep>

<dep>  
    <type>state
    <trigger>Base Config->DAC2 Wave Generation = Triangle
    <action>Base Config->LFSR Unmask = disable
	<action>Base Config->Triangle Amplitude = enable
</dep>

<dep>
    <type>state
	<trigger>DMA->DMA Enable = Disable
	<action>DMA->DMA Underrun Interrupt Mask = disable
</dep>

<dep>
    <type>state
	<trigger>Data Register->Alignment Style = 8 bit right
	<action>Data Register->12 bit Data  = disable
</dep>

<dep>
    <type>state
	<trigger>Data Register->Alignment Style = 12 bit right
	<action>Data Register->8 bit Data  = disable
</dep>

<dep>
    <type>state
	<trigger>Data Register->Alignment Style = 12 bit light
	<action>Data Register->8 bit Data  = disable
</dep>

<dep>
    <type>state
	<trigger>Base Config->DAC2 Trigger = SW Trigger
	<action>DMA = disable
</dep>
********<<config wizard end>>**********/
#include "stm32f10x.h"
#include "stm32f10x_rcc.h"
#include "stm32f10x_gpio.h"
#include "stm32f10x_dac.h"
/********************************************************************
 * DAC1 initialization code template
********************************************************************/
void DAC2_Init()
{

    GPIO_InitTypeDef GPIO_InitStructure;
    DAC_InitTypeDef DAC_InitStructure;
	
	
    /* Enable peripheral clocks ------------------------------------*/
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE); // GPIOA Periph clock enable 
    RCC_APB1PeriphClockCmd(RCC_APB1Periph_DAC, ENABLE);  // DAC Periph clock enable 
	
	    
    /*GPIO Configuretion -------------------------------------------*/
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4 | GPIO_Pin_5;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AIN;
    GPIO_Init(GPIOA, &GPIO_InitStructure);
	
    
	
	   /*DAC2 Configuretion -------------------------------------------*/
	   DAC_InitStructure.DAC_Trigger = $DAC2Tri$; //Trigger Source	
	   
	   
	   
	   DAC_InitStructure.DAC_WaveGeneration = $DAC2WaveGene$; //Wave Chose  
	   #if(STRCMP($DAC2WaveGene$,DAC_WaveGeneration_Noise) == 1)	
	   DAC_InitStructure.DAC_LFSRUnmask_TriangleAmplitude = $DAC2LFSRUnma$; //LFSR Unmask 
	   #endif
	   #if(STRCMP($DAC2WaveGene$,DAC_WaveGeneration_Triangle) == 1)	
	   DAC_InitStructure.DAC_LFSRUnmask_TriangleAmplitude = $DAC2TriAmpli$;//Triangle Edge 
	   #endif    	
	   DAC_InitStructure.DAC_OutputBuffer = $DAC2OutBuff$; //Ouput Buffer Enable 
	
	
	
	   /*DAC1 Init ------------------------------------------------------*/
	   DAC_Init(DAC_Channel_2, &DAC_InitStructure);
	   /*DAC1 Enable ----------------------------------------------------*/
	   DAC_Cmd(DAC_Channel_2, ENABLE);	
	
	
	
	   #if(STRCMP($DAC2Tri$,DAC_Trigger_Software) == 1)
	   /*Software Trigger Enable -----------------------------------------*/
	   DAC_SoftwareTriggerCmd(DAC_Channel_2, ENABLE);
	   #endif
	
	
	   #if(STRCMP($DAC2WaveGene$,DAC_WaveGeneration_Noise) == 1)
	   /*Noise Generation Enable ------------------------------------------*/
	   DAC_WaveGenerationCmd(DAC_Channel_2, DAC_Wave_Noise, ENABLE);
	   #endif
	   #if(STRCMP($DAC2WaveGene$,DAC_WaveGeneration_Triangle) == 1)
	   /*Trigger Wave Generation Enable -----------------------------------*/
	   DAC_WaveGenerationCmd(DAC_Channel_2, DAC_Wave_Triangle, ENABLE);
	   #endif
	
	
       #if(STRCMP($DMAEn$,ENABLE) == 1) 
    /*DMA Enable--------------------------------------------------------*/	
    DAC_DMACmd(DAC_Channel_2, ENABLE);
       #endif	
	   #if(STRCMP($DAC2Int$,ENABLE) == 1)
	   /*Enables  DAC1 Interrupts -----------------------------------------*/
	   DAC_ITConfig(DAC_Channel_2, DAC_IT_DMAUDR, ENABLE);
	   #endif
	
	   
	   #if(STRCMP($AlignSty$,DAC_Align_8b_R) == 1)
	   /*8 bit Data Right Align Register Set--------------------------------*/
	   DAC_SetChannel2Data($AlignSty$, $EightB$);
	   #endif
	   #if(STRCMP($AlignSty$,DAC_Align_12b_L) == 1)
	   /*12 bit Data Light Align Register Set--------------------------------*/
	   DAC_SetChannel2Data($AlignSty$, $ElevB$);
	   #endif
	   #if(STRCMP($AlignSty$,DAC_Align_12b_R) == 1)
	   /*12 bit Data Right Align Register Set--------------------------------*/
	   DAC_SetChannel2Data($AlignSty$, $ElevB$);
	   #endif	
    
}

























