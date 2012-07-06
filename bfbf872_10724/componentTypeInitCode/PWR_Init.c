/**********************<<config wizard begin>>*********************************
<group>Peripheral
    <list>Peripheral Name
        <PWR=>PWR
    <code>$pwr$
</group>

<group>Programmable voltage detector
    <list>PVD
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$pvdEn$
    <list>PVD level config
        <PWR_PVDLevel_2V2=>2.2V
        <PWR_PVDLevel_2V3=>2.3V
        <PWR_PVDLevel_2V4=>2.4V
        <PWR_PVDLevel_2V5=>2.5V
        <PWR_PVDLevel_2V6=>2.6V
        <PWR_PVDLevel_2V7=>2.7V
        <PWR_PVDLevel_2V8=>2.8V
        <PWR_PVDLevel_2V9=>2.9V
    <code>$pvdLevelValue$
    <list>Interrupt config
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$pvdIntEn$ 
    <list>Interrupt trigger type
        <EXTI_Trigger_Falling=>Falling Trigger
        <EXTI_Trigger_Rising=>Rising Trigger
        <EXTI_Trigger_Rising_Falling=>Both Trigger
    <code>$pvdIntTrigrType$	
</group>

<group>WakeUp pin enable 
    <list>WakeUp pin
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$wakeupPinEn$
</group>

<group>STOP mode set
    <list>STOP mode
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$stopModeEn$
    <list>regulator state
        <PWR_Regulator_ON=>ON
        <PWR_Regulator_LowPower=>LowPower
    <code>$regulatorState$
    <list>Entry instruction
	    <PWR_STOPEntry_WFI=>WFI
		<PWR_STOPEntry_WFE=>WFE
    <code>$stopEntryIns$
</group>

<group>STANDBY mode set
    <list>STANDBY mode
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$standbyModeEn$
</group>

<dep>
    <type>state
    <trigger>Programmable voltage detector->PVD = Disable
	<action>Programmable voltage detector->PVD level config = Disable
	<action>Programmable voltage detector->Interrupt config = Disable
	<action>Programmable voltage detector->Interrupt trigger type = Disable
</dep>

<dep>
    <type>state
	<trigger>Programmable voltage detector->Interrupt config = Disable
	<action>Programmable voltage detector->Interrupt trigger type = Disable
</dep>

<dep>
    <type>state
    <trigger>STOP mode set->STOP mode = Disable
	<action>STOP mode set->regulator state = Disable
	<action>STOP mode set->Entry instruction = Disable
</dep>
*******************************<<config wizard end>>**************************/
#include "stm32f10x.h"
#include "stm32f10x_rcc.h"
#include "stm32f10x_pwr.h"

#if (STRCMP($pvdIntEn$, DISABLE) == 0)
#include "stm32f10x_exti.h"
#include "misc.h"
//PUT_A_NEW_LINE_HERE
/***************************************************************************//**
 * Declare function prototype
*******************************************************************************/
void PVD_IRQHandler(void);
#endif

//PUT_A_NEW_LINE_HERE
/*************************************************************
 * PWR Initialization
**************************************************************/
void PWR_Init()
{
    #if (STRCMP($pvdIntEn$, DISABLE) == 0)
    NVIC_InitTypeDef NVIC_InitStructure;
    EXTI_InitTypeDef EXTI_InitStructure;
	#endif

    #if (STRCMP($pvdIntEn$, DISABLE) == 0 || STRCMP($wakeupPinEn$, DISABLE) == 0 || STRCMP($stopModeEn$, DISABLE) == 0 || STRCMP($standbyModeEn$, DISABLE) == 0)	
    //PUT_A_NEW_LINE_HERE
    //
    // Enable PWR clock
    //
    RCC_APB1PeriphClockCmd(RCC_APB1Periph_PWR, ENABLE);
	#endif

    #if (STRCMP($pvdEn$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Configures PVD voltage threshold and enable PVD
    //
    PWR_PVDLevelConfig($pvdLevelValue$);
    PWR_PVDCmd(ENABLE);
    #endif

    #if (STRCMP($pvdIntEn$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Configures PVD interrupt
    //
    EXTI_InitStructure.EXTI_Line = EXTI_Line16;
    EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
    EXTI_InitStructure.EXTI_Trigger = $pvdIntTrigrType$;
    EXTI_InitStructure.EXTI_LineCmd = ENABLE;
    EXTI_Init(&EXTI_InitStructure);
    //PUT_A_NEW_LINE_HERE
    //
    // Enable the PVD interrupt 
    //
    NVIC_InitStructure.NVIC_IRQChannel = PVD_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);
    #endif
    
    #if (STRCMP($wakeupPinEn$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Enable wakeup pin
    //
    PWR_WakeUpPinCmd(ENABLE);
    #endif

    #if (STRCMP($stopModeEn$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Enter stop mode
    //
    PWR_EnterSTOPMode($regulatorState$, $stopEntryIns$);
    #endif
	
    #if (STRCMP($standbyModeEn$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Enter standby mode
    //
    PWR_EnterSTANDBYMode();
    #endif

}
//PUT_A_NEW_LINE_HERE
#if (STRCMP($pvdIntEn$, DISABLE) == 0)
/* PVD Interrupt function */
void PVD_IRQHandler(void)
{
    //
    // add your code 
    //   
}
#endif
//PUT_A_NEW_LINE_HERE