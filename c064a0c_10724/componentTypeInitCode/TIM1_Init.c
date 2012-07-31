/***********************<<config wizard begin>>********************************
<group>Peripheral
    <list>Peripheral Name
        <TIM1=>TIM1
    <code>$tim1$
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
    <code>$upEVDis$
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
    <code>$mmEnable$
    <list>Slave Mode
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$smEnable$
    <list>Slave Mode Set
        <TIM_SlaveMode_Reset=>Reset
        <TIM_SlaveMode_Gated=>Gated
        <TIM_SlaveMode_Trigger=>Trigger
        <TIM_SlaveMode_External1=>External1
    <code>$smSel$
    <list>Hall Sensor Interface
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$hsiEnable$
    <list>Single Pulse Mode
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$spmEnable$
	<list>Single Pulse Mode Set
        <TIM_OPMode_Single=>Single
        <TIM_OPMode_Repetitive=>Repetitive
    <code>$spmSet$
    <list>Trigger Output Mode
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$tomEnable$
	<list>Trigger Output Source
        <TIM_TRGOSource_Reset=>Reset
        <TIM_TRGOSource_Enable=>Enable
		<TIM_TRGOSource_Update=>Update
        <TIM_TRGOSource_OC1=>OC1
		<TIM_TRGOSource_OC1Ref=>OC1Ref
        <TIM_TRGOSource_OC2Ref=>OC2Ref
		<TIM_TRGOSource_OC3Ref=>OC3Ref
		<TIM_TRGOSource_OC4Ref=>OC4Ref
    <code>$tomSrc$
	<list>Encoder Interface Mode
        <DISABLE=>Disable
        <ENABLE=>Enable
	<code>$eimEnable$
    <list>Encoder Mode Set
        <TIM_EncoderMode_TI1=>TI1
        <TIM_EncoderMode_TI2=>TI2
        <TIM_EncoderMode_TI12=>TI12
    <code>$eimSet$
    <list>Encoder IC1 Polarity
        <TIM_ICPolarity_Falling=>Falling
        <TIM_ICPolarity_Rising=>Rising
    <code>$encodeIC1Polar$
    <list>Encoder IC2 Polarity
        <TIM_ICPolarity_Falling=>Falling
        <TIM_ICPolarity_Rising=>Rising
    <code>$encodeIC2Polar$	
</group>

<group>Channel 1 Config
    <list>Cap/Comp Enable
        <DISABLE=>Capture Disable or Output Inacitve
        <ENABLE=>Capture Enable or Output Acitve
    <code>$ch1CCEnable$
    <list>Cap/Comp Select
        <CH1_Cap_Func=>Capture Input
        <CH1_Comp_Func=>Compare Output
    <code>$ch1CCSel$
    <list>Capture Prescaler
        <TIM_ICPSC_DIV1=>OFF
        <TIM_ICPSC_DIV2=>Done Once Every 2 Events
        <TIM_ICPSC_DIV4=>Done Once Every 4 Events
        <TIM_ICPSC_DIV8=>Done Once Every 8 Events
    <code>$ch1ICPSC$
    <list>Capture Selection
        <TIM_ICSelection_DirectTI=>DIRECT
        <TIM_ICSelection_IndirectTI=>INDIRECT
        <TIM_ICSelection_TRC=>TRCED
    <code>$ch1ICSel$
	<list>Capture Polarity
	    <TIM_ICPolarity_Rising=>Rising
		<TIM_ICPolarity_Falling=>Falling
	<code>$ch1ICPol$	
    <input=integer[0-15]>Capture Filter(0-15)
    <code>$ch1ICFilter$
    <list>Forced Action
        <TIM_ForcedAction_Active=>Active
        <TIM_ForcedAction_InActive=>InActive
    <code>$ch1ForceAction$
    <list>CCR Preload
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$ch1CCRPreload$
    <list>Clear Output Ref
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$ch1OREFClear$
	<list>Compare Polarity
	    <TIM_OCPolarity_High=>High
		<TIM_OCPolarity_Low=>Low
	<code>$ch1OCPol$
    <list>Output Mode
        <TIM_OCMode_Timing=>Timing
        <TIM_OCMode_Inactive=>Match Output 0
        <TIM_OCMode_Active=>Match Output 1
        <TIM_OCMode_Toggle=>Match Output Toggle
        <TIM_ForcedAction_InActive=>Forced to 0
        <TIM_ForcedAction_Active=>Forced to 1
        <TIM_OCMode_PWM1=>PWM1
        <TIM_OCMode_PWM2=>PWM2
    <code>$ch1OutputMode$
    <input=integer[0-65535]>Pulse Value(16bit)
    <code>$ch1PsValue$
	<list>Idle State
	    <TIM_OCIdleState_Set=>Set
		<TIM_OCIdleState_Reset=>Reset
	<code>$ch1IdleState$	
</group>

<group>Channel 2 Config
    <list>Cap/Comp Enable
        <DISABLE=>Capture Disable or Output Inacitve
        <ENABLE=>Capture Enable or Output Acitve
    <code>$ch2CCEnable$
    <list>Cap/Comp Select
        <CH2_Cap_Func=>Capture Input
        <CH2_Comp_Func=>Compare Output
    <code>$ch2CCSel$
    <list>Capture Prescaler
        <TIM_ICPSC_DIV1=>OFF
        <TIM_ICPSC_DIV2=>Done Once Every 2 Events
        <TIM_ICPSC_DIV4=>Done Once Every 4 Events
        <TIM_ICPSC_DIV8=>Done Once Every 8 Events
    <code>$ch2ICPSC$
    <list>Capture Selection
        <TIM_ICSelection_DirectTI=>DIRECT
        <TIM_ICSelection_IndirectTI=>INDIRECT
        <TIM_ICSelection_TRC=>TRCED
    <code>$ch2ICSel$
	<list>Capture Polarity
	    <TIM_ICPolarity_Rising=>Rising
		<TIM_ICPolarity_Falling=>Falling
	<code>$ch2ICPol$	
    <input=integer[0-15]>Capture Filter(0-15)
    <code>$ch2ICFilter$
    <list>Forced Action
        <TIM_ForcedAction_Active=>Active
        <TIM_ForcedAction_InActive=>InActive
    <code>$ch2ForceAction$
    <list>CCR Preload
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$ch2CCRPreload$
    <list>Clear Output Ref
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$ch2OREFClear$
	<list>Compare Polarity
	    <TIM_OCPolarity_High=>High
		<TIM_OCPolarity_Low=>Low
	<code>$ch2OCPol$
    <list>Output Mode
        <TIM_OCMode_Timing=>Timing
        <TIM_OCMode_Inactive=>Match Output 0
        <TIM_OCMode_Active=>Match Output 1
        <TIM_OCMode_Toggle=>Match Output Toggle
        <TIM_ForcedAction_InActive=>Forced to 0
        <TIM_ForcedAction_Active=>Forced to 1
        <TIM_OCMode_PWM1=>PWM1
        <TIM_OCMode_PWM2=>PWM2
    <code>$ch2OutputMode$
    <input=integer[0-65535]>Pulse Value(16bit)
    <code>$ch2PsValue$
	<list>Idle State
	    <TIM_OCIdleState_Set=>Set
		<TIM_OCIdleState_Reset=>Reset
	<code>$ch2IdleState$
</group>

<group>Channel 3 Config
    <list>Cap/Comp Enable
        <DISABLE=>Capture Disable or Output Inacitve
        <ENABLE=>Capture Enable or Output Acitve
    <code>$ch3CCEnable$
    <list>Cap/Comp Select
        <CH3_Cap_Func=>Capture Input
        <CH3_Comp_Func=>Compare Output
    <code>$ch3CCSel$
    <list>Capture Prescaler
        <TIM_ICPSC_DIV1=>OFF
        <TIM_ICPSC_DIV2=>Done Once Every 2 Events
        <TIM_ICPSC_DIV4=>Done Once Every 4 Events
        <TIM_ICPSC_DIV8=>Done Once Every 8 Events
    <code>$ch3ICPSC$
    <list>Capture Selection
        <TIM_ICSelection_DirectTI=>DIRECT
        <TIM_ICSelection_IndirectTI=>INDIRECT
        <TIM_ICSelection_TRC=>TRCED
    <code>$ch3ICSel$
	<list>Capture Polarity
	    <TIM_ICPolarity_Rising=>Rising
		<TIM_ICPolarity_Falling=>Falling
	<code>$ch3ICPol$	
    <input=integer[0-15]>Capture Filter(0-15)
    <code>$ch3ICFilter$
    <list>Forced Action
        <TIM_ForcedAction_Active=>Active
        <TIM_ForcedAction_InActive=>InActive
    <code>$ch3ForceAction$
    <list>CCR Preload
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$ch3CCRPreload$
    <list>Clear Output Ref
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$ch3OREFClear$
	<list>Compare Polarity
	    <TIM_OCPolarity_High=>High
		<TIM_OCPolarity_Low=>Low
	<code>$ch3OCPol$
    <list>Output Mode
        <TIM_OCMode_Timing=>Timing
        <TIM_OCMode_Inactive=>Match Output 0
        <TIM_OCMode_Active=>Match Output 1
        <TIM_OCMode_Toggle=>Match Output Toggle
        <TIM_ForcedAction_InActive=>Forced to 0
        <TIM_ForcedAction_Active=>Forced to 1
        <TIM_OCMode_PWM1=>PWM1
        <TIM_OCMode_PWM2=>PWM2
    <code>$ch3OutputMode$
    <input=integer[0-65535]>Pulse Value(16bit)
    <code>$ch3PsValue$
	<list>Idle State
	    <TIM_OCIdleState_Set=>Set
		<TIM_OCIdleState_Reset=>Reset
	<code>$ch3IdleState$
</group>

<group>Channel 4 Config
    <list>Cap/Comp Enable
        <DISABLE=>Capture Disable or Output Inacitve
        <ENABLE=>Capture Enable or Output Acitve
    <code>$ch4CCEnable$
    <list>Cap/Comp Select
        <CH4_Cap_Func=>Capture Input
        <CH4_Comp_Func=>Compare Output
    <code>$ch4CCSel$
    <list>Capture Prescaler
        <TIM_ICPSC_DIV1=>OFF
        <TIM_ICPSC_DIV2=>Done Once Every 2 Events
        <TIM_ICPSC_DIV4=>Done Once Every 4 Events
        <TIM_ICPSC_DIV8=>Done Once Every 8 Events
    <code>$ch4ICPSC$
    <list>Capture Selection
        <TIM_ICSelection_DirectTI=>DIRECT
        <TIM_ICSelection_IndirectTI=>INDIRECT
        <TIM_ICSelection_TRC=>TRCED
    <code>$ch4ICSel$
	<list>Capture Polarity
	    <TIM_ICPolarity_Rising=>Rising
		<TIM_ICPolarity_Falling=>Falling
	<code>$ch4ICPol$	
    <input=integer[0-15]>Capture Filter(0-15)
    <code>$ch4ICFilter$
    <list>Forced Action
        <TIM_ForcedAction_Active=>Active
        <TIM_ForcedAction_InActive=>InActive
    <code>$ch4ForceAction$
    <list>CCR Preload
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$ch4CCRPreload$
    <list>Clear Output Ref
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$ch4OREFClear$
	<list>Compare Polarity
	    <TIM_OCPolarity_High=>High
		<TIM_OCPolarity_Low=>Low
	<code>$ch4OCPol$
    <list>Output Mode
        <TIM_OCMode_Timing=>Timing
        <TIM_OCMode_Inactive=>Match Output 0
        <TIM_OCMode_Active=>Match Output 1
        <TIM_OCMode_Toggle=>Match Output Toggle
        <TIM_ForcedAction_InActive=>Forced to 0
        <TIM_ForcedAction_Active=>Forced to 1
        <TIM_OCMode_PWM1=>PWM1
        <TIM_OCMode_PWM2=>PWM2
    <code>$ch4OutputMode$
    <input=integer[0-65535]>Pulse Value(16bit)
    <code>$ch4PsValue$
	<list>Idle State
	    <TIM_OCIdleState_Set=>Set
		<TIM_OCIdleState_Reset=>Reset
	<code>$ch4IdleState$
</group>

<group>BRK Interrupt Config
    <list>Break Event Int. 
        <DISABLE=>Disable
        <ENABLE=>Enable
	<code>$brkInt$
</group>

<group>UP Interrupt Config	
    <list>Update Event Int. 
        <DISABLE=>Disable
        <ENABLE=>Enable
	<code>$upInt$
</group>

<group=or>TRG/COM Interrupt Config
    <list>Trigger Event Int. 
        <0=>Disable
        <TIM_IT_Trigger=>Enable
	<list>Commutation Event Int. 
        <0=>Disable
        <TIM_IT_COM=>Enable
	<code>$tcInt$
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
    <code>$ccInt$
</group>

<group=pin>Pin used
    <list>TIM1_ETR
	    <TIM1_ETR=>Enable
        <DISABLE=>Disable
	<code>$NOCODE$
	<list>TIM1_BKIN
		<TIM1_BKIN_0=>Enable
		<DISABLE=>Disable
    <code>$NOCODE$	
	<list>TIM1_CH1
        <DISABLE=>Disable
        <TIM1_CH1=>Enable
    <code>$NOCODE$
	<list>TIM1_CH2
        <DISABLE=>Disable
        <TIM1_CH2=>Enable
    <code>$NOCODE$
	<list>TIM1_CH3
        <DISABLE=>Disable
        <TIM1_CH3=>Enable
    <code>$NOCODE$
	<list>TIM1_CH4
        <DISABLE=>Disable
        <TIM1_CH4=>Enable
    <code>$NOCODE$	
	<list>TIM1_CH1N
        <DISABLE=>Disable
        <TIM1_CH1N_0=>Enable
    <code>$NOCODE$
	<list>TIM1_CH2N
        <DISABLE=>Disable
        <TIM1_CH1N_0=>Enable
    <code>$NOCODE$
	<list>TIM1_CH3N
        <DISABLE=>Disable
        <TIM1_CH3N_0=>Enable
    <code>$NOCODE$
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
    <trigger>Mode Set->Encoder Interface Mode = Disable
    <action>Mode Set->Encoder Mode Set = disable
	<action>Mode Set->Encoder IC1 Polarity = disable
	<action>Mode Set->Encoder IC2 Polarity = disable
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
    <action>Channel 1 Config->Capture Selection = disable
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
    <action>Channel 2 Config->Capture Selection = disable
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
    <action>Channel 3 Config->Capture Selection = disable
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
    <action>Channel 4 Config->Capture Selection = disable
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

<dep>
    <type>value
    <trigger>Channel 1 Config->Cap/Comp Enable = Capture Enable or Output Acitve
    <action>Pin used->TIM1_CH1 = Enable
	<action>Pin used->TIM1_CH1N = Enable
</dep>

<dep>
    <type>value
    <trigger>Channel 2 Config->Cap/Comp Enable = Capture Enable or Output Acitve
    <action>Pin used->TIM1_CH2 = Enable
	<action>Pin used->TIM1_CH2N = Enable
</dep>

<dep>
    <type>value
    <trigger>Channel 3 Config->Cap/Comp Enable = Capture Enable or Output Acitve
    <action>Pin used->TIM1_CH3 = Enable
	<action>Pin used->TIM1_CH3N = Enable
</dep>

<dep>
    <type>value
    <trigger>Channel 4 Config->Cap/Comp Enable = Capture Enable or Output Acitve
    <action>Pin used->TIM1_CH4 = Enable
	<action>Pin used->TIM1_CH4N = Enable
</dep>

********<<config wizard end>>**********/

#include "stm32f10x.h"
#include "stm32f10x_tim.h"
#include "stm32f10x_rcc.h"

#if(STRCMP($brkInt$ ,ENABLE) == 1 || STRCMP($upInt$ ,ENABLE) == 1 || STRCMP($tcInt$ ,0) == 0 || STRCMP($ccInt$ ,0) == 0)
#include "misc.h"
/*******************************************************************************
 * Declare function prototype
*******************************************************************************/
#endif
#if(STRCMP($brkInt$ ,ENABLE) == 1)
//PUT_A_NEW_LINE_HERE
void TIM1_BRK_IRQHandler(void);
#endif
#if(STRCMP($upInt$ ,ENABLE) == 1)
//PUT_A_NEW_LINE_HERE
void TIM1_UP_IRQHandler(void);
#endif
#if(STRCMP($tcInt$ ,0) == 0)
//PUT_A_NEW_LINE_HERE
void TIM1_TRG_COM_IRQHandler(void);
#endif
#if(STRCMP($ccInt$ ,0) == 0)
//PUT_A_NEW_LINE_HERE
void TIM1_CC_IRQHandler(void);
#endif
//PUT_A_NEW_LINE_HERE
/******************************************************************************
 * TIM1 Initialization Code Template
******************************************************************************/
void TIM1_Init()
{
    TIM_TimeBaseInitTypeDef TIM_TimeBaseInitStruct;
    
    #if (((STRCMP($ch1CCSel$, CH1_Cap_Func) == 1) && (STRCMP($ch1CCEnable$, ENABLE) == 1)) || \
	((STRCMP($ch2CCSel$, CH2_Cap_Func) == 1) && (STRCMP($ch2CCEnable$, ENABLE) == 1)) || \
	((STRCMP($ch3CCSel$, CH3_Cap_Func) == 1) && (STRCMP($ch3CCEnable$, ENABLE) == 1)) || \
	((STRCMP($ch4CCSel$, CH4_Cap_Func) == 1) && (STRCMP($ch4CCEnable$, ENABLE) == 1)))
    TIM_ICInitTypeDef TIM_ICInitStruct;
    #endif
    #if (((STRCMP($ch1CCSel$, CH1_Comp_Func) == 1) && (STRCMP($ch1CCEnable$, ENABLE) == 1)) || \
	((STRCMP($ch2CCSel$, CH2_Comp_Func) == 1) && (STRCMP($ch2CCEnable$, ENABLE) == 1)) || \
	((STRCMP($ch3CCSel$, CH3_Comp_Func) == 1) && (STRCMP($ch3CCEnable$, ENABLE) == 1)) || \ 
	((STRCMP($ch4CCSel$, CH4_Comp_Func) == 1) && (STRCMP($ch4CCEnable$, ENABLE) == 1)))
    TIM_OCInitTypeDef TIM_OCInitStruct;
    #endif
  
    #if(STRCMP($brkInt$ ,ENABLE) == 1 || STRCMP($upInt$ ,ENABLE) == 1 || STRCMP($tcInt$ ,0) == 0 || STRCMP($ccInt$ ,0) == 0) 
    NVIC_InitTypeDef NVIC_InitStructure;
	#endif
	
    //PUT_A_NEW_LINE_HERE
    //
    // Enable peripheral clock of TIM1
    //
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM1, ENABLE);  

    //PUT_A_NEW_LINE_HERE
    //
    // Time base configuration
    //
    TIM_TimeBaseStructInit(&TIM_TimeBaseInitStruct);
    TIM_TimeBaseInitStruct.TIM_Period = $counterPeriod$;
    TIM_TimeBaseInitStruct.TIM_Prescaler = $prescaler$;
    TIM_TimeBaseInitStruct.TIM_ClockDivision = $clockDivision$;
    TIM_TimeBaseInitStruct.TIM_CounterMode = $counterMode$;
    TIM_TimeBaseInitStruct.TIM_RepetitionCounter = $repetition$;
    TIM_TimeBaseInit(TIM1, &TIM_TimeBaseInitStruct);
    
    #if (STRCMP($ch1CCEnable$, ENABLE) == 1)
    //PUT_A_NEW_LINE_HERE
    #if (STRCMP($ch1CCSel$, CH1_Cap_Func) == 1)
    //
    // TIM1 Channel 1 Input Configuration
    //
    TIM_ICStructInit(&TIM_ICInitStruct);
    TIM_ICInitStruct.TIM_Channel = TIM_Channel_1;
    TIM_ICInitStruct.TIM_ICPolarity = $ch1ICPol$;
    TIM_ICInitStruct.TIM_ICSelection = $ch1ICSel$;
    TIM_ICInitStruct.TIM_ICPrescaler = $ch1ICPSC$;
    TIM_ICInitStruct.TIM_ICFilter = $ch1ICFilter$;
    TIM_ICInit(TIM1, &TIM_ICInitStruct);
    #endif
    
    #if (STRCMP($ch1CCSel$, CH1_Comp_Func) ==1)
    //
    // TIM1 Channel 1 Output configuration
    //
    TIM_OCStructInit(&TIM_OCInitStruct);
    TIM_OCInitStruct.TIM_OCMode = $ch1OutputMode$;
    TIM_OCInitStruct.TIM_OutputState = TIM_OutputState_Enable;
    TIM_OCInitStruct.TIM_Pulse = $ch1PsValue$;
    TIM_OCInitStruct.TIM_OCPolarity = $ch1OCPol$;
    TIM_OCInitStruct.TIM_OCIdleState = $ch1IdleState$;
    TIM_OC1Init(TIM1, &TIM_OCInitStruct);
    TIM_ForcedOC1Config(TIM1, $ch1ForceAction$);
    #if (STRCMP($ch1CCRPreload$, ENABLE) == 1)
    TIM_OC1PreloadConfig(TIM1, TIM_OCPreload_Enable);
    #endif
    #if (STRCMP($ch1OREFClear$, ENABLE) == 1)
    TIM_ClearOC1Ref(TIM1, TIM_OCClear_Enable);
    #endif
    #endif
    
    #endif
        
    #if (STRCMP($ch2CCEnable$, ENABLE) == 1)
    //PUT_A_NEW_LINE_HERE
    #if (STRCMP($ch2CCSel$, CH2_Cap_Func) == 1)
    //
    // TIM1 Channel 2 Input Configuration
    //
    TIM_ICStructInit(&TIM_ICInitStruct);
    TIM_ICInitStruct.TIM_Channel = TIM_Channel_2;
    TIM_ICInitStruct.TIM_ICPolarity = $ch2ICPol$;
    TIM_ICInitStruct.TIM_ICSelection = $ch2ICSel$;
    TIM_ICInitStruct.TIM_ICPrescaler = $ch2ICPSC$;
    TIM_ICInitStruct.TIM_ICFilter = $ch2ICFilter$;
    TIM_ICInit(TIM1, &TIM_ICInitStruct);
    #endif
    
    #if (STRCMP($ch2CCSel$, CH2_Comp_Func) ==1)
    //
    // TIM1 Channel 2 Output configuration
    //
    TIM_OCStructInit(&TIM_OCInitStruct);
    TIM_OCInitStruct.TIM_OCMode = $ch2OutputMode$;
    TIM_OCInitStruct.TIM_OutputState = TIM_OutputState_Enable;
    TIM_OCInitStruct.TIM_Pulse = $ch2PsValue$;
    TIM_OCInitStruct.TIM_OCPolarity = $ch2OCPol$;
    TIM_OCInitStruct.TIM_OCIdleState = $ch2IdleState$;
    TIM_OC2Init(TIM1, &TIM_OCInitStruct);
    TIM_ForcedOC2Config(TIM1, $ch2ForceAction$);
    #if (STRCMP($ch2CCRPreload$, ENABLE) == 1)
    TIM_OC2PreloadConfig(TIM1, TIM_OCPreload_Enable);
    #endif
    #if (STRCMP($ch2OREFClear$, ENABLE) == 1)
    TIM_ClearOC2Ref(TIM1, TIM_OCClear_Enable);
    #endif
    #endif
    
    #endif
        
    #if (STRCMP($ch3CCEnable$, ENABLE) == 1)
    //PUT_A_NEW_LINE_HERE
    #if (STRCMP($ch3CCSel$, CH3_Cap_Func) == 1)
    //
    // TIM1 Channel 3 Input Configuration
    //
    TIM_ICStructInit(&TIM_ICInitStruct);
    TIM_ICInitStruct.TIM_Channel = TIM_Channel_3;
    TIM_ICInitStruct.TIM_ICPolarity = $ch3ICPol$;
    TIM_ICInitStruct.TIM_ICSelection = $ch3ICSel$;
    TIM_ICInitStruct.TIM_ICPrescaler = $ch3ICPSC$;
    TIM_ICInitStruct.TIM_ICFilter = $ch3ICFilter$;
    TIM_ICInit(TIM1, &TIM_ICInitStruct);
    #endif
    
    #if (STRCMP($ch3CCSel$, CH3_Comp_Func) ==1)
    //
    // TIM1 Channel 3 Output configuration
    //
    TIM_OCStructInit(&TIM_OCInitStruct);
    TIM_OCInitStruct.TIM_OCMode = $ch3OutputMode$;
    TIM_OCInitStruct.TIM_OutputState = TIM_OutputState_Enable;
    TIM_OCInitStruct.TIM_Pulse = $ch3PsValue$;
    TIM_OCInitStruct.TIM_OCPolarity = $ch3OCPol$;
    TIM_OCInitStruct.TIM_OCIdleState = $ch3IdleState$;
    TIM_OC3Init(TIM1, &TIM_OCInitStruct);
    TIM_ForcedOC3Config(TIM1, $ch3ForceAction$);
    #if (STRCMP($ch3CCRPreload$, ENABLE) == 1)
    TIM_OC3PreloadConfig(TIM1, TIM_OCPreload_Enable);
    #endif
    #if (STRCMP($ch3OREFClear$, ENABLE) == 1)
    TIM_ClearOC3Ref(TIM1, TIM_OCClear_Enable);
    #endif
    #endif
    
    #endif
        
    #if (STRCMP($ch4CCEnable$, ENABLE) == 1)
    //PUT_A_NEW_LINE_HERE
    #if (STRCMP($ch4CCSel$, CH4_Cap_Func) == 1)
    //
    // TIM1 Channel 4 Input Configuration
    //
    TIM_ICStructInit(&TIM_ICInitStruct);
    TIM_ICInitStruct.TIM_Channel = TIM_Channel_4;
    TIM_ICInitStruct.TIM_ICPolarity = $ch4ICPol$;
    TIM_ICInitStruct.TIM_ICSelection = $ch4ICSel$;
    TIM_ICInitStruct.TIM_ICPrescaler = $ch4ICPSC$;
    TIM_ICInitStruct.TIM_ICFilter = $ch4ICFilter$;
    TIM_ICInit(TIM1, &TIM_ICInitStruct);
    #endif
    
    #if (STRCMP($ch4CCSel$, CH4_Comp_Func) ==1)
    //
    // TIM1 Channel 4 Output configuration
    //
    TIM_OCStructInit(&TIM_OCInitStruct);
    TIM_OCInitStruct.TIM_OCMode = $ch4OutputMode$;
    TIM_OCInitStruct.TIM_OutputState = TIM_OutputState_Enable;
    TIM_OCInitStruct.TIM_Pulse = $ch4PsValue$;
    TIM_OCInitStruct.TIM_OCPolarity = $ch4OCPol$;
    TIM_OCInitStruct.TIM_OCIdleState = $ch4IdleState$;
    TIM_OC4Init(TIM1, &TIM_OCInitStruct);
    TIM_ForcedOC4Config(TIM1, $ch4ForceAction$);
    #if (STRCMP($ch4CCRPreload$, ENABLE) == 1)
    TIM_OC4PreloadConfig(TIM1, TIM_OCPreload_Enable);
    #endif
    #if (STRCMP($ch4OREFClear$, ENABLE) == 1)
    TIM_ClearOC4Ref(TIM1, TIM_OCClear_Enable);
    #endif
    #endif
    
    #endif
    
    #if (STRCMP($upEVDis$, ENABLE) == 1)
    //PUT_A_NEW_LINE_HERE
    //
    // Enable the Update event
    //
    TIM_UpdateDisableConfig(TIM1, DISABLE);
    TIM_UpdateRequestConfig(TIM1, $requestIntSrc$);
    #endif
    
    #if ((STRCMP($extTriEnable$, ENABLE) == 1) && (STRCMP($extClkEnable$, ENABLE) == 1))
	#if (STRCMP($extClkMode$, MODE1) == 1)
    //PUT_A_NEW_LINE_HERE
    //
    // ETR clock Mode1 Config
    //
    TIM_ETRClockMode1Config(TIM1, $exTriPSCSet$, $exTriPolSet$, $exTriFilterSet$);
    #endif
    #if (STRCMP($extClkMode$, MODE2) == 1)
    //PUT_A_NEW_LINE_HERE
    //
    // ETR clock Mode2 Config
    //
    TIM_ETRClockMode2Config(TIM1, $exTriPSCSet$, $exTriPolSet$, $exTriFilterSet$);
    #endif
	#endif
	
	#if ((STRCMP($intTriEnable$, ENABLE) == 1) && (STRCMP($extClkEnable$, ENABLE) == 1))
    //PUT_A_NEW_LINE_HERE
    //
    // ITR clock Config
    //
    TIM_ITRxExternalClockConfig(TIM1, $intTriSrc$);
	#endif
	
    #if (STRCMP($mmEnable$, ENABLE) == 1)
    //PUT_A_NEW_LINE_HERE
    //
    // Master Mode selection
    //
    TIM_SelectMasterSlaveMode(TIM1, TIM_MasterSlaveMode_Enable);
    #endif    
    
    #if (STRCMP($smEnable$, ENABLE) == 1)
    //PUT_A_NEW_LINE_HERE
    //
    // Slave Mode selection
    //
    TIM_SelectSlaveMode(TIM1, $smSel$);
    #endif
    
    #if (STRCMP($hsiEnable$, ENABLE) == 1)
    //PUT_A_NEW_LINE_HERE
    //
    // Enable Hall Sensor Interface
    //
    TIM_SelectHallSensor(TIM1, ENABLE);
    #endif
    
    #if (STRCMP($spmEnable$, ENABLE) == 1)
    //PUT_A_NEW_LINE_HERE
    //
    // Single Pulse Mode selection
    //
    TIM_SelectOnePulseMode(TIM1, $spmSet$);
	#endif
	
	#if (STRCMP($tomEnable$, ENABLE) == 1)
    //PUT_A_NEW_LINE_HERE
    //
    // Trigger Output Mode selection
    //
    TIM_SelectOutputTrigger(TIM1, $tomSrc$);
	#endif
    
    #if (STRCMP($eimEnable$, ENABLE) == 1)
    //PUT_A_NEW_LINE_HERE
    //
    // Encoder Interface Mode selection
    //
    TIM_EncoderInterfaceConfig(TIM1, $eimSet$,
                                $encodeIC1Polar$, $encodeIC2Polar$);
	#endif
	
    //PUT_A_NEW_LINE_HERE
    //
    // Enable TIM1 
    //
    TIM_Cmd(TIM1, ENABLE);

    
    #if(STRCMP($brkInt$, ENABLE) == 1)
    //PUT_A_NEW_LINE_HERE
    //
    // Enable BRK Interrupt
    //
    TIM_ITConfig(TIM1, TIM_IT_Break, ENABLE);
    NVIC_InitStructure.NVIC_IRQChannel = TIM1_BRK_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);
    #endif
	
	#if(STRCMP($upInt$, ENABLE) == 1)
    //PUT_A_NEW_LINE_HERE
    //
    // Enable UP Interrupt
    //
    TIM_ITConfig(TIM1, TIM_IT_Update, ENABLE);
    NVIC_InitStructure.NVIC_IRQChannel = TIM1_UP_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);
    #endif
	
	#if(STRCMP($tcInt$, 0) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Enable TRG/COM Interrupt
    //
    TIM_ITConfig(TIM1, $TCInt$, ENABLE);
    NVIC_InitStructure.NVIC_IRQChannel = TIM1_TRG_COM_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);
    #endif
	
	#if(STRCMP($ccInt$, 0) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Enable CC Interrupt
    //
    TIM_ITConfig(TIM1, $CCInt$, ENABLE);
    NVIC_InitStructure.NVIC_IRQChannel = TIM1_CC_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);
    #endif
}

#if (STRCMP($brkInt$, ENABLE) == 1)
//PUT_A_NEW_LINE_HERE
/*TIM1_BRK IRQ Handler*/    
void TIM1_BRK_IRQHandler(void)
{
    /*Add your code here*/
}
#endif

#if (STRCMP($upInt$, ENABLE) == 1)
//PUT_A_NEW_LINE_HERE
/*TIM1_UP IRQ Handler*/    
void TIM1_UP_IRQHandler(void)
{
    /*Add your code here*/
}
#endif

#if (STRCMP($tcInt$, 0) == 0)
//PUT_A_NEW_LINE_HERE
/*TIM1_TRG_COM IRQ Handler*/    
void TIM1_TRG_COM_IRQHandler(void)
{
    /*Add your code here*/
}
#endif

#if (STRCMP($ccInt$, 0) == 0)
//PUT_A_NEW_LINE_HERE
/*TIM1_CC IRQ Handler*/    
void TIM1_CC_IRQHandler(void)
{
    /*Add your code here*/
}
#endif
//PUT_A_NEW_LINE_HERE