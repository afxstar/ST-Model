/***********************<<config wizard begin>>********************************
<group>Peripheral
    <list>Peripheral Name
        <TIM8=>TIM8
    <code>$tim8$
</group>

<group>Timer Base Config
    <list>Counter Mode
        <TIM_CounterMode_Up=>Up-counting
        <TIM_CounterMode_Down=>Down-counting
        <TIM_CounterMode_CenterAligned1=>Center-aligned 1
        <TIM_CounterMode_CenterAligned1=>Center-aligned 2
        <TIM_CounterMode_CenterAligned1=>Center-aligned 3
    <code>$counterMode$
	<list>Clock Division
        <TIM_CKD_DIV1=>Div_1
        <TIM_CKD_DIV2=>Div_2
        <TIM_CKD_DIV4=>Div_4
    <code>$clockDivision$
    <input=integer[1-65535]>Counter Period(16bit)
    <default>65535
    <code>$counterPeriod$
    <input=integer[0-65535]>Prescaler(16bit)
    <code>$prescaler$
	<input=integer[0-65535]>RepetitionCounter(16bit)
    <code>$repetition$    
</group>

<group>Update Event
    <list>Update Event Disable
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$UEVDis$
    <list>Request Interrupt Source
        <TIM_UpdateSource_Regular=>Regular
        <TIM_UpdateSource_Global=>Global
    <code>$requestIntSrc$
</group>

<group>Trigger Config
    <list>External Trigger
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$extTriEnable$
    <list>Internal Trigger
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$intTriEnable$
    <list>External Clock
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$extClkEnable$
    <list>Internal Trigger Source
        <TIM_TS_ITR0=>Internal Trigger 0
        <TIM_TS_ITR1=>Internal Trigger 1
		<TIM_TS_ITR2=>Internal Trigger 2
		<TIM_TS_ITR3=>Internal Trigger 3
    <code>$intTriSrc$
    <list>External Clock Mode 
        <MODE1=>Mode 1
        <MODE2=>Mode 2
    <code>$extClkMode$
    <list>Ext_Tri_Pol
        <TIM_ExtTRGPolarity_NonInverted=>High-Rising
        <TIM_ExtTRGPolarity_Inverted=>Low-Falling
    <code>$exTriPolSet$
    <list>Ext_Tri_PSC
        <TIM_ExtTRGPSC_OFF=>OFF
        <TIM_ExtTRGPSC_DIV2=>2
        <TIM_ExtTRGPSC_DIV4=>4
        <TIM_ExtTRGPSC_DIV8=>8
    <code>$exTriPSCSet$
    <input=integer[0-15]>Ext_Tri_Filter(0-15)
    <code>$exTriFilterSet$
</group>

<group>Mode Set
    <list>Master Mode
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$MMEnable$
    <list>Slave Mode
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$SMEnable$
    <list>Slave Mode Set
        <TIM_SlaveMode_Reset=>Reset
        <TIM_SlaveMode_Gated=>Gated
        <TIM_SlaveMode_Trigger=>Trigger
        <TIM_SlaveMode_External1=>External1
    <code>$SMSel$
    <list>Hall Sensor Interface
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$HSEnable$
    <list>Single Pulse Mode
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$SPMEnable$
	<list>Single Pulse Mode Set
        <TIM_OPMode_Single=>Single
        <TIM_OPMode_Repetitive=>Repetitive
    <code>$SPMSet$
    <list>Trigger Output Mode
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$TOMEnable$
	<list>Trigger Output Source
        <TIM_TRGOSource_Reset=>Reset
        <TIM_TRGOSource_Enable=>Enable
		<TIM_TRGOSource_Update=>Update
        <TIM_TRGOSource_OC1=>OC1
		<TIM_TRGOSource_OC1Ref=>OC1Ref
        <TIM_TRGOSource_OC2Ref=>OC2Ref
		<TIM_TRGOSource_OC3Ref=>OC3Ref
		<TIM_TRGOSource_OC4Ref=>OC4Ref
    <code>$TOMSrc$
</group>

<group>Channel 1 Config
    <list>Cap/Comp Enable
        <DISABLE=>Capture Disable or Output Inacitve
        <ENABLE=>Capture Enable or Output Acitve
    <code>$CH1CCEnable$
    <list>Cap/Comp Select
        <CH1_Cap_Func=>Capture Input
        <CH1_Comp_Func=>Compare Output
    <code>$CH1CCSel$
    <list>Capture Prescaler
        <TIM_ICPSC_DIV1=>OFF
        <TIM_ICPSC_DIV2=>Done Once Every 2 Events
        <TIM_ICPSC_DIV4=>Done Once Every 4 Events
        <TIM_ICPSC_DIV8=>Done Once Every 8 Events
    <code>$CH1ICPSC$
    <list>Capture Selection
        <TIM_ICSelection_DirectTI=>DIRECT
        <TIM_ICSelection_IndirectTI=>INDIRECT
        <TIM_ICSelection_TRC=>TRCED
    <code>$CH1ICSel$
	<list>Capture Polarity
	    <TIM_ICPolarity_Rising=>Rising
		<TIM_ICPolarity_Falling=>Falling
	<code>$CH1ICPol$	
    <input=integer[0-15]>Capture Filter(0-15)
    <code>$CH1ICFilter$
    <list>Forced Action
        <TIM_ForcedAction_Active=>Active
        <TIM_ForcedAction_InActive=>InActive
    <code>$CH1ForceAction$
    <list>CCR Preload
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$CH1CCRPreload$
    <list>Clear Output Ref
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$CH1OREFClear$
	<list>Compare Polarity
	    <TIM_OCPolarity_High=>High
		<TIM_OCPolarity_Low=>Low
	<code>$CH1OCPol$
    <list>Output Mode
        <TIM_OCMode_Timing=>Timing
        <TIM_OCMode_Inactive=>Match Output 0
        <TIM_OCMode_Active=>Match Output 1
        <TIM_OCMode_Toggle=>Match Output Toggle
        <TIM_ForcedAction_InActive=>Forced to 0
        <TIM_ForcedAction_Active=>Forced to 1
        <TIM_OCMode_PWM1=>PWM1
        <TIM_OCMode_PWM2=>PWM2
    <code>$CH1OutputMode$
    <input=integer[0-65535]>Pulse Value(16bit)
    <code>$CH1PsValue$
	<list>Idle State
	    <TIM_OCIdleState_Set=>Set
		<TIM_OCIdleState_Reset=>Reset
	<code>$CH1IdleState$	
</group>

<group>Channel 2 Config
    <list>Cap/Comp Enable
        <DISABLE=>Capture Disable or Output Inacitve
        <ENABLE=>Capture Enable or Output Acitve
    <code>$CH2CCEnable$
    <list>Cap/Comp Select
        <CH2_Cap_Func=>Capture Input
        <CH2_Comp_Func=>Compare Output
    <code>$CH2CCSel$
    <list>Capture Prescaler
        <TIM_ICPSC_DIV1=>OFF
        <TIM_ICPSC_DIV2=>Done Once Every 2 Events
        <TIM_ICPSC_DIV4=>Done Once Every 4 Events
        <TIM_ICPSC_DIV8=>Done Once Every 8 Events
    <code>$CH2ICPSC$
    <list>Capture Selection
        <TIM_ICSelection_DirectTI=>DIRECT
        <TIM_ICSelection_IndirectTI=>INDIRECT
        <TIM_ICSelection_TRC=>TRCED
    <code>$CH2ICSel$
	<list>Capture Polarity
	    <TIM_ICPolarity_Rising=>Rising
		<TIM_ICPolarity_Falling=>Falling
	<code>$CH2ICPol$	
    <input=integer[0-15]>Capture Filter(0-15)
    <code>$CH2ICFilter$
    <list>Forced Action
        <TIM_ForcedAction_Active=>Active
        <TIM_ForcedAction_InActive=>InActive
    <code>$CH2ForceAction$
    <list>CCR Preload
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$CH2CCRPreload$
    <list>Clear Output Ref
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$CH2OREFClear$
	<list>Compare Polarity
	    <TIM_OCPolarity_High=>High
		<TIM_OCPolarity_Low=>Low
	<code>$CH2OCPol$
    <list>Output Mode
        <TIM_OCMode_Timing=>Timing
        <TIM_OCMode_Inactive=>Match Output 0
        <TIM_OCMode_Active=>Match Output 1
        <TIM_OCMode_Toggle=>Match Output Toggle
        <TIM_ForcedAction_InActive=>Forced to 0
        <TIM_ForcedAction_Active=>Forced to 1
        <TIM_OCMode_PWM1=>PWM1
        <TIM_OCMode_PWM2=>PWM2
    <code>$CH2OutputMode$
    <input=integer[0-65535]>Pulse Value(16bit)
    <code>$CH2PsValue$
	<list>Idle State
	    <TIM_OCIdleState_Set=>Set
		<TIM_OCIdleState_Reset=>Reset
	<code>$CH2IdleState$
</group>

<group>Channel 3 Config
    <list>Cap/Comp Enable
        <DISABLE=>Capture Disable or Output Inacitve
        <ENABLE=>Capture Enable or Output Acitve
    <code>$CH3CCEnable$
    <list>Cap/Comp Select
        <CH3_Cap_Func=>Capture Input
        <CH3_Comp_Func=>Compare Output
    <code>$CH3CCSel$
    <list>Capture Prescaler
        <TIM_ICPSC_DIV1=>OFF
        <TIM_ICPSC_DIV2=>Done Once Every 2 Events
        <TIM_ICPSC_DIV4=>Done Once Every 4 Events
        <TIM_ICPSC_DIV8=>Done Once Every 8 Events
    <code>$CH3ICPSC$
    <list>Capture Selection
        <TIM_ICSelection_DirectTI=>DIRECT
        <TIM_ICSelection_IndirectTI=>INDIRECT
        <TIM_ICSelection_TRC=>TRCED
    <code>$CH3ICSel$
	<list>Capture Polarity
	    <TIM_ICPolarity_Rising=>Rising
		<TIM_ICPolarity_Falling=>Falling
	<code>$CH3ICPol$	
    <input=integer[0-15]>Capture Filter(0-15)
    <code>$CH3ICFilter$
    <list>Forced Action
        <TIM_ForcedAction_Active=>Active
        <TIM_ForcedAction_InActive=>InActive
    <code>$CH3ForceAction$
    <list>CCR Preload
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$CH3CCRPreload$
    <list>Clear Output Ref
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$CH3OREFClear$
	<list>Compare Polarity
	    <TIM_OCPolarity_High=>High
		<TIM_OCPolarity_Low=>Low
	<code>$CH3OCPol$
    <list>Output Mode
        <TIM_OCMode_Timing=>Timing
        <TIM_OCMode_Inactive=>Match Output 0
        <TIM_OCMode_Active=>Match Output 1
        <TIM_OCMode_Toggle=>Match Output Toggle
        <TIM_ForcedAction_InActive=>Forced to 0
        <TIM_ForcedAction_Active=>Forced to 1
        <TIM_OCMode_PWM1=>PWM1
        <TIM_OCMode_PWM2=>PWM2
    <code>$CH3OutputMode$
    <input=integer[0-65535]>Pulse Value(16bit)
    <code>$CH3PsValue$
	<list>Idle State
	    <TIM_OCIdleState_Set=>Set
		<TIM_OCIdleState_Reset=>Reset
	<code>$CH3IdleState$
</group>

<group>Channel 4 Config
    <list>Cap/Comp Enable
        <DISABLE=>Capture Disable or Output Inacitve
        <ENABLE=>Capture Enable or Output Acitve
    <code>$CH4CCEnable$
    <list>Cap/Comp Select
        <CH4_Cap_Func=>Capture Input
        <CH4_Comp_Func=>Compare Output
    <code>$CH4CCSel$
    <list>Capture Prescaler
        <TIM_ICPSC_DIV1=>OFF
        <TIM_ICPSC_DIV2=>Done Once Every 2 Events
        <TIM_ICPSC_DIV4=>Done Once Every 4 Events
        <TIM_ICPSC_DIV8=>Done Once Every 8 Events
    <code>$CH4ICPSC$
    <list>Capture Selection
        <TIM_ICSelection_DirectTI=>DIRECT
        <TIM_ICSelection_IndirectTI=>INDIRECT
        <TIM_ICSelection_TRC=>TRCED
    <code>$CH4ICSel$
	<list>Capture Polarity
	    <TIM_ICPolarity_Rising=>Rising
		<TIM_ICPolarity_Falling=>Falling
	<code>$CH4ICPol$	
    <input=integer[0-15]>Capture Filter(0-15)
    <code>$CH4ICFilter$
    <list>Forced Action
        <TIM_ForcedAction_Active=>Active
        <TIM_ForcedAction_InActive=>InActive
    <code>$CH4ForceAction$
    <list>CCR Preload
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$CH4CCRPreload$
    <list>Clear Output Ref
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$CH4OREFClear$
	<list>Compare Polarity
	    <TIM_OCPolarity_High=>High
		<TIM_OCPolarity_Low=>Low
	<code>$CH4OCPol$
    <list>Output Mode
        <TIM_OCMode_Timing=>Timing
        <TIM_OCMode_Inactive=>Match Output 0
        <TIM_OCMode_Active=>Match Output 1
        <TIM_OCMode_Toggle=>Match Output Toggle
        <TIM_ForcedAction_InActive=>Forced to 0
        <TIM_ForcedAction_Active=>Forced to 1
        <TIM_OCMode_PWM1=>PWM1
        <TIM_OCMode_PWM2=>PWM2
    <code>$CH4OutputMode$
    <input=integer[0-65535]>Pulse Value(16bit)
    <code>$CH4PsValue$
	<list>Idle State
	    <TIM_OCIdleState_Set=>Set
		<TIM_OCIdleState_Reset=>Reset
	<code>$CH4IdleState$
</group>

<group>BRK Interrupt Config
    <list>Break Event Int. 
        <DISABLE=>Disable
        <ENABLE=>Enable
	<code>$BRKInt$
</group>

<group>UP Interrupt Config	
    <list>Update Event Int. 
        <DISABLE=>Disable
        <ENABLE=>Enable
	<code>$UPInt$
</group>

<group=or>TRG/COM Interrupt Config
    <list>Trigger Event Int. 
        <0=>Disable
        <TIM_IT_Trigger=>Enable
	<list>Commutation Event Int. 
        <0=>Disable
        <TIM_IT_COM=>Enable
	<code>$TCInt$
</group>
	
<group=or>CC Interrupt Config
    <list>CH1 Cap/Comp Int. 
        <0=>Disable
        <TIM_IT_CC1=>Enable
    <list>CH2 Cap/Comp Int. 
        <0=>Disable
        <TIM_IT_CC2=>Enable
    <list>CH3 Cap/Comp Int. 
        <0=>Disable
        <TIM_IT_CC3=>Enable
    <list>CH4 Cap/Comp Int. 
        <0=>Disable
        <TIM_IT_CC4=>Enable
    <code>$CCInt$
</group>

<dep>
    <type>state
    <trigger>Trigger Config->External Clock = Disable
    <action>Trigger Config->External Clock Mode = disable
</dep>

<dep>
    <type>state
    <trigger>Trigger Config->External Trigger = Disable
    <action>Trigger Config->Ext_Tri_Pol = disable
	<action>Trigger Config->Ext_Tri_PSC = disable
	<action>Trigger Config->Ext_Tri_Filter(0-15) = disable
</dep>

<dep>
    <type>state
    <trigger>Trigger Config->Internal Trigger = Disable
    <action>Trigger Config->Internal Trigger Source = disable
</dep>

<dep>
    <type>state
    <trigger>Mode Set->Slave Mode = Disable
    <action>Mode Set->Slave Mode Set = disable
</dep>

<dep>
    <type>state
    <trigger>Mode Set->Single Pulse Mode = Disable
    <action>Mode Set->Single Pulse Mode Set = disable
</dep>

<dep>
    <type>state
    <trigger>Mode Set->Trigger Output Mode = Disable
    <action>Mode Set->Trigger Output Source = disable
</dep>

<dep>
    <type>state
    <trigger>Channel 1 Config->Cap/Comp Enable = Capture Disable or Output Inacitve
    <action>Channel 1 Config->Cap/Comp Select = disable
    <action>Channel 1 Config->Capture Prescaler = disable
    <action>Channel 1 Config->Capture Selection = disable
	<action>Channel 1 Config->Capture Polarity = disable
    <action>Channel 1 Config->Capture Filter(0-15) = disable
    <action>Channel 1 Config->Forced Action = disable
    <action>Channel 1 Config->CCR Preload = disable
    <action>Channel 1 Config->Clear Output Ref = disable
	<action>Channel 1 Config->Compare Polarity = disable
    <action>Channel 1 Config->Output Mode = disable
    <action>Channel 1 Config->Pulse Value(16bit) = disable
	<action>Channel 1 Config->Idle State = disable
</dep>

<dep>
    <type>state
    <trigger>Channel 1 Config->Cap/Comp Enable = Capture Enable or Output Acitve
    <trigger>Channel 1 Config->Cap/Comp Select = Capture Input
    <action>Channel 1 Config->Forced Action = disable
    <action>Channel 1 Config->CCR Preload = disable
    <action>Channel 1 Config->Clear Output Ref = disable
	<action>Channel 1 Config->Compare Polarity = disable
    <action>Channel 1 Config->Output Mode = disable
    <action>Channel 1 Config->Pulse Value(16bit) = disable
	<action>Channel 1 Config->Idle State = disable
</dep>

<dep>
    <type>state
    <trigger>Channel 1 Config->Cap/Comp Enable = Capture Enable or Output Acitve
    <trigger>Channel 1 Config->Cap/Comp Select = Compare Output
    <action>Channel 1 Config->Capture Prescaler = disable
    <action>Channel 1 Config->Capture Source = disable
    <action>Channel 1 Config->Capture Filter(0-15) = disable
</dep>

<dep>
    <type>state
    <trigger>Channel 2 Config->Cap/Comp Enable = Capture Disable or Output Inacitve
    <action>Channel 2 Config->Cap/Comp Select = disable
    <action>Channel 2 Config->Capture Prescaler = disable
    <action>Channel 2 Config->Capture Selection = disable
	<action>Channel 2 Config->Capture Polarity = disable
    <action>Channel 2 Config->Capture Filter(0-15) = disable
    <action>Channel 2 Config->Forced Action = disable
    <action>Channel 2 Config->CCR Preload = disable
    <action>Channel 2 Config->Clear Output Ref = disable
	<action>Channel 2 Config->Compare Polarity = disable
    <action>Channel 2 Config->Output Mode = disable
    <action>Channel 2 Config->Pulse Value(16bit) = disable
	<action>Channel 2 Config->Idle State = disable
</dep>

<dep>
    <type>state
    <trigger>Channel 2 Config->Cap/Comp Enable = Capture Enable or Output Acitve
    <trigger>Channel 2 Config->Cap/Comp Select = Capture Input
    <action>Channel 2 Config->Forced Action = disable
    <action>Channel 2 Config->CCR Preload = disable
    <action>Channel 2 Config->Clear Output Ref = disable
	<action>Channel 2 Config->Compare Polarity = disable
    <action>Channel 2 Config->Output Mode = disable
    <action>Channel 2 Config->Pulse Value(16bit) = disable
	<action>Channel 2 Config->Idle State = disable
</dep>

<dep>
    <type>state
    <trigger>Channel 2 Config->Cap/Comp Enable = Capture Enable or Output Acitve
    <trigger>Channel 2 Config->Cap/Comp Select = Compare Output
    <action>Channel 2 Config->Capture Prescaler = disable
    <action>Channel 2 Config->Capture Source = disable
    <action>Channel 2 Config->Capture Filter(0-15) = disable
</dep>

<dep>
    <type>state
    <trigger>Channel 3 Config->Cap/Comp Enable = Capture Disable or Output Inacitve
    <action>Channel 3 Config->Cap/Comp Select = disable
    <action>Channel 3 Config->Capture Prescaler = disable
    <action>Channel 3 Config->Capture Selection = disable
	<action>Channel 3 Config->Capture Polarity = disable
    <action>Channel 3 Config->Capture Filter(0-15) = disable
    <action>Channel 3 Config->Forced Action = disable
    <action>Channel 3 Config->CCR Preload = disable
    <action>Channel 3 Config->Clear Output Ref = disable
	<action>Channel 3 Config->Compare Polarity = disable
    <action>Channel 3 Config->Output Mode = disable
    <action>Channel 3 Config->Pulse Value(16bit) = disable
	<action>Channel 3 Config->Idle State = disable
</dep>

<dep>
    <type>state
    <trigger>Channel 3 Config->Cap/Comp Enable = Capture Enable or Output Acitve
    <trigger>Channel 3 Config->Cap/Comp Select = Capture Input
    <action>Channel 3 Config->Forced Action = disable
    <action>Channel 3 Config->CCR Preload = disable
    <action>Channel 3 Config->Clear Output Ref = disable
	<action>Channel 3 Config->Compare Polarity = disable
    <action>Channel 3 Config->Output Mode = disable
    <action>Channel 3 Config->Pulse Value(16bit) = disable
	<action>Channel 3 Config->Idle State = disable
</dep>

<dep>
    <type>state
    <trigger>Channel 3 Config->Cap/Comp Enable = Capture Enable or Output Acitve
    <trigger>Channel 3 Config->Cap/Comp Select = Compare Output
    <action>Channel 3 Config->Capture Prescaler = disable
    <action>Channel 3 Config->Capture Source = disable
    <action>Channel 3 Config->Capture Filter(0-15) = disable
</dep>

<dep>
    <type>state
    <trigger>Channel 4 Config->Cap/Comp Enable = Capture Disable or Output Inacitve
    <action>Channel 4 Config->Cap/Comp Select = disable
    <action>Channel 4 Config->Capture Prescaler = disable
    <action>Channel 4 Config->Capture Selection = disable
	<action>Channel 4 Config->Capture Polarity = disable
    <action>Channel 4 Config->Capture Filter(0-15) = disable
    <action>Channel 4 Config->Forced Action = disable
    <action>Channel 4 Config->CCR Preload = disable
    <action>Channel 4 Config->Clear Output Ref = disable
	<action>Channel 4 Config->Compare Polarity = disable
    <action>Channel 4 Config->Output Mode = disable
    <action>Channel 4 Config->Pulse Value(16bit) = disable
	<action>Channel 4 Config->Idle State = disable
</dep>

<dep>
    <type>state
    <trigger>Channel 4 Config->Cap/Comp Enable = Capture Enable or Output Acitve
    <trigger>Channel 4 Config->Cap/Comp Select = Capture Input
    <action>Channel 4 Config->Forced Action = disable
    <action>Channel 4 Config->CCR Preload = disable
    <action>Channel 4 Config->Clear Output Ref = disable
	<action>Channel 4 Config->Compare Polarity = disable
    <action>Channel 4 Config->Output Mode = disable
    <action>Channel 4 Config->Pulse Value(16bit) = disable
	<action>Channel 4 Config->Idle State = disable
</dep>

<dep>
    <type>state
    <trigger>Channel 4 Config->Cap/Comp Enable = Capture Enable or Output Acitve
    <trigger>Channel 4 Config->Cap/Comp Select = Compare Output
    <action>Channel 4 Config->Capture Prescaler = disable
    <action>Channel 4 Config->Capture Source = disable
    <action>Channel 4 Config->Capture Filter(0-15) = disable
</dep>

<dep>
    <type>value
    <trigger>Channel 1 Config->Cap/Comp Enable = Capture Disable or Output Inacitve
    <action>CC Interrupt Config->CH1 Cap/Comp Int. = Disable
</dep>

<dep>
    <type>value
    <trigger>Channel 2 Config->Cap/Comp Enable = Capture Disable or Output Inacitve
    <action>CC Interrupt Config->CH2 Cap/Comp Int. = Disable
</dep>

<dep>
    <type>value
    <trigger>Channel 3 Config->Cap/Comp Enable = Capture Disable or Output Inacitve
    <action>CC Interrupt Config->CH3 Cap/Comp Int. = Disable
</dep>

<dep>
    <type>value
    <trigger>Channel 4 Config->Cap/Comp Enable = Capture Disable or Output Inacitve
    <action>CC Interrupt Config->CH4 Cap/Comp Int. = Disable
</dep>

********<<config wizard end>>**********/

/**************************************************************
 * TIM8 Initialization
**************************************************************/
#include "stm32f10x.h"
#include "stm32f10x_tim.h"
#include "stm32f10x_rcc.h"

#if(STRCMP($BRKInt$ ,ENABLE) == 1 || STRCMP($UPInt$ ,ENABLE) == 1 || STRCMP($TCInt$ ,0) == 0 || STRCMP($CCInt$ ,0) == 0)
/*******************************************************************************
 * Declare function prototype
*******************************************************************************/
#endif
#if(STRCMP($BRKInt$ ,ENABLE) == 1)
//PUT_A_NEW_LINE_HERE
void TIM8_BRK_IRQHandler(void);
#endif
#if(STRCMP($UPInt$ ,ENABLE) == 1)
//PUT_A_NEW_LINE_HERE
void TIM8_UP_IRQHandler(void);
#endif
#if(STRCMP($TCInt$ ,0) == 0)
//PUT_A_NEW_LINE_HERE
void TIM8_TRG_COM_IRQHandler(void);
#endif
#if(STRCMP($CCInt$ ,0) == 0)
//PUT_A_NEW_LINE_HERE
void TIM8_CC_IRQHandler(void);
#endif
//PUT_A_NEW_LINE_HERE
/******************************************************************************
 * TIM8 Initialization Code Template
******************************************************************************/
void TIM8_Init()
{
    TIM_TimeBaseInitTypeDef TIM_TimeBaseInitStruct;
    
    #if (((STRCMP($CH1CCSel$, CH1_Cap_Func) == 1) && (STRCMP($CH1CCEnable$, ENABLE) == 1)) || \
	((STRCMP($CH2CCSel$, CH2_Cap_Func) == 1) && (STRCMP($CH2CCEnable$, ENABLE) == 1)) || \
	((STRCMP($CH3CCSel$, CH3_Cap_Func) == 1) && (STRCMP($CH3CCEnable$, ENABLE) == 1)) || \
	((STRCMP($CH4CCSel$, CH4_Cap_Func) == 1) && (STRCMP($CH4CCEnable$, ENABLE) == 1)))
    TIM_ICInitTypeDef TIM_ICInitStruct;
    #endif
    #if (((STRCMP($CH1CCSel$, CH1_Comp_Func) == 1) && (STRCMP($CH1CCEnable$, ENABLE) == 1)) || \
	((STRCMP($CH2CCSel$, CH2_Comp_Func) == 1) && (STRCMP($CH2CCEnable$, ENABLE) == 1)) || \
	((STRCMP($CH3CCSel$, CH3_Comp_Func) == 1) && (STRCMP($CH3CCEnable$, ENABLE) == 1)) || \ 
	((STRCMP($CH4CCSel$, CH4_Comp_Func) == 1) && (STRCMP($CH4CCEnable$, ENABLE) == 1)))
    TIM_OCInitTypeDef TIM_OCInitStruct;
    #endif
    
    //PUT_A_NEW_LINE_HERE
    //
    // Enable peripheral clock of GPTM0
    //
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM8, ENABLE);  

    //PUT_A_NEW_LINE_HERE
    //
    // Time base configuration
    //
    TIM_TimeBaseStructInit(&TIM_TimeBaseInitStruct);
    TIM_TimeBaseInitStruct.TIM_Period = $counterPeriod$;
    TIM_TimeBaseInitStruct.TIM_Prescaler = $prescaler$;
    TIM_TimeBaseInitStruct.TIM_ClockDivision = $clockDivision$;
    TIM_TimeBaseInitStruct.TIM_CounterMode = $counterMode$;
    TIM_TimeBaseInitStruct->TIM_RepetitionCounter = $repetition$;
    TIM_TimeBaseInit(TIM8, &TIM_TimeBaseStructInit);
    
    #if (STRCMP($CH1CCEnable$, ENABLE) == 1)
    //PUT_A_NEW_LINE_HERE
    #if (STRCMP($CH1CCSel$, CH1_Cap_Func) == 1)
    //
    // TIM8 Channel 1 Input Configuration
    //
    TIM_ICStructInit(&TIM_ICInitStruct);
    TIM_ICInitStruct.TIM_Channel = TIM_Channel_1;
    TIM_ICInitStruct.TIM_ICPolarity = $CH1ICPol$;
    TIM_ICInitStruct.TIM_ICSelection = $CH1ICSel$;
    TIM_ICInitStruct.TIM_ICPrescaler = $CH1ICPSC$;
    TIM_ICInitStruct.TIM_ICFilter = $CH1ICFilter$;
    TIM_ICInit(TIM8, &TIM_ICInitStruct);
    #endif
    
    #if (STRCMP($CH1CCSel$, CH1_Comp_Func) ==1)
    //
    // TIM8 Channel 1 Output configuration
    //
    TIM_OCStructInit(&TIM_OCInitStruct);
    TIM_OCInitStruct.TIM_OCMode = $CH1OutputMode$;
    TIM_OCInitStruct.TIM_OutputState = TIM_OutputState_Enable;
    TIM_OCInitStruct.TIM_Pulse = $CH1PsValue$;
    TIM_OCInitStruct.TIM_OCPolarity = $CH1OCPol$;
    TIM_OCInitStruct.TIM_OCIdleState = $CH1IdleState$;
    TIM_OC1Init(TIM8, &TIM_OCInitStruct);
    TIM_ForcedOC1Config(TIM8, $CH1ForceAction$);
    #if (STRCMP($CH1CCRPreload$, ENABLE) == 1)
    TIM_OC1PreloadConfig(TIM8, TIM_OCPreload_Enable);
    #endif
    #if (STRCMP($CH1OREFClear$, ENABLE) == 1)
    TIM_ClearOC1Ref(TIM8, TIM_OCClear_Enable);
    #endif
    #endif
    
    #endif
        
    #if (STRCMP($CH2CCEnable$, ENABLE) == 1)
    //PUT_A_NEW_LINE_HERE
    #if (STRCMP($CH2CCSel$, CH2_Cap_Func) == 1)
    //
    // TIM8 Channel 2 Input Configuration
    //
    TIM_ICStructInit(&TIM_ICInitStruct);
    TIM_ICInitStruct.TIM_Channel = TIM_Channel_2;
    TIM_ICInitStruct.TIM_ICPolarity = $CH2ICPol$;
    TIM_ICInitStruct.TIM_ICSelection = $CH2ICSel$;
    TIM_ICInitStruct.TIM_ICPrescaler = $CH2ICPSC$;
    TIM_ICInitStruct.TIM_ICFilter = $CH2ICFilter$;
    TIM_ICInit(TIM8, &TIM_ICInitStruct);
    #endif
    
    #if (STRCMP($CH2CCSel$, CH2_Comp_Func) ==1)
    //
    // TIM8 Channel 2 Output configuration
    //
    TIM_OCStructInit(&TIM_OCInitStruct);
    TIM_OCInitStruct.TIM_OCMode = $CH2OutputMode$;
    TIM_OCInitStruct.TIM_OutputState = TIM_OutputState_Enable;
    TIM_OCInitStruct.TIM_Pulse = $CH2PsValue$;
    TIM_OCInitStruct.TIM_OCPolarity = $CH2OCPol$;
    TIM_OCInitStruct.TIM_OCIdleState = $CH2IdleState$;
    TIM_OC2Init(TIM8, &TIM_OCInitStruct);
    TIM_ForcedOC2Config(TIM8, $CH2ForceAction$);
    #if (STRCMP($CH2CCRPreload$, ENABLE) == 1)
    TIM_OC2PreloadConfig(TIM8, TIM_OCPreload_Enable);
    #endif
    #if (STRCMP($CH2OREFClear$, ENABLE) == 1)
    TIM_ClearOC2Ref(TIM8, TIM_OCClear_Enable);
    #endif
    #endif
    
    #endif
        
    #if (STRCMP($CH3CCEnable$, ENABLE) == 1)
    //PUT_A_NEW_LINE_HERE
    #if (STRCMP($CH3CCSel$, CH1_Cap_Func) == 1)
    //
    // TIM8 Channel 3 Input Configuration
    //
    TIM_ICStructInit(&TIM_ICInitStruct);
    TIM_ICInitStruct.TIM_Channel = TIM_Channel_3;
    TIM_ICInitStruct.TIM_ICPolarity = $CH3ICPol$;
    TIM_ICInitStruct.TIM_ICSelection = $CH3ICSel$;
    TIM_ICInitStruct.TIM_ICPrescaler = $CH3ICPSC$;
    TIM_ICInitStruct.TIM_ICFilter = $CH3ICFilter$;
    TIM_ICInit(TIM8, &TIM_ICInitStruct);
    #endif
    
    #if (STRCMP($CH3CCSel$, CH3_Comp_Func) ==1)
    //
    // TIM8 Channel 3 Output configuration
    //
    TIM_OCStructInit(&TIM_OCInitStruct);
    TIM_OCInitStruct.TIM_OCMode = $CH3OutputMode$;
    TIM_OCInitStruct.TIM_OutputState = TIM_OutputState_Enable;
    TIM_OCInitStruct.TIM_Pulse = $CH3PsValue$;
    TIM_OCInitStruct.TIM_OCPolarity = $CH3OCPol$;
    TIM_OCInitStruct.TIM_OCIdleState = $CH3IdleState$;
    TIM_OC3Init(TIM8, &TIM_OCInitStruct);
    TIM_ForcedOC3Config(TIM8, $CH3ForceAction$);
    #if (STRCMP($CH3CCRPreload$, ENABLE) == 1)
    TIM_OC3PreloadConfig(TIM8, TIM_OCPreload_Enable);
    #endif
    #if (STRCMP($CH3OREFClear$, ENABLE) == 1)
    TIM_ClearOC3Ref(TIM8, TIM_OCClear_Enable);
    #endif
    #endif
    
    #endif
        
    #if (STRCMP($CH4CCEnable$, ENABLE) == 1)
    //PUT_A_NEW_LINE_HERE
    #if (STRCMP($CH4CCSel$, CH4_Cap_Func) == 1)
    //
    // TIM8 Channel 4 Input Configuration
    //
    TIM_ICStructInit(&TIM_ICInitStruct);
    TIM_ICInitStruct.TIM_Channel = TIM_Channel_4;
    TIM_ICInitStruct.TIM_ICPolarity = $CH4ICPol$;
    TIM_ICInitStruct.TIM_ICSelection = $CH4ICSel$;
    TIM_ICInitStruct.TIM_ICPrescaler = $CH4ICPSC$;
    TIM_ICInitStruct.TIM_ICFilter = $CH4ICFilter$;
    TIM_ICInit(TIM8, &TIM_ICInitStruct);
    #endif
    
    #if (STRCMP($CH4CCSel$, CH4_Comp_Func) ==1)
    //
    // TIM8 Channel 4 Output configuration
    //
    TIM_OCStructInit(&TIM_OCInitStruct);
    TIM_OCInitStruct.TIM_OCMode = $CH4OutputMode$;
    TIM_OCInitStruct.TIM_OutputState = TIM_OutputState_Enable;
    TIM_OCInitStruct.TIM_Pulse = $CH4PsValue$;
    TIM_OCInitStruct.TIM_OCPolarity = $CH4OCPol$;
    TIM_OCInitStruct.TIM_OCIdleState = $CH4IdleState$;
    TIM_OC4Init(TIM8, &TIM_OCInitStruct);
    TIM_ForcedOC4Config(TIM8, $CH4ForceAction$);
    #if (STRCMP($CH4CCRPreload$, ENABLE) == 1)
    TIM_OC4PreloadConfig(TIM8, TIM_OCPreload_Enable);
    #endif
    #if (STRCMP($CH4OREFClear$, ENABLE) == 1)
    TIM_ClearOC4Ref(TIM8, TIM_OCClear_Enable);
    #endif
    #endif
    
    #endif
    
    #if (STRCMP($UEVDis$, ENABLE) == 1)
    //PUT_A_NEW_LINE_HERE
    //
    // Enable the Update event
    //
    TIM_UpdateDisableConfig(TIM8, DISABLE);
    TIM_UpdateRequestConfig(TIM8, $requestIntSrc$);
    #endif
    
    #if ((STRCMP($extTriEnable$, ENABLE) == 1) && (STRCMP($extClkEnable$, ENABLE) == 1))
	#if (STRCMP($extClkMode$, MODE1) == 1)
    //PUT_A_NEW_LINE_HERE
    //
    // ETR clock Mode1 Config
    //
	TIM_ETRClockMode1Config(TIM8, $exTriPSCSet$, $exTriPolSet$, $exTriFilterSet$);
    #endif
    #if (STRCMP($extClkMode$, MODE2) == 1)
    //PUT_A_NEW_LINE_HERE
    //
    // ETR clock Mode2 Config
    //
	TIM_ETRClockMode2Config(TIM8, $exTriPSCSet$, $exTriPolSet$, $exTriFilterSet$);
    #endif
	#endif
	
	#if ((STRCMP($intTriEnable$, ENABLE) == 1) && (STRCMP($extClkEnable$, ENABLE) == 1))
    //PUT_A_NEW_LINE_HERE
    //
    // ITR clock Config
    //
    TIM_ITRxExternalClockConfig(TIM8, $intTriSrc$);
	#endif
	
    #if (STRCMP($MMEnable$, ENABLE) == 1)
    //PUT_A_NEW_LINE_HERE
    //
    // Master Mode selection
    //
    TIM_SelectMasterSlaveMode(TIM8, TIM_MasterSlaveMode_Enable);
    #endif    
    
    #if (STRCMP($SMEnable$, ENABLE) == 1)
    //PUT_A_NEW_LINE_HERE
    //
    // Slave Mode selection
    //
    TIM_SelectSlaveMode(TIM8, $SMSel$);
    #endif
    
    #if (STRCMP($HSEnable$, ENABLE) == 1)
    //PUT_A_NEW_LINE_HERE
    //
    // Enable Hall Sensor Interface
    //
    TIM_SelectHallSensor(TIM8, ENABLE);
    #endif
    
    #if (STRCMP($SPMEnable$, ENABLE) == 1)
    //PUT_A_NEW_LINE_HERE
    //
    // Single Pulse Mode selection
    //
    TIM_SelectOnePulseMode(TIM8, $SPMSet$);
	#endif
	
	#if (STRCMP($TOMEnable$, ENABLE) == 1)
    //PUT_A_NEW_LINE_HERE
    //
    // Trigger Output Mode selection
    //
    TIM_SelectOutputTrigger(TIM8, $TOMSrc$);
	#endif
    
    //PUT_A_NEW_LINE_HERE
    //
    // Enable GPTM0 
    //
    TIM_Cmd(TIM8, ENABLE);

    
    #if(STRCMP($BRKInt$, ENABLE) == 1)
    //PUT_A_NEW_LINE_HERE
    //
    // Enable BRK Interrupt
    //
    NVIC_EnableIRQ(TIM8_BRK_IRQn);
    TIM_ITConfig(TIM8, TIM_IT_Break, ENABLE);
    #endif
	
	#if(STRCMP($UPInt$, ENABLE) == 1)
    //PUT_A_NEW_LINE_HERE
    //
    // Enable UP Interrupt
    //
    NVIC_EnableIRQ(TIM8_UP_IRQn);
    TIM_ITConfig(TIM8, TIM_IT_Update, ENABLE);
    #endif
	
	#if(STRCMP($TCInt$, 0) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Enable TRG/COM Interrupt
    //
    NVIC_EnableIRQ(TIM8_TRG_COM_IRQn);
    TIM_ITConfig(TIM8, $TCInt$, ENABLE);
    #endif
	
	#if(STRCMP($CCInt$, 0) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Enable CC Interrupt
    //
    NVIC_EnableIRQ(TIM8_CC_IRQn);
    TIM_ITConfig(TIM8, $CCInt$, ENABLE);
    #endif
}

#if (STRCMP($BRKInt$, ENABLE) == 1)
//PUT_A_NEW_LINE_HERE
/*TIM8_BRK IRQ Handler*/    
void TIM8_BRK_IRQHandler(void)
{
    /*Add your code here*/
}
#endif

#if (STRCMP($UPInt$, ENABLE) == 1)
//PUT_A_NEW_LINE_HERE
/*TIM8_UP IRQ Handler*/    
void TIM8_UP_IRQHandler(void)
{
    /*Add your code here*/
}
#endif

#if (STRCMP($TCInt$, 0) == 0)
//PUT_A_NEW_LINE_HERE
/*TIM8_TRG_COM IRQ Handler*/    
void TIM8_TRG_COM_IRQHandler(void)
{
    /*Add your code here*/
}
#endif

#if (STRCMP($CCInt$, 0) == 0)
//PUT_A_NEW_LINE_HERE
/*TIM8_CC IRQ Handler*/    
void TIM8_CC_IRQHandler(void)
{
    /*Add your code here*/
}
#endif
//PUT_A_NEW_LINE_HERE