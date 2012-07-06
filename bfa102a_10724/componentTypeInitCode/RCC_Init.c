/**********************<<config wizard begin>>*********************************
<group>Peripheral
    <list>Peripheral Name
        <RCC=>RCC
    <code>$rcc$
</group>

<group>Clock source set    
    <list>HSE(4-16MHz)
        <RCC_HSE_OFF=>OFF
        <RCC_HSE_ON=>ON
		<RCC_HSE_Bypass=>Bypassed
    <code>$hseClkCfg$
    <list>HSI(8MHz)
        <ENABLE=>Enable
        <DISABLE=>Disable
    <code>$hsiClkEnable$
	<input=integer[0-31]>HSI calibration value[0-31]
    <default>0
	<code>$hsiTrimValue$	
</group>

<group>PLL set
    <list>PLL clock
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$pllClkEnable$
    <list>Clock source
        <RCC_PLLSource_HSI_Div2=>HSI / 2
        <RCC_PLLSource_HSE_Div1=>HSE
		<RCC_PLLSource_HSE_Div2=>HSE / 2
    <code>$pllClkSrc$
    <list>Multiplication factor
        <RCC_PLLMul_2=>2
        <RCC_PLLMul_3=>3
        <RCC_PLLMul_4=>4
        <RCC_PLLMul_5=>5
        <RCC_PLLMul_6=>6
        <RCC_PLLMul_7=>7
        <RCC_PLLMul_8=>8
        <RCC_PLLMul_9=>9
        <RCC_PLLMul_10=>10
        <RCC_PLLMul_11=>11
        <RCC_PLLMul_12=>12
        <RCC_PLLMul_13=>13
        <RCC_PLLMul_14=>14
        <RCC_PLLMul_15=>15
        <RCC_PLLMul_16=>16
    <code>$pllClkMul$
</group>

<group>System clock set
    <list>Clock source select
        <RCC_SYSCLKSource_HSI=>HSI 
        <RCC_SYSCLKSource_HSE=>HSE 
        <RCC_SYSCLKSource_PLLCLK=>PLL 
    <code>$sysClkSrc$
</group>

<group>AHB clock config
    <list>AHB clock divider
        <RCC_SYSCLK_Div1=>SYSCLK 
        <RCC_SYSCLK_Div2=>SYSCLK/2 
        <RCC_SYSCLK_Div4=>SYSCLK/4 
        <RCC_SYSCLK_Div8=>SYSCLK/8 
        <RCC_SYSCLK_Div16=>SYSCLK/16 
        <RCC_SYSCLK_Div64=>SYSCLK/64 
        <RCC_SYSCLK_Div128=>SYSCLK/128 
        <RCC_SYSCLK_Div256=>SYSCLK/256 
        <RCC_SYSCLK_Div512=>SYSCLK/512 
    <code>$ahbClkSrc$
</group>

<group>APB1 clock config
    <list>APB1 clock source
        <RCC_HCLK_Div1=>HCLK 
        <RCC_HCLK_Div2=>HCLK/2
        <RCC_HCLK_Div4=>HCLK/4 
        <RCC_HCLK_Div8=>HCLK/8 
        <RCC_HCLK_Div16=>HCLK/16 
    <code>$apb1ClkSrc$
</group>

<group>APB2 clock config
    <list>APB2 clock source
        <RCC_HCLK_Div1=>HCLK 
        <RCC_HCLK_Div2=>HCLK/2
        <RCC_HCLK_Div4=>HCLK/4 
        <RCC_HCLK_Div8=>HCLK/8 
        <RCC_HCLK_Div16=>HCLK/16 
    <code>$apb2ClkSrc$
</group>

<group>USB clock config
    <list>USB clock source
        <RCC_USBCLKSource_PLLCLK_1Div5=>PLL clock / 1.5
        <RCC_USBCLKSource_PLLCLK_Div1=>PLL clock
    <code>$usbClkSrc$
</group>

<group>ADC clock config
    <list>ADC clock source
        <RCC_PCLK2_Div2=>PLL clock / 2
        <RCC_PCLK2_Div4=>PLL clock / 4
        <RCC_PCLK2_Div6=>PLL clock / 6
        <RCC_PCLK2_Div8=>PLL clock / 8
    <code>$adcClkSrc$
</group>

<group>LSE clock set
    <list>LSE
        <RCC_LSE_OFF=>OFF
        <RCC_LSE_ON=>ON
        <RCC_LSE_Bypass=>Bypass 
    <code>$lseClkCfg$
</group>

<group>LSI clock set
    <list>LSI
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$lsiClkEn$
</group>

<group>RTC clock config
    <list>RTC
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$rtcClkEn$
    <list>RTC clock source
        <RCC_RTCCLKSource_LSE=>LSE
        <RCC_RTCCLKSource_LSI=>LSI
        <RCC_RTCCLKSource_HSE_Div128=>HSE / 128
    <code>$lsiClkSrc$
</group>

<group=or>Clock Interrupt set
    <list>HSI ready
        <0=>Disable
        <RCC_IT_HSIRDY=>Enable
    <list>HSE ready
        <0=>Disable
        <RCC_IT_HSERDY=>Enable
    <list>PLL ready
        <0=>Disable
        <RCC_IT_PLLRDY=>Enable
    <list>LSI ready
        <0=>Disable
        <RCC_IT_LSIRDY=>Enable
    <list>LSE ready
        <0=>Disable
        <RCC_IT_LSERDY=>Enable
    <code>$clkIntEn$  
</group>


<group=or>AHB peripheral config
    <list>DMA1
        <0=>Disable
        <RCC_AHBPeriph_DMA1=>Enable
    <list>DMA2
        <0=>Disable
        <RCC_AHBPeriph_DMA2=>Enable
    <list>SRAM
        <0=>Disable
        <RCC_AHBPeriph_SRAM=>Enable
    <list>FLITF
        <0=>Disable
        <RCC_AHBPeriph_FLITF=>Enable
    <list>CRC
        <0=>Disable
        <RCC_AHBPeriph_CRC=>Enable
    <list>FSMC
        <0=>Disable
        <RCC_AHBPeriph_FSMC=>Enable
    <list>SDIO
        <0=>Disable
        <RCC_AHBPeriph_SDIO=>Enable
    <code>$ahbClkEn$
</group>

<group=or>APB1 peripheral config
    <list>TIM2
        <0=>Disable
        <RCC_APB1Periph_TIM2=>Enable
    <list>TIM3
        <0=>Disable
        <RCC_APB1Periph_TIM3=>Enable
    <list>TIM4
        <0=>Disable
        <RCC_APB1Periph_TIM4=>Enable
    <list>TIM5
        <0=>Disable
        <RCC_APB1Periph_TIM5=>Enable
    <list>TIM6
        <0=>Disable
        <RCC_APB1Periph_TIM6=>Enable
    <list>TIM7
        <0=>Disable
        <RCC_APB1Periph_TIM7=>Enable
    <list>WWDG
        <0=>Disable
        <RCC_APB1Periph_WWDG=>Enable
    <list>SPI2
        <0=>Disable
        <RCC_APB1Periph_SPI2=>Enable
    <list>SPI3
        <0=>Disable
        <RCC_APB1Periph_SPI3=>Enable
    <list>USART2
        <0=>Disable
        <RCC_APB1Periph_USART2=>Enable
    <list>USART3
        <0=>Disable
        <RCC_APB1Periph_USART3=>Enable
    <list>USART4
        <0=>Disable
        <RCC_APB1Periph_USART4=>Enable
    <list>USART5
        <0=>Disable
        <RCC_APB1Periph_USART5=>Enable
    <list>I2C1
        <0=>Disable
        <RCC_APB1Periph_I2C1=>Enable
    <list>I2C2
        <0=>Disable
        <RCC_APB1Periph_I2C2=>Enable
    <list>USB
        <0=>Disable
        <RCC_APB1Periph_USB=>Enable
    <list>CAN1
        <0=>Disable
        <RCC_APB1Periph_CAN1=>Enable
    <list>BKP
        <0=>Disable
        <RCC_APB1Periph_BKP=>Enable
    <list>PWR
        <0=>Disable
        <RCC_APB1Periph_PWR=>Enable
    <list>DAC
        <0=>Disable
        <RCC_APB1Periph_DAC=>Enable
    <list>CEC
        <0=>Disable
        <RCC_APB1Periph_CEC=>Enable
    <list>TIM12
        <0=>Disable
        <RCC_APB1Periph_TIM12=>Enable
    <list>TIM13
        <0=>Disable
        <RCC_APB1Periph_TIM13=>Enable
    <list>TIM14
        <0=>Disable
        <RCC_APB1Periph_TIM14=>Enable
    <code>$apb1ClkEn$	
</group>

<group=or>APB2 peripheral config
    <list>AFIO
        <0=>Disable
        <RCC_APB2Periph_AFIO=>Enable
    <list>GPIOA
        <0=>Disable
        <RCC_APB2Periph_GPIOA=>Enable
    <list>GPIOB
        <0=>Disable
        <RCC_APB2Periph_GPIOB=>Enable
    <list>GPIOC
        <0=>Disable
        <RCC_APB2Periph_GPIOC=>Enable
    <list>GPIOD
        <0=>Disable
        <RCC_APB2Periph_GPIOD=>Enable
    <list>GPIOE
        <0=>Disable
        <RCC_APB2Periph_GPIOE=>Enable
    <list>GPIOF
        <0=>Disable
        <RCC_APB2Periph_GPIOF=>Enable
    <list>GPIOG
        <0=>Disable
        <RCC_APB2Periph_GPIOG=>Enabl
    <list>ADC1
        <0=>Disable
        <RCC_APB2Periph_ADC1=>Enable
    <list>ADC2
        <0=>Disable
        <RCC_APB2Periph_ADC2=>Enable
    <list>TIM1
        <0=>Disable
        <RCC_APB2Periph_TIM1=>Enable
    <list>SPI1
        <0=>Disable
        <RCC_APB2Periph_SPI1=>Enable
    <list>TIM8
        <0=>Disable
        <RCC_APB2Periph_TIM8=>Enable
    <list>USART1
        <0=>Disable
        <RCC_APB2Periph_USART1=>Enable
    <list>ADC3
        <0=>Disable
        <RCC_APB2Periph_ADC3=>Enable
    <list>TIM15
        <0=>Disable
        <RCC_APB2Periph_TIM15=>Enable
    <list>TIM16
        <0=>Disable
        <RCC_APB2Periph_TIM16=>Enable
    <list>TIM17
        <0=>Disable
        <RCC_APB2Periph_TIM17=>Enable
    <list>TIM9
        <0=>Disable
        <RCC_APB2Periph_TIM9=>Enable
    <list>TIM10
        <0=>Disable
        <RCC_APB2Periph_TIM10=>Enable
    <list>TIM11
        <0=>Disable
        <RCC_APB2Periph_TIM11=>Enable
    <code>$apb2ClkEn$
</group>

<group=or>APB1 peripheral reset
    <list>TIM2
        <0=>Disable
        <RCC_APB1Periph_TIM2=>Enable
    <list>TIM3
        <0=>Disable
        <RCC_APB1Periph_TIM3=>Enable
    <list>TIM4
        <0=>Disable
        <RCC_APB1Periph_TIM4=>Enable
    <list>TIM5
        <0=>Disable
        <RCC_APB1Periph_TIM5=>Enable
    <list>TIM6
        <0=>Disable
        <RCC_APB1Periph_TIM6=>Enable
    <list>TIM7
        <0=>Disable
        <RCC_APB1Periph_TIM7=>Enable
    <list>WWDG
        <0=>Disable
        <RCC_APB1Periph_WWDG=>Enable
    <list>SPI2
        <0=>Disable
        <RCC_APB1Periph_SPI2=>Enable
    <list>SPI3
        <0=>Disable
        <RCC_APB1Periph_SPI3=>Enable
    <list>USART2
        <0=>Disable
        <RCC_APB1Periph_USART2=>Enable
    <list>USART3
        <0=>Disable
        <RCC_APB1Periph_USART3=>Enable
    <list>USART4
        <0=>Disable
        <RCC_APB1Periph_USART4=>Enable
    <list>USART5
        <0=>Disable
        <RCC_APB1Periph_USART5=>Enable
    <list>I2C1
        <0=>Disable
        <RCC_APB1Periph_I2C1=>Enable
    <list>I2C2
        <0=>Disable
        <RCC_APB1Periph_I2C2=>Enable
    <list>USB
        <0=>Disable
        <RCC_APB1Periph_USB=>Enable
    <list>CAN1
        <0=>Disable
        <RCC_APB1Periph_CAN1=>Enable
    <list>BKP
        <0=>Disable
        <RCC_APB1Periph_BKP=>Enable
    <list>PWR
        <0=>Disable
        <RCC_APB1Periph_PWR=>Enable
    <list>DAC
        <0=>Disable
        <RCC_APB1Periph_DAC=>Enable
    <list>CEC
        <0=>Disable
        <RCC_APB1Periph_CEC=>Enable
    <list>TIM12
        <0=>Disable
        <RCC_APB1Periph_TIM12=>Enable
    <list>TIM13
        <0=>Disable
        <RCC_APB1Periph_TIM13=>Enable
    <list>TIM14
        <0=>Disable
        <RCC_APB1Periph_TIM14=>Enable
    <code>$apb1ClkResetEn$	
</group>

<group=or>APB2 peripheral reset
    <list>AFIO
        <0=>Disable
        <RCC_APB2Periph_AFIO=>Enable
    <list>GPIOA
        <0=>Disable
        <RCC_APB2Periph_GPIOA=>Enable
    <list>GPIOB
        <0=>Disable
        <RCC_APB2Periph_GPIOB=>Enable
    <list>GPIOC
        <0=>Disable
        <RCC_APB2Periph_GPIOC=>Enable
    <list>GPIOD
        <0=>Disable
        <RCC_APB2Periph_GPIOD=>Enable
    <list>GPIOE
        <0=>Disable
        <RCC_APB2Periph_GPIOE=>Enable
    <list>GPIOF
        <0=>Disable
        <RCC_APB2Periph_GPIOF=>Enable
    <list>GPIOG
        <0=>Disable
        <RCC_APB2Periph_GPIOG=>Enable
    <list>ADC1
        <0=>Disable
        <RCC_APB2Periph_ADC1=>Enable
    <list>ADC2
        <0=>Disable
        <RCC_APB2Periph_ADC2=>Enable
    <list>TIM1
        <0=>Disable
        <RCC_APB2Periph_TIM1=>Enable
    <list>SPI1
        <0=>Disable
        <RCC_APB2Periph_SPI1=>Enable
    <list>TIM8
        <0=>Disable
        <RCC_APB2Periph_TIM8=>Enable
    <list>USART1
        <0=>Disable
        <RCC_APB2Periph_USART1=>Enable
    <list>ADC3
        <0=>Disable
        <RCC_APB2Periph_ADC3=>Enable
    <list>TIM15
        <0=>Disable
        <RCC_APB2Periph_TIM15=>Enable
    <list>TIM16
        <0=>Disable
        <RCC_APB2Periph_TIM16=>Enable
    <list>TIM17
        <0=>Disable
        <RCC_APB2Periph_TIM17=>Enable
    <list>TIM9
        <0=>Disable
        <RCC_APB2Periph_TIM9=>Enable
    <list>TIM10
        <0=>Disable
        <RCC_APB2Periph_TIM10=>Enable
    <list>TIM11
        <0=>Disable
        <RCC_APB2Periph_TIM11=>Enable
    <code>$apb2ClkResetEn$
</group>

<group>Backup domain config
    <list>Backup domain reset
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$backupClkResetEn$
</group>

<group>Clock Security System
    <list>Clock security system enable
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$cssEn$	
</group>

<group>MCO config
    <list>MCO enable
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$mcoEn$	
    <list>MCO clock source
        <RCC_MCO_NoClock=>NoClock
        <RCC_MCO_SYSCLK=>SYSCLK
        <RCC_MCO_HSI=>HSI
        <RCC_MCO_HSE=>HSE
        <RCC_MCO_PLLCLK_Div2=>PLLCLK / 2
    <code>$mcoClkSrc$
</group>

<dep>
    <type>state
    <trigger>MCO config->MCO enable = Disable
    <action>MCO config->MCO clock source = Disable    
</dep>

<dep>
    <type>state
    <trigger>Clock source set->HSE(4-16MHz) = OFF
    <trigger>Clock source set->HSI(8MHz) = Disable
    <action>PLL set = Disable
	<action>Clock Interrupt set->PLL ready = Disable
</dep>

<dep>
    <type>state
    <trigger>PLL set->PLL clock = Disable
    <action>PLL set->Clock source = Disable
    <action>PLL set->Multiplication factor = Disable
</dep>

<dep>
    <type>state
    <trigger>Clock source set->HSE(4-16MHz) = OFF
    <trigger>Clock source set->HSI(8MHz) = Disable
    <action>System clock set = Disable
    <action>AHB clock config = Disable
    <action>APB1 clock config = Disable
    <action>APB2 clock config = Disable
    <action>AHB peripheral config = Disable
    <action>APB1 peripheral config = Disable
    <action>APB2 peripheral config = Disable
    <action>APB1 peripheral reset = Disable
    <action>APB2 peripheral reset = Disable
	<action>MCO config = Disable
</dep>

<dep>
    <type>state
    <trigger>PLL set->PLL clock = Disable
    <action>USB clock config = Disable
    <action>ADC clock config = Disable
</dep>

<dep>
    <type>state
    <trigger>Clock source set->HSE(4-16MHz) = OFF
    <trigger>LSE clock set->LSE = OFF
    <trigger>LSI clock set->LSI = Disable
    <action>RTC clock config = Disable
</dep>

<dep>
    <type>state
    <trigger>RTC clock config->RTC = Disable
    <action>RTC clock config->RTC clock source = Disable
</dep>

<dep>
    <type>state
    <trigger>Clock source set->HSE(4-16MHz) = OFF
    <action>Clock Interrupt set->HSE ready = Disable
</dep>

<dep>
    <type>state
    <trigger>Clock source set->HSI(8MHz) = Disable 
    <action>Clock Interrupt set->HSI ready = Disable
</dep>

<dep>
    <type>state
    <trigger>PLL set->PLL clock = Disable 
    <action>Clock Interrupt set->PLL ready = Disable
</dep>

<dep>
    <type>state
    <trigger>LSE clock set->LSE = OFF
    <action>Clock Interrupt set->LSE ready = Disable
</dep>

<dep>
    <type>state
    <trigger>LSI clock set->LSI = Disable 
    <action>Clock Interrupt set->LSI ready = Disable
</dep>

*******************************<<config wizard end>>**************************/
#include "stm32f10x.h"
#include "stm32f10x_rcc.h"

#if (STRCMP($clkIntEn$, 0) == 0)
#include "misc.h"
//PUT_A_NEW_LINE_HERE
/***************************************************************************//**
 * Declare function prototype
*******************************************************************************/
void RCC_IRQHandler(void);
#endif

//PUT_A_NEW_LINE_HERE
/*************************************************************
 * RCC Initialization
**************************************************************/
void RCC_Init()
{
    #if (STRCMP($clkIntEn$, 0) == 0)
    NVIC_InitTypeDef NVIC_InitStructure;
    #endif
	
    #if (STRCMP($hsiClkEnable$,DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Enable HSI
    //
    RCC_HSICmd(ENABLE);
    //
    // Adjust HSI Calibration Value
    //
    RCC_AdjustHSICalibrationValue($hsiTrimValue$);
    #endif
	
	#if (STRCMP($hseClkCfg$, RCC_HSE_OFF) == 0)    
    //PUT_A_NEW_LINE_HERE
    //
    // Enable HSE
    //
    RCC_HSEConfig($hseClkCfg$);
    //PUT_A_NEW_LINE_HERE
    //
    // Wait until HSE is ready or time-out
    //
    if (SUCCESS != RCC_WaitForHSEStartUp()) 
    {
        while(1);
    }
    #endif
		
    #if (STRCMP($pllClkEnable$,DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Config HSI clock source£¬and adjust HSI Calibration Value
    //
    RCC_PLLConfig($pllClkSrc$, $pllClkMul$);
    //PUT_A_NEW_LINE_HERE
    //
    // Enable PLL
    //
    RCC_PLLCmd(ENABLE);

    #endif	
	
	#if (STRCMP($hseClkCfg$, RCC_HSE_OFF) == 0 || STRCMP($hsiClkEnable$,DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Select System clock Source
    //
    RCC_SYSCLKConfig($sysClkSrc$);
	
    //PUT_A_NEW_LINE_HERE
    //
    // Select AHB clock Source
    //
    RCC_HCLKConfig($ahbClkSrc$);	

    //PUT_A_NEW_LINE_HERE
    //
    // Select APB1 clock Source
    //
    RCC_PCLK1Config($apb1ClkSrc$);	

    //PUT_A_NEW_LINE_HERE
    //
    // Select APB2 clock Source
    //
    RCC_PCLK2Config($apb1ClkSrc$);	
	
    //PUT_A_NEW_LINE_HERE
    //
    // Select USB clock Source
    //
    RCC_USBCLKConfig($usbClkSrc$);
    
    //PUT_A_NEW_LINE_HERE
    //
    // Select ADC clock Source
    //
    RCC_ADCCLKConfig($adcClkSrc$);
	#endif

    #if (STRCMP($lseClkCfg$, RCC_LSE_OFF) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Select LSE clock Source
    //
    RCC_LSEConfig($lseClkCfg$);
    #endif

    #if (STRCMP($lsiClkEn$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Select LSI clock Source
    //
    RCC_LSICmd($lsiClkEn$);
    #endif
	
    #if ( STRCMP($rtcClkEn$, DISABLE) == 0 && ( STRCMP($lsiClkEn$, DISABLE) == 0 || \
	STRCMP($lseClkCfg$, RCC_LSE_OFF) == 0 || STRCMP($hseClkCfg$, RCC_HSE_OFF) == 0 ) )
    //PUT_A_NEW_LINE_HERE
    //
    // Select RTC clock Source and Enable RTC
    //
    RCC_RTCCLKConfig($lsiClkSrc$);
    RCC_RTCCLKCmd(ENABLE);
    #endif
	
    #if (STRCMP($clkIntEn$, 0) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Config clock interrupt 
    //
    RCC_ITConfig($clkIntEn$, ENABLE);
    NVIC_InitStructure.NVIC_IRQChannel = RCC_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);
    #endif
	
    #if ( STRCMP($ahbClkEn$, 0) == 0 )
    //PUT_A_NEW_LINE_HERE
    //
    // AHB peripheral clock config
    //
    RCC_AHBPeriphClockCmd($ahbClkEn$, ENABLE);
    #endif
	
    #if ( STRCMP($apb1ClkEn$, 0) == 0 )
    //PUT_A_NEW_LINE_HERE
    //
    // APB1 peripheral clock config
    //
    RCC_APB1PeriphClockCmd($apb1ClkEn$, ENABLE);
    #endif
	
    #if ( STRCMP($apb2ClkEn$, 0) == 0 )
    //PUT_A_NEW_LINE_HERE
    //
    // APB2 peripheral clock config
    //
    RCC_APB2PeriphClockCmd($apb2ClkEn$, ENABLE);
    #endif

    #if ( STRCMP($apb1ClkResetEn$, 0) == 0 )
    //PUT_A_NEW_LINE_HERE
    //
    // APB1 peripheral clock reset
    //
    RCC_APB1PeriphResetCmd($apb1ClkResetEn$, ENABLE);
    #endif
	
    #if ( STRCMP($apb2ClkResetEn$, 0) == 0 )
    //PUT_A_NEW_LINE_HERE
    //
    // APB2 peripheral clock reset
    //
    RCC_APB2PeriphResetCmd($apb2ClkResetEn$, ENABLE);
    #endif

    #if ( STRCMP($backupClkResetEn$, DISABLE) == 0 )
    //PUT_A_NEW_LINE_HERE
    //
    // Enable Clock Security System
    //
    RCC_BackupResetCmd(ENABLE);
    #endif
	
    #if ( STRCMP($cssEn$, DISABLE) == 0 )
    //PUT_A_NEW_LINE_HERE
    //
    // Enable Clock Security System
    //
    RCC_ClockSecuritySystemCmd(ENABLE);
    #endif	

    #if ( STRCMP($mcoEn$, DISABLE) == 0 )
    //PUT_A_NEW_LINE_HERE
    //
    // Enable Clock Security System
    //
    RCC_MCOConfig($mcoClkSrc$);
    #endif	
    
}
//PUT_A_NEW_LINE_HERE
#if (STRCMP($clkIntEn$, 0) == 0)
/* RCC Interrupt function */
void RCC_IRQHandler(void)
{
    //
    // add your code 
    // 
}
#endif