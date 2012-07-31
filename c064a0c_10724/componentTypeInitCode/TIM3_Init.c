/**********************<<config wizard begin>>*********************************
<group>Peripheral
    <list>Peripheral Name
        <TIM3=>TIM3
	    <code>$tim3$
</group>

<group>Time-Base Config
    <input=integer[0-65535]>Period[0-65535]
        <default>0
	    <code>$tim3Period$
    <input=integer[0-65535]>Prescaler[0-65535]
        <default>0
	    <code>$tim3Psclr$
    <list>Clock Division
	    <TIM_CKD_DIV1=>DIV1
		<TIM_CKD_DIV2=>DIV2
        <TIM_CKD_DIV4=>DIV4
	    <code>$tim3ClkDiv$
    <list>Counter Mode
        <TIM_CounterMode_Up=>Up
        <TIM_CounterMode_Down=>Down
        <TIM_CounterMode_CenterAligned1=>CenterAligned1
        <TIM_CounterMode_CenterAligned2=>CenterAligned2
        <TIM_CounterMode_CenterAligned3=>CenterAligned3
	    <code>$tim3CntMode$
    <list>ARR Preload Enable
        <DISABLE=>Disable
        <ENABLE=>Enable
	    <code>$tim3ARRMode$
</group>

<group>Mode Set
    <list>Master Mode
        <DISABLE=>Disable
        <ENABLE=>Enable
	    <code>$masterEn$
    <list>Master TRGO Source
        <TIM_TRGOSource_Reset=>None
        <TIM_TRGOSource_Reset=>Reset
        <TIM_TRGOSource_Enable=>Enable1
        <TIM_TRGOSource_Update=>Update
        <TIM_TRGOSource_OC1=>OC1
        <TIM_TRGOSource_OC1Ref=>OC1Ref
        <TIM_TRGOSource_OC2Ref=>OC2Ref
        <TIM_TRGOSource_OC3Ref=>OC3Ref
        <TIM_TRGOSource_OC4Ref=>OC4Ref
	    <code>$masterTRGOSrc$
    <list>Slave Mode
        <DISABLE=>Disable
        <ENABLE=>Enable
	    <code>$slaveEn$
    <list>Slave Mode Set
        <DISABLE=>Disable(Internal Clock)
        <TIM_SlaveMode_Reset=>Reset
        <TIM_SlaveMode_Gated=>Gated
        <TIM_SlaveMode_Trigger=>Trigger
        <TIM_SlaveMode_External1=>External1
        <code>$slaveModeSet$
    <list>Single Pulse Mode
        <TIM_OPMode_Repetitive=>Disable
        <TIM_OPMode_Single=>Enable
        <code>$onePulseEn$
    <list>Hall sensor interface
        <DISABLE=>Disable
        <ENABLE=>Enable
	    <code>$hallSensorEn$
</group>

<group>Encoder Interface
    <list>Encoder Enable
        <DISABLE=>Disable
        <ENABLE=>Enable
	    <code>$encoderEn$
    <list>Encoder Mode
        <TIM_EncoderMode_TI1=>Encoder mode 1
        <TIM_EncoderMode_TI2=>Encoder mode 2
        <TIM_EncoderMode_TI12=>Encoder mode 3
        <code>$extiCh1OutputPin$
    <list>Encoder IC1 Polarity
        <TIM_ICPolarity_Falling=>Falling
        <TIM_ICPolarity_Rising=>Rising
        <code>$EncodeIC1Polar$
    <list>Encoder IC2 Polarity
        <TIM_ICPolarity_Falling=>Falling
        <TIM_ICPolarity_Rising=>Rising
        <code>$EncodeIC2Polar$	
</group>

<group>Clock selection
    <list>Internal clock
        <DISABLE=>Disable
        <ENABLE=>Enable
        <code>$interClkEn$
    <list>Internal Trigger
        <DISABLE=>None
        <TIM_TS_ITR0=>ITR0
        <TIM_TS_ITR1=>ITR1
        <TIM_TS_ITR2=>ITR2
        <TIM_TS_ITR3=>ITR3
        <code>$interTrigr$
    <list>TIMx Trigger
        <DISABLE=>None
        <TIM_TIxExternalCLK1Source_TI1ED=>TI1ED
        <TIM_TIxExternalCLK1Source_TI1=>TI1
        <TIM_TIxExternalCLK1Source_TI2=>TI2
        <code>$timxTrigr$
    <list>External Trigger
        <DISABLE=>None
        <ExternalTriggerMode1=>External Trigger Mode 1
        <ExternalTriggerMode2=>External Trigger Mode 2
        <code>$extTrigr$
</group>

<group>Channel 1 Config
    <list>Channel 1 Enable
        <DISABLE=>Disable
        <ENABLE=>Enable
        <code>$ch1En$
    <list>Cap/Comp Select
        <COMPARE_ENABLE=>Output Compare
        <CAPTURE_ENABLE=>Input Capture
        <code>$ch1sel$
    <list>OC1 Mode
        <TIM_OCMode_Timing=>Timing
        <TIM_OCMode_Active=>Active
        <TIM_OCMode_Inactive=>Inactive
        <TIM_OCMode_Toggle=>Toggle
        <TIM_OCMode_PWM1=>PWM1
        <TIM_OCMode_PWM2=>PWM2
        <code>$oc1Mode$
    <input=integer[0-65535]>OC1 Pluse
        <default>0
	    <code>$oc1Pluse$
    <list>OC1 State
        <TIM_OutputState_Disable=>Disable
        <TIM_OutputState_Enable=>Enable
        <code>$oc1State$
    <list>OC1 Polarity
        <TIM_OCPolarity_High=>High
        <TIM_OCPolarity_Low=>Low
        <code>$oc1Polar$
    <list>OC1 Preload
        <DISABLE=>Disable
        <ENABLE=>Enable
        <code>$oc1Preload$
    <list>OC1 Fast Config
        <DISABLE=>Disable
        <ENABLE=>Enable
        <code>$oc1FastEn$
    <list>Clear OC1 Ref
        <DISABLE=>Disable
        <ENABLE=>Enable
        <code>$oc1clrRef$
    <list>IC1 Polarity
        <TIM_ICPolarity_Rising=>Rising
        <TIM_ICPolarity_Falling=>Falling
        <TIM_ICPolarity_BothEdge=>BothEdge
        <code>$ic1Polar$
    <list>IC1 Selection
        <TIM_ICSelection_DirectTI=>DirectTI
        <TIM_ICSelection_IndirectTI=>IndirectTI
        <TIM_ICSelection_TRC=>TRC
        <code>$ic1Sel$
    <list>IC1 Prescaler
        <TIM_ICPSC_DIV1=>Disable
        <TIM_ICPSC_DIV2=>Enable
        <TIM_ICPSC_DIV4=>Disable
        <TIM_ICPSC_DIV8=>Enable
        <code>$ic1Psc$
    <input=integer[0-15]>IC1 Filter[0-15]
        <default>0
        <code>$ic1Filter$
</group>

<group>Channel 2 Config
    <list>Channel 2 Enable
        <DISABLE=>Disable
        <ENABLE=>Enable
        <code>$ch2En$
    <list>Cap/Comp Select
        <COMPARE_ENABLE=>Output Compare
        <CAPTURE_ENABLE=>Input Capture
        <code>$ch2sel$
    <list>OC2 Mode
        <TIM_OCMode_Timing=>Timing
        <TIM_OCMode_Active=>Active
        <TIM_OCMode_Inactive=>Inactive
        <TIM_OCMode_Toggle=>Toggle
        <TIM_OCMode_PWM1=>PWM1
        <TIM_OCMode_PWM2=>PWM2
        <code>$oc2Mode$
    <input=integer[0-65535]>OC2 Pluse
        <default>0
	    <code>$oc2Pluse$
    <list>OC2 State
        <TIM_OutputState_Disable=>Disable
        <TIM_OutputState_Enable=>Enable
        <code>$oc2State$
    <list>OC2 Polarity
        <TIM_OCPolarity_High=>High
        <TIM_OCPolarity_Low=>Low
        <code>$oc2Polar$
    <list>OC2 Preload
        <DISABLE=>Disable
        <ENABLE=>Enable
        <code>$oc2Preload$
    <list>OC2 Fast Config
        <DISABLE=>Disable
        <ENABLE=>Enable
        <code>$oc2FastEn$
    <list>Clear OC2 Ref
        <DISABLE=>Disable
        <ENABLE=>Enable
        <code>$oc2clrRef$
    <list>IC2 Polarity
        <TIM_ICPolarity_Rising=>Rising
        <TIM_ICPolarity_Falling=>Falling
        <TIM_ICPolarity_BothEdge=>BothEdge
        <code>$ic2Polar$
    <list>IC2 Selection
        <TIM_ICSelection_DirectTI=>DirectTI
        <TIM_ICSelection_IndirectTI=>IndirectTI
        <TIM_ICSelection_TRC=>TRC
        <code>$ic2Sel$
    <list>IC2 Prescaler
        <TIM_ICPSC_DIV1=>Disable
        <TIM_ICPSC_DIV2=>Enable
        <TIM_ICPSC_DIV4=>Disable
        <TIM_ICPSC_DIV8=>Enable
        <code>$ic2Psc$
    <input=integer[0-15]>IC2 Filter[0-15]
        <default>0
        <code>$ic2Filter$
</group>

<group>Channel 3 Config
    <list>Channel 3 Enable
        <DISABLE=>Disable
        <ENABLE=>Enable
        <code>$ch3En$
    <list>Cap/Comp Select
        <COMPARE_ENABLE=>Output Compare
        <CAPTURE_ENABLE=>Input Capture
        <code>$ch3sel$
    <list>OC3 Mode
        <TIM_OCMode_Timing=>Timing
        <TIM_OCMode_Active=>Active
        <TIM_OCMode_Inactive=>Inactive
        <TIM_OCMode_Toggle=>Toggle
        <TIM_OCMode_PWM1=>PWM1
        <TIM_OCMode_PWM2=>PWM2
        <code>$oc3Mode$
    <input=integer[0-65535]>OC3 Pluse
        <default>0
	    <code>$oc3Pluse$
    <list>OC3 State
        <TIM_OutputState_Disable=>Disable
        <TIM_OutputState_Enable=>Enable
        <code>$oc3State$
    <list>OC3 Polarity
        <TIM_OCPolarity_High=>High
        <TIM_OCPolarity_Low=>Low
        <code>$oc3Polar$
    <list>OC3 Preload
        <DISABLE=>Disable
        <ENABLE=>Enable
        <code>$oc3Preload$
    <list>OC3 Fast Config
        <DISABLE=>Disable
        <ENABLE=>Enable
        <code>$oc3FastEn$
    <list>Clear OC3 Ref
        <DISABLE=>Disable
        <ENABLE=>Enable
        <code>$oc3clrRef$
    <list>IC3 Polarity
        <TIM_ICPolarity_Rising=>Rising
        <TIM_ICPolarity_Falling=>Falling
        <TIM_ICPolarity_BothEdge=>BothEdge
        <code>$ic3Polar$
    <list>IC3 Selection
        <TIM_ICSelection_DirectTI=>DirectTI
        <TIM_ICSelection_IndirectTI=>IndirectTI
        <TIM_ICSelection_TRC=>TRC
        <code>$ic3Sel$
    <list>IC3 Prescaler
        <TIM_ICPSC_DIV1=>Disable
        <TIM_ICPSC_DIV2=>Enable
        <TIM_ICPSC_DIV4=>Disable
        <TIM_ICPSC_DIV8=>Enable
        <code>$ic3Psc$
    <input=integer[0-15]>IC3 Filter[0-15]
        <default>0
        <code>$ic3Filter$
</group>


<group>Channel 4 Config
    <list>Channel 4 Enable
        <DISABLE=>Disable
        <ENABLE=>Enable
        <code>$ch4En$
    <list>Cap/Comp Select
        <COMPARE_ENABLE=>Output Compare
        <CAPTURE_ENABLE=>Input Capture
        <code>$ch4sel$
    <list>OC4 Mode
        <TIM_OCMode_Timing=>Timing
        <TIM_OCMode_Active=>Active
        <TIM_OCMode_Inactive=>Inactive
        <TIM_OCMode_Toggle=>Toggle
        <TIM_OCMode_PWM1=>PWM1
        <TIM_OCMode_PWM2=>PWM2
        <code>$oc4Mode$
    <input=integer[0-65535]>OC4 Pluse
        <default>0
	    <code>$oc4Pluse$
    <list>OC4 State
        <TIM_OutputState_Disable=>Disable
        <TIM_OutputState_Enable=>Enable
        <code>$oc4State$
    <list>OC4 Polarity
        <TIM_OCPolarity_High=>High
        <TIM_OCPolarity_Low=>Low
        <code>$oc4Polar$
    <list>OC4 Preload
        <DISABLE=>Disable
        <ENABLE=>Enable
        <code>$oc4Preload$
    <list>OC4 Fast Config
        <DISABLE=>Disable
        <ENABLE=>Enable
        <code>$oc4FastEn$
    <list>Clear OC4 Ref
        <DISABLE=>Disable
        <ENABLE=>Enable
        <code>$oc4clrRef$
    <list>IC4 Polarity
        <TIM_ICPolarity_Rising=>Rising
        <TIM_ICPolarity_Falling=>Falling
        <TIM_ICPolarity_BothEdge=>BothEdge
        <code>$ic4Polar$
    <list>IC4 Selection
        <TIM_ICSelection_DirectTI=>DirectTI
        <TIM_ICSelection_IndirectTI=>IndirectTI
        <TIM_ICSelection_TRC=>TRC
        <code>$ic4Sel$
    <list>IC4 Prescaler
        <TIM_ICPSC_DIV1=>Disable
        <TIM_ICPSC_DIV2=>Enable
        <TIM_ICPSC_DIV4=>Disable
        <TIM_ICPSC_DIV8=>Enable
        <code>$ic4Psc$
    <input=integer[0-15]>IC4 Filter[0-15]
        <default>0
        <code>$ic4Filter$
</group>

<group>Event Config
    <list>Update Event
        <DISABLE=>Disable
        <ENABLE=>Enable
        <code>$evtUpdate$
    <list>Update Request Source
        <TIM_UpdateSource_Regular=>Regular
        <TIM_UpdateSource_Global=>Global
        <code>$updateRqstSrc$
</group>

<group=or>Interrupt Config
    <list>Update Interrupt
        <0=>Disable
        <TIM_IT_Update=>Enable
    <list>CC1 Interrupt
        <0=>Disable
        <TIM_IT_CC1=>Enable
    <list>CC2 Interrupt
        <0=>Disable
        <TIM_IT_CC2=>Enable
    <list>CC3 Interrupt
        <0=>Disable
        <TIM_IT_CC3=>Enable
    <list>CC4 Interrupt
        <0=>Disable
        <TIM_IT_CC4=>Enable
    <list>Trigger Interrupt
        <0=>Disable
        <TIM_IT_Trigger=>Enable
        <code>$tim3IntEn$
</group>

<group>DMA Config
    <list>DMA Enable
        <DISABLE=>Disable
        <ENABLE=>Enable
        <code>$tim3dmaEn$
    <list>DMA Base Address
        <TIM_DMABase_CR1=>CR1
        <TIM_DMABase_CR2=>CR2
        <TIM_DMABase_SMCR=>SMCR
        <TIM_DMABase_DIER=>DIER
        <TIM1_DMABase_SR=>SR
        <TIM_DMABase_EGR=>EGR
        <TIM_DMABase_CCMR1=>CCMR1
        <TIM_DMABase_CCMR2=>CCMR2
        <TIM_DMABase_CCER=>CCER
        <TIM_DMABase_CNT=>CNT
        <TIM_DMABase_PSC=>PSC
        <TIM_DMABase_ARR=>ARR
        <TIM_DMABase_CCR1=>CCR1
        <TIM_DMABase_CCR2=>CCR2
        <TIM_DMABase_CCR3=>CCR3
        <TIM_DMABase_CCR4=>CCR4
        <TIM_DMABase_DCR=>DCR
        <code>$dmaBaseAddr$
    <list>DMA Burst Length
        <TIM_DMABurstLength_1Transfer=>1
        <TIM_DMABurstLength_2Transfer=>2
        <TIM_DMABurstLength_3Transfer=>3
        <TIM_DMABurstLength_4Transfer=>4
        <TIM_DMABurstLength_5Transfer=>5
        <TIM_DMABurstLength_6Transfer=>6
        <TIM_DMABurstLength_7Transfer=>7
        <TIM_DMABurstLength_8Transfer=>8
        <TIM_DMABurstLength_9Transfer=>9
        <TIM_DMABurstLength_10Transfer=>10
        <TIM_DMABurstLength_11Transfer=>11
        <TIM_DMABurstLength_12Transfer=>12
        <TIM_DMABurstLength_13Transfer=>13
        <TIM_DMABurstLength_14Transfer=>14
        <TIM_DMABurstLength_15Transfer=>15
        <TIM_DMABurstLength_16Transfer=>16
        <TIM_DMABurstLength_17Transfer=>17
        <TIM_DMABurstLength_18Transfer=>18
        <code>$dmaBurstLen$
</group>

<group=or>DMA Request Source
    <list>Update
        <0=>Disable
        <TIM_DMA_Update=>Enable
    <list>CC1
        <0=>Disable
        <TIM_DMA_CC1=>Enable
    <list>CC2
        <0=>Disable
        <TIM_DMA_CC2=>Enable
    <list>CC3
        <0=>Disable
        <TIM_DMA_CC3=>Enable
    <list>CC4
        <0=>Disable
        <TIM_DMA_CC4=>Enable
    <list>Trigger
        <0=>Disable
        <TIM_DMA_Trigger=>Enable
        <code>$tim3dmaRqstSrc$
</group>

<group>Pin Remap Config
    <list>Pin Remap Select
        <DEFAULT=>Default
        <GPIO_PartialRemap_TIM3=>PartialRemap
        <GPIO_FullRemap_TIM3=>FullRemap
        <code>$tim3PinRemap$
</group>

<group=pin>Pin Used
      <list>ETR
           <DISABLE=>Disable
           <TIM3_ETR=>Enable
           <code>$etrPin$
      <list>CH1_0
           <DISABLE=>Disable
           <TIM3_CH1_0=>Enable
           <code>$ch1_0Pin$
      <list>CH1_1
           <DISABLE=>Disable
           <TIM3_CH1_1=>Enable
           <code>$ch1_1Pin$
      <list>CH1_2
           <DISABLE=>Disable
           <TIM3_CH1_2=>Enable
           <code>$ch1_2Pin$
      <list>CH2_0
           <DISABLE=>Disable
           <TIM3_CH2_0=>Enable
           <code>$ch2_0Pin$
      <list>CH2_1
           <DISABLE=>Disable
           <TIM3_CH2_1=>Enable
           <code>$ch2_1Pin$
      <list>CH2_2
           <DISABLE=>Disable
           <TIM3_CH2_2=>Enable
           <code>$ch2_2Pin$
      <list>CH3_0
           <DISABLE=>Disable
           <TIM3_CH3_0=>Enable
           <code>$ch3_0Pin$
      <list>CH3_1
           <DISABLE=>Disable
           <TIM3_CH3_1=>Enable
           <code>$ch3_1Pin$
      <list>CH4_0
           <DISABLE=>Disable
           <TIM3_CH4_0=>Enable
           <code>$ch4_0Pin$
      <list>CH4_1
           <DISABLE=>Disable
           <TIM3_CH4_1=>Enable
           <code>$ch4_1Pin$
</group>

<dep>
    <type>state
    <trigger>Mode Set->Master Mode = Disable
    <action>Mode Set->Master TRGO Source = Disable
</dep>

<dep>
    <type>state
    <trigger>Mode Set->Slave Mode = Disable
    <action>Mode Set->Slave Mode Set = Disable
</dep>

<dep>
    <type>state
    <trigger>Encoder Interface->Encoder Enable = Disable
    <action>Encoder Interface->Encoder Mode = Disable
    <action>Encoder Interface->Encoder IC1 Polarity = Disable
    <action>Encoder Interface->Encoder IC2 Polarity = Disable
</dep>

<dep>
    <type>state
    <trigger>Clock selection->Internal clock = Enable
    <action>Clock selection->Internal Trigger = Disable
    <action>Clock selection->TIMx Trigger = Disable
    <action>Clock selection->External Trigger = Disable
</dep>

<dep>
    <type>state
    <trigger>Channel 1 Config->Channel 1 Enable = Disable
    <action>Channel 1 Config->Cap/Comp Select = Disable
    <action>Channel 1 Config->OC1 Mode = Disable
    <action>Channel 1 Config->OC1 Pluse = Disable
    <action>Channel 1 Config->OC1 State = Disable
    <action>Channel 1 Config->OC1 Polarity = Disable
    <action>Channel 1 Config->OC1 Preload = Disable
    <action>Channel 1 Config->OC1 Fast Config = Disable
    <action>Channel 1 Config->Clear OC1 Ref = Disable
    <action>Channel 1 Config->IC1 Polarity = Disable
    <action>Channel 1 Config->IC1 Selection = Disable
    <action>Channel 1 Config->IC1 Prescaler = Disable
    <action>Channel 1 Config->IC1 Filter[0-15] = Disable
</dep>

<dep>
    <type>state
    <trigger>Channel 2 Config->Channel 2 Enable = Disable
    <action>Channel 2 Config->Cap/Comp Select = Disable
    <action>Channel 2 Config->OC2 Mode = Disable
    <action>Channel 2 Config->OC2 Pluse = Disable
    <action>Channel 2 Config->OC2 State = Disable
    <action>Channel 2 Config->OC2 Polarity = Disable
    <action>Channel 2 Config->OC2 Preload = Disable
    <action>Channel 2 Config->OC2 Fast Config = Disable
    <action>Channel 2 Config->Clear OC2 Ref = Disable
    <action>Channel 2 Config->IC2 Polarity = Disable
    <action>Channel 2 Config->IC2 Selection = Disable
    <action>Channel 2 Config->IC2 Prescaler = Disable
    <action>Channel 2 Config->IC2 Filter[0-15] = Disable
</dep>


<dep>
    <type>state
    <trigger>Channel 3 Config->Channel 3 Enable = Disable
    <action>Channel 3 Config->Cap/Comp Select = Disable
    <action>Channel 3 Config->OC3 Mode = Disable
    <action>Channel 3 Config->OC3 Pluse = Disable
    <action>Channel 3 Config->OC3 State = Disable
    <action>Channel 3 Config->OC3 Polarity = Disable
    <action>Channel 3 Config->OC3 Preload = Disable
    <action>Channel 3 Config->OC3 Fast Config = Disable
    <action>Channel 3 Config->Clear OC3 Ref = Disable
    <action>Channel 3 Config->IC3 Polarity = Disable
    <action>Channel 3 Config->IC3 Selection = Disable
    <action>Channel 3 Config->IC3 Prescaler = Disable
    <action>Channel 3 Config->IC3 Filter[0-15] = Disable
</dep>


<dep>
    <type>state
    <trigger>Channel 4 Config->Channel 4 Enable = Disable
    <action>Channel 4 Config->Cap/Comp Select = Disable
    <action>Channel 4 Config->OC4 Mode = Disable
    <action>Channel 4 Config->OC4 Pluse = Disable
    <action>Channel 4 Config->OC4 State = Disable
    <action>Channel 4 Config->OC4 Polarity = Disable
    <action>Channel 4 Config->OC4 Preload = Disable
    <action>Channel 4 Config->OC4 Fast Config = Disable
    <action>Channel 4 Config->Clear OC4 Ref = Disable
    <action>Channel 4 Config->IC4 Polarity = Disable
    <action>Channel 4 Config->IC4 Selection = Disable
    <action>Channel 4 Config->IC4 Prescaler = Disable
    <action>Channel 4 Config->IC4 Filter[0-15] = Disable
</dep>

<dep>
    <type>state
    <trigger>Channel 1 Config->Cap/Comp Select = Input Capture
    <action>Channel 1 Config->OC1 Mode = Disable
    <action>Channel 1 Config->OC1 Pluse = Disable
    <action>Channel 1 Config->OC1 State = Disable
    <action>Channel 1 Config->OC1 Polarity = Disable
    <action>Channel 1 Config->OC1 Preload = Disable
    <action>Channel 1 Config->OC1 Fast Config = Disable
    <action>Channel 1 Config->Clear OC1 Ref = Disable
</dep>

<dep>
    <type>state
    <trigger>Channel 1 Config->Cap/Comp Select = Output Compare
    <action>Channel 1 Config->IC1 Polarity = Disable
    <action>Channel 1 Config->IC1 Selection = Disable
    <action>Channel 1 Config->IC1 Prescaler = Disable
    <action>Channel 1 Config->IC1 Filter[0-15] = Disable
</dep>

<dep>
    <type>state
    <trigger>Channel 2 Config->Cap/Comp Select = Input Capture
    <action>Channel 2 Config->OC2 Mode = Disable
    <action>Channel 2 Config->OC2 Pluse = Disable
    <action>Channel 2 Config->OC2 State = Disable
    <action>Channel 2 Config->OC2 Polarity = Disable
    <action>Channel 2 Config->OC2 Preload = Disable
    <action>Channel 2 Config->OC2 Fast Config = Disable
    <action>Channel 2 Config->Clear OC2 Ref = Disable
</dep>

<dep>
    <type>state
    <trigger>Channel 2 Config->Cap/Comp Select = Output Compare
    <action>Channel 2 Config->IC2 Polarity = Disable
    <action>Channel 2 Config->IC2 Selection = Disable
    <action>Channel 2 Config->IC2 Prescaler = Disable
    <action>Channel 2 Config->IC2 Filter[0-15] = Disable
</dep>

<dep>
    <type>state
    <trigger>Channel 3 Config->Cap/Comp Select = Input Capture
    <action>Channel 3 Config->OC3 Mode = Disable
    <action>Channel 3 Config->OC3 Pluse = Disable
    <action>Channel 3 Config->OC3 State = Disable
    <action>Channel 3 Config->OC3 Polarity = Disable
    <action>Channel 3 Config->OC3 Preload = Disable
    <action>Channel 3 Config->OC3 Fast Config = Disable
    <action>Channel 3 Config->Clear OC3 Ref = Disable
</dep>

<dep>
    <type>state
    <trigger>Channel 3 Config->Cap/Comp Select = Output Compare
    <action>Channel 3 Config->IC3 Polarity = Disable
    <action>Channel 3 Config->IC3 Selection = Disable
    <action>Channel 3 Config->IC3 Prescaler = Disable
    <action>Channel 3 Config->IC3 Filter[0-15] = Disable
</dep>

<dep>
    <type>state
    <trigger>Channel 4 Config->Cap/Comp Select = Input Capture
    <action>Channel 4 Config->OC4 Mode = Disable
    <action>Channel 4 Config->OC4 Pluse = Disable
    <action>Channel 4 Config->OC4 State = Disable
    <action>Channel 4 Config->OC4 Polarity = Disable
    <action>Channel 4 Config->OC4 Preload = Disable
    <action>Channel 4 Config->OC4 Fast Config = Disable
    <action>Channel 4 Config->Clear OC4 Ref = Disable
</dep>

<dep>
    <type>state
    <trigger>Channel 4 Config->Cap/Comp Select = Output Compare
    <action>Channel 4 Config->IC4 Polarity = Disable
    <action>Channel 4 Config->IC4 Selection = Disable
    <action>Channel 4 Config->IC4 Prescaler = Disable
    <action>Channel 4 Config->IC4 Filter[0-15] = Disable
</dep>

<dep>
    <type>state
    <trigger>Event Config->Update Event = Disable
    <action>Event Config->Update Request Source = Disable
</dep>

<dep>
    <type>state
    <trigger>DMA Config->DMA Enable = Disable
    <action>DMA Config->DMA Base Address = Disable
    <action>DMA Config->DMA Burst Length = Disable
    <action>DMA Request Source = Disable
</dep>

<dep>
    <type>state
    <trigger>Pin Remap Config->Pin Remap Select = Default
    <action>Pin Used->CH1_0 = Enable
    <action>Pin Used->CH2_0 = Enable
    <action>Pin Used->CH3_0 = Enable
    <action>Pin Used->CH4_0 = Enable
    <action>Pin Used->CH1_1 = Disable
    <action>Pin Used->CH1_2 = Disable
    <action>Pin Used->CH2_1 = Disable
    <action>Pin Used->CH2_2 = Disable
    <action>Pin Used->CH3_1 = Disable
    <action>Pin Used->CH4_1 = Disable
</dep>

<dep>
    <type>state
    <trigger>Pin Remap Config->Pin Remap Select = PartialRemap
    <action>Pin Used->CH1_1 = Enable
    <action>Pin Used->CH2_1 = Enable
    <action>Pin Used->CH3_0 = Enable
    <action>Pin Used->CH4_0 = Enable
    <action>Pin Used->CH1_0 = Disable
    <action>Pin Used->CH1_2 = Disable
    <action>Pin Used->CH2_0 = Disable
    <action>Pin Used->CH2_2 = Disable
    <action>Pin Used->CH3_1 = Disable
    <action>Pin Used->CH4_1 = Disable
</dep>

<dep>
    <type>state
    <trigger>Pin Remap Config->Pin Remap Select = FullRemap
    <action>Pin Used->CH1_2 = Enable
    <action>Pin Used->CH2_2 = Enable
    <action>Pin Used->CH3_1 = Enable
    <action>Pin Used->CH4_1 = Enable
    <action>Pin Used->CH1_0 = Disable
    <action>Pin Used->CH1_1 = Disable
    <action>Pin Used->CH2_0 = Disable
    <action>Pin Used->CH2_1 = Disable
    <action>Pin Used->CH3_0 = Disable
    <action>Pin Used->CH4_0 = Disable
</dep>
*******************************<<config wizard end>>**************************/
#include "stm32f10x.h"
#include "stm32f10x_rcc.h"
#include "stm32f10x_gpio.h"
#include "stm32f10x_tim.h"

#if (STRCMP($tim3IntEn$, 0) == 0)
#include "misc.h"
//PUT_A_NEW_LINE_HERE
/***************************************************************************//**
 * Declare function prototype
*******************************************************************************/
void TIM3_IRQHandler(void);
#endif

//PUT_A_NEW_LINE_HERE
/*************************************************************
 * TIM3 Initialization
**************************************************************/
void TIM3_Init()
{
	#if (STRCMP($tim3IntEn$, 0) == 0)
    NVIC_InitTypeDef NVIC_InitStructure;
	#endif

	#if (STRCMP($etrPin$, DISABLE) == 0 || STRCMP($ch1_0Pin$, DISABLE) == 0 || \
	STRCMP($ch1_1Pin$, DISABLE) == 0 || STRCMP($ch1_2Pin$, DISABLE) == 0 || \
    STRCMP($ch2_0Pin$, DISABLE) == 0 || STRCMP($ch2_1Pin$, DISABLE) == 0 || \
    STRCMP($ch2_2Pin$, DISABLE) == 0 || STRCMP($ch3_0Pin$, DISABLE) == 0 || \
    STRCMP($ch3_1Pin$, DISABLE) == 0 || STRCMP($ch4_0Pin$, DISABLE) == 0 || \
    STRCMP($ch4_1Pin$, DISABLE) == 0 )	
    GPIO_InitTypeDef GPIO_InitStructure;
	#endif	

    TIM_TimeBaseInitTypeDef  TIM_TimeBaseStructure;
	
    #if ( (STRCMP($ch1En$, DISABLE) == 0 && STRCMP($ch1sel$, CAPTURE_ENABLE) == 0) || \
	(STRCMP($ch2En$, DISABLE) == 0 && STRCMP($ch2sel$, CAPTURE_ENABLE) == 0) || \
	(STRCMP($ch3En$, DISABLE) == 0 && STRCMP($ch3sel$, CAPTURE_ENABLE) == 0) || \
	(STRCMP($ch4En$, DISABLE) == 0 && STRCMP($ch4sel$, CAPTURE_ENABLE) == 0) )
    TIM_OCInitTypeDef  TIM_OCInitStructure;
	#endif

    #if ( (STRCMP($ch1En$, DISABLE) == 0 && STRCMP($ch1sel$, COMPARE_ENABLE) == 0) || \
	(STRCMP($ch2En$, DISABLE) == 0 && STRCMP($ch2sel$, COMPARE_ENABLE) == 0) || \
	(STRCMP($ch3En$, DISABLE) == 0 && STRCMP($ch3sel$, COMPARE_ENABLE) == 0) || \
	(STRCMP($ch4En$, DISABLE) == 0 && STRCMP($ch4sel$, COMPARE_ENABLE) == 0) )	
    TIM_ICInitTypeDef  TIM_ICInitStructure;
	#endif
	
	//PUT_A_NEW_LINE_HERE
    //
    // Enable TIM3 clock
    //	
    RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3, ENABLE);

	#if (STRCMP($tim3PinRemap$, DEFAULT) == 1 )
    //PUT_A_NEW_LINE_HERE
    //
    // Enable TIM3's GPIOA, GPIOB, GPIOD, AFIO clock
    //	
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA | RCC_APB2Periph_GPIOB | RCC_APB2Periph_GPIOD | RCC_APB2Periph_AFIO, ENABLE);
	#endif
	#if (STRCMP($tim3PinRemap$, GPIO_PartialRemap_TIM3) == 1 )
    //PUT_A_NEW_LINE_HERE
    //
    // Enable TIM3's GPIOB, GPIOD, AFIO clock
    //	
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB | RCC_APB2Periph_GPIOD | RCC_APB2Periph_AFIO, ENABLE);	
	#endif
	#if (STRCMP($tim3PinRemap$, GPIO_FullRemap_TIM3) == 1 )
    //PUT_A_NEW_LINE_HERE
    //
    // Enable TIM3's GPIOC, GPIOD, AFIO clock
    //	
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC | RCC_APB2Periph_GPIOD |RCC_APB2Periph_AFIO, ENABLE);	
	#endif

	#if (STRCMP($tim3PinRemap$, DEFAULT) == 1)
	#if (STRCMP($etrPin$, DISABLE) == 0 ||STRCMP($ch1_0Pin$, DISABLE) == 0 || \
	STRCMP($ch2_0Pin$, DISABLE) == 0 || STRCMP($ch3_0Pin$, DISABLE) == 0 || STRCMP($ch4_0Pin$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    //   
    // Configure TIM3 pins: ETR, CH1, CH2, CH3, CH4, when Pin Remap is Default
    //
	#endif
	#if (STRCMP($etrPin$, DISABLE) == 0)
    GPIO_InitStructure.GPIO_Pin =  GPIO_Pin_2;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOD, &GPIO_InitStructure);
	#endif
	#if (STRCMP($ch1_0Pin$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    GPIO_InitStructure.GPIO_Pin =  GPIO_Pin_6;
    #if (STRCMP($ch1sel$, CAPTURE_ENABLE) == 1)
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
    #else
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
    #endif
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA, &GPIO_InitStructure);
	#endif
	#if (STRCMP($ch2_0Pin$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    GPIO_InitStructure.GPIO_Pin =  GPIO_Pin_7;	
    #if (STRCMP($ch2sel$, CAPTURE_ENABLE) == 1)
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
    #else
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
    #endif
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA, &GPIO_InitStructure);
	#endif
	#if (STRCMP($ch3_0Pin$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    GPIO_InitStructure.GPIO_Pin =  GPIO_Pin_0;
    #if (STRCMP($ch3sel$, CAPTURE_ENABLE) == 1)
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
    #else
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
    #endif
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOB, &GPIO_InitStructure);
	#endif
	#if (STRCMP($ch4_0Pin$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    GPIO_InitStructure.GPIO_Pin =  GPIO_Pin_1;
    #if (STRCMP($ch4sel$, CAPTURE_ENABLE) == 1)
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
    #else
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
    #endif
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOB, &GPIO_InitStructure);
	#endif
	#endif
	
	#if (STRCMP($tim3PinRemap$, GPIO_PartialRemap_TIM3) == 1)
    //PUT_A_NEW_LINE_HERE
    //   
    // Configure TIM3 pins: ETR, CH1, CH2, CH3, CH4, when Pin Remap is PartialRemap
    // 
    GPIO_PinRemapConfig(GPIO_PartialRemap_TIM3, ENABLE);
	#if (STRCMP($etrPin$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    GPIO_InitStructure.GPIO_Pin =  GPIO_Pin_2;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOD, &GPIO_InitStructure);
	#endif
	#if (STRCMP($ch1_1Pin$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    GPIO_InitStructure.GPIO_Pin =  GPIO_Pin_4;
    #if (STRCMP($ch1sel$, CAPTURE_ENABLE) == 1)
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
    #else
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
    #endif
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOB, &GPIO_InitStructure);
	#endif
	#if (STRCMP($ch2_1Pin$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    GPIO_InitStructure.GPIO_Pin =  GPIO_Pin_5;
    #if (STRCMP($ch2sel$, CAPTURE_ENABLE) == 1)
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
    #else
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
    #endif
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOB, &GPIO_InitStructure);
	#endif
	#if (STRCMP($ch3_0Pin$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    GPIO_InitStructure.GPIO_Pin =  GPIO_Pin_0;
    #if (STRCMP($ch3sel$, CAPTURE_ENABLE) == 1)
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
    #else
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
    #endif
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOB, &GPIO_InitStructure);
	#endif
	#if (STRCMP($ch4_0Pin$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    GPIO_InitStructure.GPIO_Pin =  GPIO_Pin_1;
    #if (STRCMP($ch4sel$, CAPTURE_ENABLE) == 1)
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
    #else
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
    #endif
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOB, &GPIO_InitStructure);
	#endif
	#endif
	
	#if (STRCMP($tim3PinRemap$, GPIO_FullRemap_TIM3) == 1)
    //PUT_A_NEW_LINE_HERE
    //   
    // Configure TIM3 pins: ETR, CH1, CH2, CH3, CH4, when Pin Remap is FullRemap
    // 
    GPIO_PinRemapConfig(GPIO_FullRemap_TIM3, ENABLE);
	#if (STRCMP($etrPin$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    GPIO_InitStructure.GPIO_Pin =  GPIO_Pin_2;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOD, &GPIO_InitStructure);
	#endif
	#if (STRCMP($ch1_2Pin$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    GPIO_InitStructure.GPIO_Pin =  GPIO_Pin_6;
    #if (STRCMP($ch1sel$, CAPTURE_ENABLE) == 1)
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
    #else
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
    #endif
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOC, &GPIO_InitStructure);
	#endif
	#if (STRCMP($ch2_2Pin$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    GPIO_InitStructure.GPIO_Pin =  GPIO_Pin_7;
    #if (STRCMP($ch2sel$, CAPTURE_ENABLE) == 1)
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
    #else
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
    #endif
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOC, &GPIO_InitStructure);
	#endif
	#if (STRCMP($ch3_1Pin$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    GPIO_InitStructure.GPIO_Pin =  GPIO_Pin_8;
    #if (STRCMP($ch3sel$, CAPTURE_ENABLE) == 1)
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
    #else
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
    #endif
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOC, &GPIO_InitStructure);
	#endif
	#if (STRCMP($ch4_1Pin$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    GPIO_InitStructure.GPIO_Pin =  GPIO_Pin_9;
    #if (STRCMP($ch4sel$, CAPTURE_ENABLE) == 1)
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
    #else
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
    #endif
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOC, &GPIO_InitStructure);
	#endif
	#endif
	
	//PUT_A_NEW_LINE_HERE
    //
    // Initializes the TIM3 Time Base Unit
    //	
    TIM_TimeBaseStructure.TIM_Period = $tim3Period$;
    TIM_TimeBaseStructure.TIM_Prescaler = $tim3Psclr$;
    TIM_TimeBaseStructure.TIM_ClockDivision = $tim3ClkDiv$;
    TIM_TimeBaseStructure.TIM_CounterMode = $tim3CntMode$;
    TIM_TimeBaseInit(TIM3, &TIM_TimeBaseStructure);
	
    #if (STRCMP($tim3ARRMode$, DISABLE) == 0)
	//PUT_A_NEW_LINE_HERE
    //
    // Enables Preload register on ARR
    //	
    TIM_ARRPreloadConfig(TIM3, ENABLE);
	#endif	

    #if (STRCMP($ch1En$, DISABLE) == 0)
	
    #if (STRCMP($ch1sel$, CAPTURE_ENABLE) == 0)
	//PUT_A_NEW_LINE_HERE
    //
    // Initializes Output Compare Channel1 of the TIM3 
    //	
    TIM_OCInitStructure.TIM_OCMode = $oc1Mode$;
    TIM_OCInitStructure.TIM_OutputState = $oc1State$;
    TIM_OCInitStructure.TIM_Pulse = $oc1Pluse$;
    TIM_OCInitStructure.TIM_OCPolarity = $oc1Polar$;
    TIM_OC1Init(TIM3, &TIM_OCInitStructure);

    #if (STRCMP($oc1Preload$, DISABLE) == 0)
	//PUT_A_NEW_LINE_HERE
    //
    // Enables Preload register on CCR1
    //	
    TIM_OC1PreloadConfig(TIM3, TIM_OCPreload_Enable);
	#endif

    #if (STRCMP($oc1Preload$, DISABLE) == 0)
	//PUT_A_NEW_LINE_HERE
    //
    // Clears or safeguards the OCREF1 signal on an external event
    //	
	TIM_ClearOC1Ref(TIM3, TIM_OCClear_Enable);  
	#endif

    #if ( STRCMP($oc1FastEn$, DISABLE) == 0 && (STRCMP($oc1Mode$, TIM_OCMode_PWM1) == 1 || STRCMP($oc1Mode$, TIM_OCMode_PWM2) == 1) )
	//PUT_A_NEW_LINE_HERE
    //
    // Configures the TIM3 Output Compare Channel1 Fast feature
    //	
	TIM_OC1FastConfig(TIM3, TIM_OCClear_Enable);  
	#endif	
	#endif	

    #if (STRCMP($ch1sel$, COMPARE_ENABLE) == 0)
	//PUT_A_NEW_LINE_HERE
    //
    // Initializes Input Capture Channel1 of the TIM3 
    //	
    TIM_ICInitStructure.TIM_Channel = TIM_Channel_1;                   
    TIM_ICInitStructure.TIM_ICPolarity = $ic1Polar$;     
    TIM_ICInitStructure.TIM_ICSelection = $ic1Sel$;
    TIM_ICInitStructure.TIM_ICPrescaler = $ic1Psc$;
    TIM_ICInitStructure.TIM_ICFilter = $ic1Filter$; 
    TIM_ICInit(TIM3, &TIM_ICInitStructure);
	#endif
    #endif
	
    #if (STRCMP($ch2En$, DISABLE) == 0)
	
    #if (STRCMP($ch2sel$, CAPTURE_ENABLE) == 0)
	//PUT_A_NEW_LINE_HERE
    //
    // Initializes Output Compare Channel2 of the TIM3 
    //	
    TIM_OCInitStructure.TIM_OCMode = $oc2Mode$;
    TIM_OCInitStructure.TIM_OutputState = $oc2State$;
    TIM_OCInitStructure.TIM_Pulse = $oc2Pluse$;
    TIM_OCInitStructure.TIM_OCPolarity = $oc2Polar$;
    TIM_OC2Init(TIM3, &TIM_OCInitStructure);

    #if (STRCMP($oc2Preload$, DISABLE) == 0)
	//PUT_A_NEW_LINE_HERE
    //
    // Enables Preload register on CCR2
    //	
    TIM_OC2PreloadConfig(TIM3, TIM_OCPreload_Enable);
	#endif

    #if (STRCMP($oc2Preload$, DISABLE) == 0)
	//PUT_A_NEW_LINE_HERE
    //
    // Clears or safeguards the OCREF2 signal on an external event
    //	
	TIM_ClearOC2Ref(TIM3, TIM_OCClear_Enable);  
	#endif

    #if ( STRCMP($oc2FastEn$, DISABLE) == 0 && (STRCMP($oc2Mode$, TIM_OCMode_PWM1) == 1 || STRCMP($oc2Mode$, TIM_OCMode_PWM2) == 1) )
	//PUT_A_NEW_LINE_HERE
    //
    // Configures the TIM3 Output Compare Channel2 Fast feature
    //	
	TIM_OC2FastConfig(TIM3, TIM_OCClear_Enable);  
	#endif	
	#endif	

    #if (STRCMP($ch2sel$, COMPARE_ENABLE) == 0)
	//PUT_A_NEW_LINE_HERE
    //
    // Initializes Input Capture Channel2 of the TIM3
    //	
    TIM_ICInitStructure.TIM_Channel = TIM_Channel_2;                   
    TIM_ICInitStructure.TIM_ICPolarity = $ic2Polar$;     
    TIM_ICInitStructure.TIM_ICSelection = $ic2Sel$;
    TIM_ICInitStructure.TIM_ICPrescaler = $ic2Psc$;
    TIM_ICInitStructure.TIM_ICFilter = $ic2Filter$; 
    TIM_ICInit(TIM3, &TIM_ICInitStructure);
	#endif
    #endif


    #if (STRCMP($ch3En$, DISABLE) == 0)
	
    #if (STRCMP($ch3sel$, CAPTURE_ENABLE) == 0)
	//PUT_A_NEW_LINE_HERE
    //
    // Initializes Output Compare Channel3 of the TIM3 
    //	
    TIM_OCInitStructure.TIM_OCMode = $oc3Mode$;
    TIM_OCInitStructure.TIM_OutputState = $oc3State$;
    TIM_OCInitStructure.TIM_Pulse = $oc3Pluse$;
    TIM_OCInitStructure.TIM_OCPolarity = $oc3Polar$;
    TIM_OC3Init(TIM3, &TIM_OCInitStructure);

    #if (STRCMP($oc3Preload$, DISABLE) == 0)
	//PUT_A_NEW_LINE_HERE
    //
    // Enables Preload register on CCR3
    //	
    TIM_OC3PreloadConfig(TIM3, TIM_OCPreload_Enable);
	#endif

    #if (STRCMP($oc3Preload$, DISABLE) == 0)
	//PUT_A_NEW_LINE_HERE
    //
    // Clears or safeguards the OCREF3 signal on an external event
    //	
	TIM_ClearOC3Ref(TIM3, TIM_OCClear_Enable);  
	#endif

    #if ( STRCMP($oc3FastEn$, DISABLE) == 0 && (STRCMP($oc3Mode$, TIM_OCMode_PWM1) == 1 || STRCMP($oc3Mode$, TIM_OCMode_PWM2) == 1) )
	//PUT_A_NEW_LINE_HERE
    //
    // Configures the TIM3 Output Compare Channel3 Fast feature
    //	
	TIM_OC3FastConfig(TIM3, TIM_OCClear_Enable);  
	#endif	
	#endif	

    #if (STRCMP($ch3sel$, COMPARE_ENABLE) == 0)
	//PUT_A_NEW_LINE_HERE
    //
    // Initializes Input Capture Channel3 of the TIM3
    //	
    TIM_ICInitStructure.TIM_Channel = TIM_Channel_3;                   
    TIM_ICInitStructure.TIM_ICPolarity = $ic3Polar$;     
    TIM_ICInitStructure.TIM_ICSelection = $ic3Sel$;
    TIM_ICInitStructure.TIM_ICPrescaler = $ic3Psc$;
    TIM_ICInitStructure.TIM_ICFilter = $ic3Filter$; 
    TIM_ICInit(TIM3, &TIM_ICInitStructure);
	#endif
    #endif


    #if (STRCMP($ch4En$, DISABLE) == 0)
	
    #if (STRCMP($ch4sel$, CAPTURE_ENABLE) == 0)
	//PUT_A_NEW_LINE_HERE
    //
    // Initializes Output Compare Channel4 of the TIM3 
    //	
    TIM_OCInitStructure.TIM_OCMode = $oc4Mode$;
    TIM_OCInitStructure.TIM_OutputState = $oc4State$;
    TIM_OCInitStructure.TIM_Pulse = $oc4Pluse$;
    TIM_OCInitStructure.TIM_OCPolarity = $oc4Polar$;
    TIM_OC4Init(TIM3, &TIM_OCInitStructure);

    #if (STRCMP($oc4Preload$, DISABLE) == 0)
	//PUT_A_NEW_LINE_HERE
    //
    // Enables Preload register on CCR4
    //	
    TIM_OC4PreloadConfig(TIM3, TIM_OCPreload_Enable);
	#endif

    #if (STRCMP($oc4Preload$, DISABLE) == 0)
	//PUT_A_NEW_LINE_HERE
    //
    // Clears or safeguards the OCREF4 signal on an external event
    //	
	TIM_ClearOC4Ref(TIM3, TIM_OCClear_Enable);  
	#endif

    #if ( STRCMP($oc4FastEn$, DISABLE) == 0 && (STRCMP($oc4Mode$, TIM_OCMode_PWM1) == 1 || STRCMP($oc4Mode$, TIM_OCMode_PWM2) == 1) )
	//PUT_A_NEW_LINE_HERE
    //
    // Configures the TIM3 Output Compare Channel4 Fast feature
    //	
	TIM_OC4FastConfig(TIM3, TIM_OCClear_Enable);  
	#endif	
	#endif	

    #if (STRCMP($ch4sel$, COMPARE_ENABLE) == 0)
	//PUT_A_NEW_LINE_HERE
    //
    // Initializes Input Capture Channel4 of the TIM3
    //	
    TIM_ICInitStructure.TIM_Channel = TIM_Channel_4;                   
    TIM_ICInitStructure.TIM_ICPolarity = $ic4Polar$;     
    TIM_ICInitStructure.TIM_ICSelection = $ic4Sel$;
    TIM_ICInitStructure.TIM_ICPrescaler = $ic4Psc$;
    TIM_ICInitStructure.TIM_ICFilter = $ic4Filter$; 
    TIM_ICInit(TIM3, &TIM_ICInitStructure);
	#endif
    #endif

    //PUT_A_NEW_LINE_HERE
    //
    // Enables TIM3 peripheral
    //	
    TIM_Cmd(TIM3, ENABLE);
	
    #if (STRCMP($masterEn$, DISABLE) == 0 && STRCMP($masterTRGOSrc$, None) == 0)
	//PUT_A_NEW_LINE_HERE
    //
    // Selects the TIM3 Trigger Output Mode
    //	
    TIM_SelectOutputTrigger(TIM3, $masterTRGOSrc$);
	#endif	

    #if (STRCMP($slaveEn$, DISABLE) == 0 )
	//PUT_A_NEW_LINE_HERE
    //
    // Sets the TIM3 Master/Slave Mode
    //
    TIM_SelectMasterSlaveMode(TIM3, TIM_MasterSlaveMode_Enable);	
	#endif
	
    #if (STRCMP($slaveEn$, DISABLE) == 0 && STRCMP($slaveModeSet$, Disable(Internal Clock)) == 0)
	//PUT_A_NEW_LINE_HERE
    //
    // Selects the TIM3 Slave Mode
    //	
    TIM_SelectSlaveMode(TIM3, $slaveModeSet$);
	#endif
	
    #if (STRCMP($onePulseEn$, TIM_OPMode_Repetitive) == 0 )
	//PUT_A_NEW_LINE_HERE
    //
    // Selects the TIM3's One Pulse Mode
    //
    TIM_SelectOnePulseMode(TIM3, TIM_OPMode_Single);	
	#endif
	
    #if (STRCMP($hallSensorEn$, DISABLE) == 0 )
	//PUT_A_NEW_LINE_HERE
    //
    // Enables the TIM3's Hall sensor interface
    //
    TIM_SelectHallSensor(TIM3, ENABLE);	
	#endif
	
    #if (STRCMP($encoderEn$, DISABLE) == 0 )
	//PUT_A_NEW_LINE_HERE
    //
    // Configures the TIM3 Encoder Interface
    //
    TIM_EncoderInterfaceConfig(TIM3, $extiCh1OutputPin$,
                                $EncodeIC1Polar$, $EncodeIC2Polar$);
	#endif
		
	
    #if (STRCMP($interClkEn$, ENABLE) == 0 )

    #if (STRCMP($interTrigr$, DISABLE) == 0 )
    //PUT_A_NEW_LINE_HERE
    //
    // Configures the TIM3 Internal Trigger as External Clock
    //
    TIM_ITRxExternalClockConfig(TIM3, $interTrigr$);
	#endif

    #if (STRCMP($timxTrigr$, DISABLE) == 0 )
    //PUT_A_NEW_LINE_HERE
    //
    // Configures the TIM3 Trigger as External Clock
    //
    TIM_TIxExternalClockConfig(TIM3, $timxTrigr$, TIM_ICPolarity_Rising, 0x0);
	#endif
	
    #if (STRCMP($extTrigr$, DISABLE) == 0 )
    #if (STRCMP($extTrigr$, ExternalTriggerMode1) == 1 )
    //PUT_A_NEW_LINE_HERE
    //
    // Configures the External clock Mode1
    //
    TIM_ETRClockMode1Config(TIM3, TIM_ExtTRGPSC_OFF, TIM_ExtTRGPolarity_Inverted, 0x0);
	#endif
    #if (STRCMP($extTrigr$, ExternalTriggerMode2) == 1 )
    //PUT_A_NEW_LINE_HERE
    //
    // Configures the External clock Mode2
    //
    TIM_ETRClockMode2Config(TIM3, TIM_ExtTRGPSC_OFF, TIM_ExtTRGPolarity_Inverted, 0x0);
	#endif
	#endif
	#endif
	
    #if (STRCMP($evtUpdate$, DISABLE) == 0 )
    //PUT_A_NEW_LINE_HERE
    //
    // Enables the TIM3 Update event
    //
    TIM_UpdateRequestConfig(TIM3, $updateRqstSrc$);
    TIM_UpdateDisableConfig(TIM3, DISABLE);
	#endif

    #if (STRCMP($tim3IntEn$, 0) == 0 )
    //PUT_A_NEW_LINE_HERE
    //
    // Enables TIM3 interrupts
    //
    TIM_ITConfig(TIM3, $tim3IntEn$, ENABLE);
    NVIC_InitStructure.NVIC_IRQChannel = TIM3_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);
	#endif
	
    #if (STRCMP($tim3dmaEn$, DISABLE) == 0 )
    //PUT_A_NEW_LINE_HERE
    //
    // Enables the TIM3's DMA Requests
    //
    TIM_DMAConfig(TIM3, $dmaBaseAddr$, $dmaBurstLen$);
    #if (STRCMP($tim3dmaRqstSrc$, 0) == 0 )
    TIM_DMACmd(TIM3, $tim3dmaRqstSrc$, ENABLE);
	#endif
    TIM_SelectCCDMA(TIM3, ENABLE);	
	#endif
}
//PUT_A_NEW_LINE_HERE
#if (STRCMP($tim3IntEn$, 0) == 0)
/* IIM2 Interrupt function */
void TIM3_IRQHandler(void)
{
    //
    // add your code 
    //   
}
#endif
//PUT_A_NEW_LINE_HERE