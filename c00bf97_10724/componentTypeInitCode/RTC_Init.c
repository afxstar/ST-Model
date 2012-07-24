/**********************<<config wizard begin>>*********************************
<group>Peripheral
    <list>Peripheral Name
        <RTC=>RTC
    <code>$rtc$
</group>

<group>RTC set
    <list>LSI clock
        <ENABLE=>Enable
        <DISABLE=>Disable
    <code>$lsiClkEnable$
    <list>LSE clock
		<DISABLE=>Disable
		<ENABLE=>Enable
    <code>$lseClkEnable$
    <list>HSE_Div128 clock
		<DISABLE=>Disable
		<ENABLE=>Enable
    <code>$hsediv128ClkEnable$
    <list>Clock source
        <RCC_RTCCLKSource_LSI=>Low speed internal clock
        <RCC_RTCCLKSource_LSE=>Low speed external clock
		<RCC_RTCCLKSource_HSE_Div128=>HSE clock divided by 128
    <code>$rtcClkSrc$
    <list>Prescaler
        <RTC_RPRE_1=>CK_SECOND = CK_RTC
        <RTC_RPRE_2=>CK_SECOND = CK_RTC / 2
        <RTC_RPRE_4=>CK_SECOND = CK_RTC / 4
        <RTC_RPRE_8=>CK_SECOND = CK_RTC / 8
        <RTC_RPRE_16=>CK_SECOND = CK_RTC / 16
        <RTC_RPRE_32=>CK_SECOND = CK_RTC / 32
        <RTC_RPRE_64=>CK_SECOND = CK_RTC / 64
        <RTC_RPRE_128=>CK_SECOND = CK_RTC / 128
        <RTC_RPRE_256=>CK_SECOND = CK_RTC / 256
        <RTC_RPRE_512=>CK_SECOND = CK_RTC / 512
        <RTC_RPRE_1024=>CK_SECOND = CK_RTC / 1024
        <RTC_RPRE_2048=>CK_SECOND = CK_RTC / 2048
        <RTC_RPRE_4096=>CK_SECOND = CK_RTC / 4096
        <RTC_RPRE_8192=>CK_SECOND = CK_RTC / 8192
        <RTC_RPRE_16384=>CK_SECOND = CK_RTC / 16384
        <RTC_RPRE_32768=>CK_SECOND = CK_RTC / 32768
		<RTC_RPRE_65536=>CK_SECOND = CK_RTC / 65536
		<RTC_RPRE_131072=>CK_SECOND = CK_RTC / 131072
		<RTC_RPRE_262144=>CK_SECOND = CK_RTC / 262144
		<RTC_RPRE_524288=>CK_SECOND = CK_RTC / 524288
    <code>$rtcPresc$
</group>

<group>RTC Interrupt set
    <list>Overflow interrupt
        <0=>Disable
        <ENABLE=>Enable
		<code>$RTCOWIE$
    <list>Alarm interrupt
        <0=>Disable
        <ENABLE=>Enable
		<code>$RTCALRIE$
    <list>Second interrupt
        <0=>Disable
        <ENABLE=>Enable
		<code>$RTCSECIE$
</group>

<group>RTC counter set
    <input=integer>RTC counter
        <default>1
    <code>$rtcCounter$
</group>
	
<group>RTC alarm set
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

<dep>
    <type>state
    <trigger>RTC set->LSE clock = Disable
    <trigger>RTC set->LSI clock = Disable
	<trigger>RTC set->HSE_Div128 clock = Disable
    <action>RTC set->Clock source = disable
    <action>RTC set->Prescaler = disable
</dep>    	
*******************************<<config wizard end>>**************************/
#include "stm32f10x.h"
#include "stm32f10x_rcc.h"
#include "stm32f10x_rtc.h"
#include "misc.h"

#if(!STRCMP($RTCALRIE$|$RTCOWIE$|$RTCSECIE$, 0))
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
    #if(!STRCMP($RTCALRIE$|$RTCOWIE$|$RTCSECIE$, 0))
    NVIC_InitTypeDef NVIC_InitStructure;
	#endif
	
    #if(STRCMP($lseClkEnable$,ENABLE))
    //PUT_A_NEW_LINE_HERE
    //
    // Enable LSE
    //
    RCC_LSEConfig(RCC_LSE_ON);
    #endif
    #if(STRCMP($lsiClkEnable$,ENABLE))
    //PUT_A_NEW_LINE_HERE
    //
    // Enable LSI
    //
    RCC_LSICmd(ENABLE);
    #endif
    #if(STRCMP($hsediv128ClkEnable$,ENABLE))
    //PUT_A_NEW_LINE_HERE
    //
    // Enable HSE
    //
    RCC_HSEConfig(RCC_HSE_ON);
    #endif
    //PUT_A_NEW_LINE_HERE
    while (RCC_GetFlagStatus(RCC_FLAG_LSERDY) == RESET);
    //PUT_A_NEW_LINE_HERE
    //
    // Select RTC  clock source
    //
    RCC_RTCCLKConfig($rtcClkSrc$);
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
    #if(STRCMP($RTCOWIE$, ENABLE))
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
	#if(STRCMP($RTCALRIE$, ENABLE))
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
	#if(STRCMP($RTCSECIE$, ENABLE))
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
    #if(!STRCMP($RTCALRIE$|$RTCOWIE$|$RTCSECIE$, 0))
    //PUT_A_NEW_LINE_HERE
    NVIC_InitStructure.NVIC_IRQChannel = RTC_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);
	#endif
    #if(STRCMP($RTCALRIE$, ENABLE))
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

#if(!STRCMP($RTCALRIE$|$RTCOWIE$|$RTCSECIE$, 0))
//PUT_A_NEW_LINE_HERE
/*RTC IRQ Handler*/    
void RTC_IRQHandler(void)
{
    /*Add your code here*/
}
#endif
//PUT_A_NEW_LINE_HERE