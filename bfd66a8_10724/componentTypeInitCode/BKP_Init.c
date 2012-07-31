/**********************<<config wizard begin>>*********************************
<group>Peripheral
    <list>Peripheral Name
        <BKP=>BKP
    <code>$bkp$
</group>

<group>Tamper detection config
    <list>Tamper detection
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$tmprDetectEn$
    <list>Tamper pin level select
        <BKP_TamperPinLevel_High=>High
        <BKP_TamperPinLevel_Low=>Low
    <code>$tmprPinLevel$
    <list>Tamper interrupt config
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$tmprIntEn$ 	
</group>

<group>RTC calibration config
    <list>RTC calibration
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$rtcCalEn$
    <list>RTC output source
        <BKP_RTCOutputSource_None=>None
        <BKP_RTCOutputSource_CalibClock=>CalibClock
        <BKP_RTCOutputSource_Alarm=>Alarm
        <BKP_RTCOutputSource_Second=>Second
    <code>$rtcOptSrc$		
    <input=integer[0-127]>RTC calibration value
    <default>0
    <code>$rtcCalValue$
</group>

<group>Backup data register
    <input=integer[0-65535]>BKP_DR1(16bit)
    <default>0
    <code>$bkpDatareg1$
    <input=integer[0-65535]>BKP_DR2(16bit)
    <default>0
    <code>$bkpDatareg2$
    <input=integer[0-65535]>BKP_DR3(16bit)
    <default>0
    <code>$bkpDatareg3$
    <input=integer[0-65535]>BKP_DR4(16bit)
    <default>0
    <code>$bkpDatareg4$
    <input=integer[0-65535]>BKP_DR5(16bit)
    <default>0
    <code>$bkpDatareg5$
    <input=integer[0-65535]>BKP_DR6(16bit)
    <default>0
    <code>$bkpDatareg6$
    <input=integer[0-65535]>BKP_DR7(16bit)
    <default>0
    <code>$bkpDatareg7$
    <input=integer[0-65535]>BKP_DR8(16bit)
    <default>0
    <code>$bkpDatareg8$
    <input=integer[0-65535]>BKP_DR9(16bit)
    <default>0
    <code>$bkpDatareg9$
    <input=integer[0-65535]>BKP_DR10(16bit)
    <default>0
    <code>$bkpDatareg10$
</group>

<group=pin>Pins Used
    <list>TAMPER-RTC
		<DISABLE =>Disable
        <TAMPER-RTC=>Enable
        <code>$tamperPinEn$
</group>

<dep>
    <type>value
    <trigger>Tamper detection config->Tamper detection = Disable
	<action>Pins Used->TAMPER-RTC = Disable
</dep>

<dep>
    <type>value
    <trigger>Tamper detection config->Tamper detection = Enable
	<action>Pins Used->TAMPER-RTC = Enable
</dep>

<dep>
    <type>state
    <trigger>Tamper detection config->Tamper detection = Disable
	<action>Tamper detection config->Tamper pin level select = Disable
	<action>Tamper detection config->Tamper interrupt config = Disable
</dep>

<dep>
    <type>value
    <trigger>Tamper detection config->Tamper detection = Disable
	<action>Tamper detection config->Tamper pin level select = High
	<action>Tamper detection config->Tamper interrupt config = Disable
</dep>

<dep>
    <type>state
    <trigger>RTC calibration config->RTC calibration = Disable
	<action>RTC calibration config->RTC output source = Disable
	<action>RTC calibration config->RTC calibration value = Disable
</dep>
*******************************<<config wizard end>>**************************/
#include "stm32f10x.h"
#include "stm32f10x_rcc.h"
#include "stm32f10x_pwr.h"
#include "stm32f10x_bkp.h"

#if (STRCMP($tmprIntEn$, DISABLE) == 0)
#include "misc.h"
//PUT_A_NEW_LINE_HERE
/***************************************************************************//**
 * Declare function prototype
*******************************************************************************/
void TAMPER_IRQHandler(void);
#endif

//PUT_A_NEW_LINE_HERE
/*************************************************************
 * BKP Initialization
**************************************************************/
void BKP_Init()
{
    #if (STRCMP($tmprIntEn$, DISABLE) == 0 && STRCMP($tmprDetectEn$, DISABLE) == 0)
    NVIC_InitTypeDef NVIC_InitStructure;
	#endif

    #if (STRCMP($tmprDetectEn$, DISABLE) == 0 || STRCMP($rtcCalEn$, DISABLE) == 0 || \
	STRCMP($bkpDatareg1$, 0) == 0 || STRCMP($bkpDatareg2$, 0) == 0 || STRCMP($bkpDatareg3$, 0) == 0 || \
	STRCMP($bkpDatareg4$, 0) == 0 || STRCMP($bkpDatareg5$, 0) == 0 || STRCMP($bkpDatareg6$, 0) == 0 || \
	STRCMP($bkpDatareg7$, 0) == 0 || STRCMP($bkpDatareg8$, 0) == 0 || STRCMP($bkpDatareg9$, 0) == 0 || \
	STRCMP($bkpDatareg10$, 0) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Enable PWR and BKP clock
    //
    RCC_APB1PeriphClockCmd(RCC_APB1Periph_PWR | RCC_APB1Periph_BKP, ENABLE);

    //PUT_A_NEW_LINE_HERE
    //
    // Enable PWR and BKP clock
    //	
    PWR_BackupAccessCmd(ENABLE);
	#endif

    #if (STRCMP($tmprDetectEn$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Configures tamper pin level and enable tamper pin
    //
    BKP_TamperPinLevelConfig($tmprPinLevel$);
    BKP_TamperPinCmd(ENABLE);
    #endif

    #if (STRCMP($tmprIntEn$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Enable the TAMPER interrupt 
    //
    BKP_ITConfig(ENABLE);
    NVIC_InitStructure.NVIC_IRQChannel = TAMPER_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);
    #endif
    
    #if (STRCMP($rtcCalEn$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Select the RTC output source
    //
    BKP_RTCOutputConfig($rtcOptSrc$);
    //PUT_A_NEW_LINE_HERE
    //
    // Sets RTC Clock Calibration value
    //
    BKP_SetRTCCalibrationValue($rtcCalValue$);
    #endif

    #if (STRCMP($bkpDatareg1$, 0) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Writes user data to BKP_DR1
    //
    BKP_WriteBackupRegister(BKP_DR1, $bkpDatareg1$);
    #endif

    #if (STRCMP($bkpDatareg2$, 0) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Writes user data to BKP_DR2
    //
    BKP_WriteBackupRegister(BKP_DR2, $bkpDatareg2$);
    #endif

    #if (STRCMP($bkpDatareg3$, 0) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Writes user data to BKP_DR3
    //
    BKP_WriteBackupRegister(BKP_DR3, $bkpDatareg3$);
    #endif

    #if (STRCMP($bkpDatareg4$, 0) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Writes user data to BKP_DR4
    //
    BKP_WriteBackupRegister(BKP_DR4, $bkpDatareg4$);
    #endif

    #if (STRCMP($bkpDatareg5$, 0) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Writes user data to BKP_DR5
    //
    BKP_WriteBackupRegister(BKP_DR5, $bkpDatareg5$);
    #endif

    #if (STRCMP($bkpDatareg6$, 0) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Writes user data to BKP_DR6
    //
    BKP_WriteBackupRegister(BKP_DR6, $bkpDatareg6$);
    #endif

    #if (STRCMP($bkpDatareg7$, 0) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Writes user data to BKP_DR7
    //
    BKP_WriteBackupRegister(BKP_DR7, $bkpDatareg7$);
    #endif

    #if (STRCMP($bkpDatareg8$, 0) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Writes user data to BKP_DR8
    //
    BKP_WriteBackupRegister(BKP_DR8, $bkpDatareg8$);
    #endif

    #if (STRCMP($bkpDatareg9$, 0) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Writes user data to BKP_DR9
    //
    BKP_WriteBackupRegister(BKP_DR9, $bkpDatareg9$);
    #endif

    #if (STRCMP($bkpDatareg10$, 0) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Writes user data to BKP_DR10
    //
    BKP_WriteBackupRegister(BKP_DR10, $bkpDatareg10$);
    #endif
}
//PUT_A_NEW_LINE_HERE
#if (STRCMP($tmprIntEn$, DISABLE) == 0)
/* TAMPER Interrupt function */
void TAMPER_IRQHandler(void)
{
    //
    // add your code 
    //   
}
#endif
//PUT_A_NEW_LINE_HERE