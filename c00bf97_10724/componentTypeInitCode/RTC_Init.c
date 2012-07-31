/**********************<<config wizard begin>>*********************************
<group>Peripheral
    <list>Peripheral Name
        <RTC=>RTC
    <code>$rtc$
</group>

<group>RTC Clock Set
    <list>Clock Source Select
        <RCC_RTCCLKSource_LSI=>Low speed internal clock
        <RCC_RTCCLKSource_LSE=>Low speed external clock
		<RCC_RTCCLKSource_HSE_Div128=>HSE clock divided by 128
    <code>$rtcClkSrc$
    <input=integer[0-1048575]>Prescaler(20bit)    
    <code>$rtcPresc$
</group>

<group>RTC Interrupt Set
    <list>Overflow interrupt
        <0=>Disable
        <ENABLE=>Enable
		<code>$rtcOWIE$
    <list>Alarm interrupt
        <0=>Disable
        <ENABLE=>Enable
		<code>$rtcALRIE$
    <list>Second interrupt
        <0=>Disable
        <ENABLE=>Enable
		<code>$rtcSECIE$
</group>

<group>RTC Counter Set
    <input=integer>RTC counter
        <default>1
    <code>$rtcCounter$
</group>
	
<group>RTC Alarm Set
    <input=integer>RTC alarm
        <default>1
    <code>$rtcAlarm$
</group>
	
<group=pin>Pin used
    <list>TAMPER-RTC
	    <TAMPER-RTC=>Enable
        <DISABLE=>Disable
	<code>$NOCODE$
</group>

<dep>
    <type>state
    <trigger>RTC Interrupt set->Alarm interrupt = Disable
    <action>RTC alarm set->RTC alarm = disable
</dep>    	

 	
*******************************<<config wizard end>>**************************/
#include "stm32f10x.h"
#include "stm32f10x_rcc.h"
#include "stm32f10x_rtc.h"

#if(STRCMP($rtcALRIE$,ENABLE) == 1 ||STRCMP($rtcOWIE$,ENABLE)== 1 ||STRCMP($rtcSECIE$,ENABLE)== 1)
#include "misc.h"
/*******************************************************************************
 * Declare function prototype
*******************************************************************************/
//PUT_A_NEW_LINE_HERE
void RTC_IRQHandler(void);
#endif
//PUT_A_NEW_LINE_HERE
/******************************************************************************
 * RTC Initialization Code Template
******************************************************************************/
void RTC_Init()
{
    #if(STRCMP($rtcALRIE$,ENABLE) == 1 ||STRCMP($rtcOWIE$,ENABLE)== 1 ||STRCMP($rtcSECIE$,ENABLE)== 1)
    NVIC_InitTypeDef NVIC_InitStructure;
	#endif
	
    #if(STRCMP($rtcClkSrc$,RCC_RTCCLKSource_LSE))
    //PUT_A_NEW_LINE_HERE
    //
    // Enable LSE
    //
    RCC_LSEConfig(RCC_LSE_ON);
    //PUT_A_NEW_LINE_HERE
    while (RCC_GetFlagStatus(RCC_FLAG_LSERDY) == RESET);
    //PUT_A_NEW_LINE_HERE
    //
    // Select RTC  clock source
    //
    RCC_RTCCLKConfig(RCC_RTCCLKSource_LSE);
    #endif
    #if(STRCMP($rtcClkSrc$,RCC_RTCCLKSource_LSI))
    //PUT_A_NEW_LINE_HERE
    //
    // Enable LSI
    //
    RCC_LSICmd(ENABLE);
    //PUT_A_NEW_LINE_HERE
    while (RCC_GetFlagStatus(RCC_FLAG_LSERDY) == RESET);
    //PUT_A_NEW_LINE_HERE
    //
    // Select RTC  clock source
    //
    RCC_RTCCLKConfig(RCC_RTCCLKSource_LSI);
    #endif
    #if(STRCMP($rtcClkSrc$,RCC_RTCCLKSource_HSE_Div128))
    //PUT_A_NEW_LINE_HERE
    //
    // Enable HSE
    //
    RCC_HSEConfig(RCC_HSE_ON);
    //PUT_A_NEW_LINE_HERE
    while (RCC_GetFlagStatus(RCC_FLAG_LSERDY) == RESET);
    //PUT_A_NEW_LINE_HERE
    //
    // Select RTC  clock source
    //
    RCC_RTCCLKConfig(RCC_RTCCLKSource_HSE_Div128);
    #endif
    //PUT_A_NEW_LINE_HERE
    //
    // Enable RTC clock
    //
    RCC_RTCCLKCmd(ENABLE);
    //PUT_A_NEW_LINE_HERE
    //
    //Wait for RTC registers synchronization 
    //
    RTC_WaitForSynchro();
    //PUT_A_NEW_LINE_HERE
    //
    // Wait until last write operation on RTC registers has finished 
    //
    RTC_WaitForLastTask();
    //PUT_A_NEW_LINE_HERE
    //
    // Configure RTC prescaler to a specified value
    //
    RTC_SetPrescaler($rtcPresc$);
    //PUT_A_NEW_LINE_HERE
    //
    // Wait until last write operation on RTC registers has finished 
    //
    RTC_WaitForLastTask();
    //PUT_A_NEW_LINE_HERE
    //
    // set RTC counter value
    //
    RTC_SetCounter($rtcCounter$);
    #if(STRCMP($rtcOWIE$, ENABLE))
    //PUT_A_NEW_LINE_HERE
    //
    // Wait until last write operation on RTC registers has finished 
    //
    RTC_WaitForLastTask();
    //PUT_A_NEW_LINE_HERE
    //
    // Enable RTC overflow interrupt
    //
    RTC_ITConfig(RTC_IT_OW, ENABLE);
    #endif
	#if(STRCMP($rtcALRIE$, ENABLE))
    //PUT_A_NEW_LINE_HERE
    //
    // Wait until last write operation on RTC registers has finished 
    //
    RTC_WaitForLastTask();
    //PUT_A_NEW_LINE_HERE
    //
    // Enable RTC alarm interrupt
    //
    RTC_ITConfig(RTC_IT_ALR, ENABLE);
    #endif
	#if(STRCMP($rtcSECIE$, ENABLE))
    //PUT_A_NEW_LINE_HERE
    //
    // Wait until last write operation on RTC registers has finished 
    //
    RTC_WaitForLastTask();
    //PUT_A_NEW_LINE_HERE
    //
    // Enable RTC second interrupt
    //
    RTC_ITConfig(RTC_IT_SEC, ENABLE);
    #endif
    #if(STRCMP($rtcALRIE$,ENABLE) == 1 ||STRCMP($rtcOWIE$,ENABLE)== 1 ||STRCMP($rtcSECIE$,ENABLE)== 1)
    //PUT_A_NEW_LINE_HERE
    NVIC_InitStructure.NVIC_IRQChannel = RTC_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);
	#endif
    #if(STRCMP($rtcALRIE$, ENABLE))
    //PUT_A_NEW_LINE_HERE
    //
    // Wait until last write operation on RTC registers has finished 
    //
    RTC_WaitForLastTask();
    //PUT_A_NEW_LINE_HERE
    //
    // set RTC alarm value
    //
    RTC_SetAlarm($rtcAlarm$);
    #endif
    //PUT_A_NEW_LINE_HERE
    //
    // Wait until last write operation on RTC registers has finished 
    //
    RTC_WaitForLastTask();
}

#if(STRCMP($rtcALRIE$,ENABLE) == 1 ||STRCMP($rtcOWIE$,ENABLE)== 1 ||STRCMP($rtcSECIE$,ENABLE)== 1)
//PUT_A_NEW_LINE_HERE
/*RTC IRQ Handler*/    
void RTC_IRQHandler(void)
{
    /*Add your code here*/
}
#endif
//PUT_A_NEW_LINE_HERE