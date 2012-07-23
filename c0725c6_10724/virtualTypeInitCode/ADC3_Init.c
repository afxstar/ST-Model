/******************************<<config wizard begin>>*************************
<group>Peripheral
    <list>Peripheral Name
        <ADC3=>ADC3
    <code>$ADC3$
</group>
<group>Basic Configuration
    <list>ADC Mode
        <ADC_Mode_Independent=>Independent
        <ADC_Mode_RegInjecSimult=>Regular+injected simultaneous
		<ADC_Mode_RegSimult_AlterTrig=>Regular simultaneous alternate trigger
		<ADC_Mode_InjecSimult_FastInterl=>injected simultaneous fast trigger
		<ADC_Mode_InjecSimult_SlowInterl=>injected simultaneous slow interleaved
		<ADC_Mode_InjecSimult =>Inject simultaneous
		<ADC_Mode_RegSimult=>Regular simultaneous
		<ADC_Mode_FastInterl=>Fast interleaved only
		<ADC_Mode_SlowInterl=>Slow interleaved only
		<ADC_Mode_AlterTrig=>Alternate trigger only
	<code>$ADC3Mode$
	<list>Scan Multichannels Enable
	    <ENABLE=>Enable
		<DISABLE=>Disable
	<code>$ADC3ScanConvMode$
	<list>Continuous Conversion Enable
	    <ENABLE=>Enable
		<DISABLE=>Disable
    <code>$ADC3ContinuousConvMode$
	<list>Trigger Source For Regular Channel
	    <ADC_ExternalTrigConv_None=>None
		<ADC_ExternalTrigConv_T1_CC1=>TIM1_CC1
		<ADC_ExternalTrigConv_T1_CC2=>TIM1_CC2
		<ADC_ExternalTrigConv_T1_CC3=>TIM1_CC3
		<ADC_ExternalTrigConv_T2_CC2=>TIM2_CC2
		<ADC_ExternalTrigConv_T3_TRGO=>TIM3_TRGO
		<ADC_ExternalTrigConv_T4_CC4=>TIM4_CC4
		<ADC_ExternalTrigConv_Ext_IT11_TIM8_TRGO=>External/TIM8_TRGO		
	<code>$ADC3ExternalTrigConv$
	<list>Data Align
	    <ADC_DataAlign_Right=>Align Right
		<ADC_DataAlign_Left=>Align Left
	<code>$ADC3DataAlign$
	<input = integer[1-16]>Numbers of Regular Channel[1-16]
	<default>16
	<code>$ADC3OfChannel$
	<list>Inject Group Enable
	    <0=>Disable
		<1=>Enable
	<code>$ADC3InjEn$
</group>
<group>Regular Group Configuration
    <list>Channel Rank 1  
        <ADC_Channel_0=>Channel0
		<ADC_Channel_1=>Channel1
		<ADC_Channel_2=>Channel2
		<ADC_Channel_3=>Channel3
		<ADC_Channel_4=>Channel4
		<ADC_Channel_5=>Channel5
		<ADC_Channel_6=>Channel6
		<ADC_Channel_7=>Channel7
		<ADC_Channel_8=>Channel8
		<ADC_Channel_9=>Channel9
		<ADC_Channel_10=>Channel10
		<ADC_Channel_11=>Channel11
		<ADC_Channel_12=>Channel12
		<ADC_Channel_13=>Channel13
		<ADC_Channel_14=>Channel14
		<ADC_Channel_15=>Channel15
		<ADC_Channel_16=>Channel16
		<ADC_Channel_17=>Channel17
	<code>$ADC3RegCHRank1$
	<list>Rank 1 Sample Time
	    <ADC_SampleTime_1Cycles5=>1.5 cycles
		<ADC_SampleTime_7Cycles5=>7.5 cycles
		<ADC_SampleTime_13Cycles5=>13.5 cycles
		<ADC_SampleTime_28Cycles5=>28.5 cycles
		<ADC_SampleTime_41Cycles5=>41.5 cycles
		<ADC_SampleTime_55Cycles5=>55.5 cycles
		<ADC_SampleTime_71Cycles5=>71.5 cycles
		<ADC_SampleTime_239Cycles5=>239.5 cycles
	<code>$ADC3RugSampleTim1$
	<list>Channel Rank 2  
        <ADC_Channel_0=>Channel0
		<ADC_Channel_1=>Channel1
		<ADC_Channel_2=>Channel2
		<ADC_Channel_3=>Channel3
		<ADC_Channel_4=>Channel4
		<ADC_Channel_5=>Channel5
		<ADC_Channel_6=>Channel6
		<ADC_Channel_7=>Channel7
		<ADC_Channel_8=>Channel8
		<ADC_Channel_9=>Channel9
		<ADC_Channel_10=>Channel10
		<ADC_Channel_11=>Channel11
		<ADC_Channel_12=>Channel12
		<ADC_Channel_13=>Channel13
		<ADC_Channel_14=>Channel14
		<ADC_Channel_15=>Channel15
		<ADC_Channel_16=>Channel16
		<ADC_Channel_17=>Channel17
	<code>$ADC3RegCHRank2$
	<list>Rank 2 Sample Time
	    <ADC_SampleTime_1Cycles5=>1.5 cycles
		<ADC_SampleTime_7Cycles5=>7.5 cycles
		<ADC_SampleTime_13Cycles5=>13.5 cycles
		<ADC_SampleTime_28Cycles5=>28.5 cycles
		<ADC_SampleTime_41Cycles5=>41.5 cycles
		<ADC_SampleTime_55Cycles5=>55.5 cycles
		<ADC_SampleTime_71Cycles5=>71.5 cycles
		<ADC_SampleTime_239Cycles5=>239.5 cycles
	<code>$ADC3RugSampleTim2$
	<list>Channel Rank 3  
        <ADC_Channel_0=>Channel0
		<ADC_Channel_1=>Channel1
		<ADC_Channel_2=>Channel2
		<ADC_Channel_3=>Channel3
		<ADC_Channel_4=>Channel4
		<ADC_Channel_5=>Channel5
		<ADC_Channel_6=>Channel6
		<ADC_Channel_7=>Channel7
		<ADC_Channel_8=>Channel8
		<ADC_Channel_9=>Channel9
		<ADC_Channel_10=>Channel10
		<ADC_Channel_11=>Channel11
		<ADC_Channel_12=>Channel12
		<ADC_Channel_13=>Channel13
		<ADC_Channel_14=>Channel14
		<ADC_Channel_15=>Channel15
		<ADC_Channel_16=>Channel16
		<ADC_Channel_17=>Channel17
	<code>$ADC3RegCHRank3$
	<list>Rank 3 Sample Time
	    <ADC_SampleTime_1Cycles5=>1.5 cycles
		<ADC_SampleTime_7Cycles5=>7.5 cycles
		<ADC_SampleTime_13Cycles5=>13.5 cycles
		<ADC_SampleTime_28Cycles5=>28.5 cycles
		<ADC_SampleTime_41Cycles5=>41.5 cycles
		<ADC_SampleTime_55Cycles5=>55.5 cycles
		<ADC_SampleTime_71Cycles5=>71.5 cycles
		<ADC_SampleTime_239Cycles5=>239.5 cycles
	<code>$ADC3RugSampleTim3$
	<list>Channel Rank 4  
        <ADC_Channel_0=>Channel0
		<ADC_Channel_1=>Channel1
		<ADC_Channel_2=>Channel2
		<ADC_Channel_3=>Channel3
		<ADC_Channel_4=>Channel4
		<ADC_Channel_5=>Channel5
		<ADC_Channel_6=>Channel6
		<ADC_Channel_7=>Channel7
		<ADC_Channel_8=>Channel8
		<ADC_Channel_9=>Channel9
		<ADC_Channel_10=>Channel10
		<ADC_Channel_11=>Channel11
		<ADC_Channel_12=>Channel12
		<ADC_Channel_13=>Channel13
		<ADC_Channel_14=>Channel14
		<ADC_Channel_15=>Channel15
		<ADC_Channel_16=>Channel16
		<ADC_Channel_17=>Channel17
	<code>$ADC3RegCHRank4$
	<list>Rank 4 Sample Time
	    <ADC_SampleTime_1Cycles5=>1.5 cycles
		<ADC_SampleTime_7Cycles5=>7.5 cycles
		<ADC_SampleTime_13Cycles5=>13.5 cycles
		<ADC_SampleTime_28Cycles5=>28.5 cycles
		<ADC_SampleTime_41Cycles5=>41.5 cycles
		<ADC_SampleTime_55Cycles5=>55.5 cycles
		<ADC_SampleTime_71Cycles5=>71.5 cycles
		<ADC_SampleTime_239Cycles5=>239.5 cycles
	<code>$ADC3RugSampleTim4$
	<list>Channel Rank 5  
        <ADC_Channel_0=>Channel0
		<ADC_Channel_1=>Channel1
		<ADC_Channel_2=>Channel2
		<ADC_Channel_3=>Channel3
		<ADC_Channel_4=>Channel4
		<ADC_Channel_5=>Channel5
		<ADC_Channel_6=>Channel6
		<ADC_Channel_7=>Channel7
		<ADC_Channel_8=>Channel8
		<ADC_Channel_9=>Channel9
		<ADC_Channel_10=>Channel10
		<ADC_Channel_11=>Channel11
		<ADC_Channel_12=>Channel12
		<ADC_Channel_13=>Channel13
		<ADC_Channel_14=>Channel14
		<ADC_Channel_15=>Channel15
		<ADC_Channel_16=>Channel16
		<ADC_Channel_17=>Channel17
	<code>$ADC3RegCHRank5$
	<list>Rank 5 Sample Time
	    <ADC_SampleTime_1Cycles5=>1.5 cycles
		<ADC_SampleTime_7Cycles5=>7.5 cycles
		<ADC_SampleTime_13Cycles5=>13.5 cycles
		<ADC_SampleTime_28Cycles5=>28.5 cycles
		<ADC_SampleTime_41Cycles5=>41.5 cycles
		<ADC_SampleTime_55Cycles5=>55.5 cycles
		<ADC_SampleTime_71Cycles5=>71.5 cycles
		<ADC_SampleTime_239Cycles5=>239.5 cycles
	<code>$ADC3RugSampleTim5$
	<list>Channel Rank 6  
        <ADC_Channel_0=>Channel0
		<ADC_Channel_1=>Channel1
		<ADC_Channel_2=>Channel2
		<ADC_Channel_3=>Channel3
		<ADC_Channel_4=>Channel4
		<ADC_Channel_5=>Channel5
		<ADC_Channel_6=>Channel6
		<ADC_Channel_7=>Channel7
		<ADC_Channel_8=>Channel8
		<ADC_Channel_9=>Channel9
		<ADC_Channel_10=>Channel10
		<ADC_Channel_11=>Channel11
		<ADC_Channel_12=>Channel12
		<ADC_Channel_13=>Channel13
		<ADC_Channel_14=>Channel14
		<ADC_Channel_15=>Channel15
		<ADC_Channel_16=>Channel16
		<ADC_Channel_17=>Channel17
	<code>$ADC3RegCHRank6$
	<list>Rank 6 Sample Time
	    <ADC_SampleTime_1Cycles5=>1.5 cycles
		<ADC_SampleTime_7Cycles5=>7.5 cycles
		<ADC_SampleTime_13Cycles5=>13.5 cycles
		<ADC_SampleTime_28Cycles5=>28.5 cycles
		<ADC_SampleTime_41Cycles5=>41.5 cycles
		<ADC_SampleTime_55Cycles5=>55.5 cycles
		<ADC_SampleTime_71Cycles5=>71.5 cycles
		<ADC_SampleTime_239Cycles5=>239.5 cycles
	<code>$ADC3RugSampleTim6$
	<list>Channel Rank 7  
        <ADC_Channel_0=>Channel0
		<ADC_Channel_1=>Channel1
		<ADC_Channel_2=>Channel2
		<ADC_Channel_3=>Channel3
		<ADC_Channel_4=>Channel4
		<ADC_Channel_5=>Channel5
		<ADC_Channel_6=>Channel6
		<ADC_Channel_7=>Channel7
		<ADC_Channel_8=>Channel8
		<ADC_Channel_9=>Channel9
		<ADC_Channel_10=>Channel10
		<ADC_Channel_11=>Channel11
		<ADC_Channel_12=>Channel12
		<ADC_Channel_13=>Channel13
		<ADC_Channel_14=>Channel14
		<ADC_Channel_15=>Channel15
		<ADC_Channel_16=>Channel16
		<ADC_Channel_17=>Channel17
	<code>$ADC3RegCHRank7$
	<list>Rank 7 Sample Time
	    <ADC_SampleTime_1Cycles5=>1.5 cycles
		<ADC_SampleTime_7Cycles5=>7.5 cycles
		<ADC_SampleTime_13Cycles5=>13.5 cycles
		<ADC_SampleTime_28Cycles5=>28.5 cycles
		<ADC_SampleTime_41Cycles5=>41.5 cycles
		<ADC_SampleTime_55Cycles5=>55.5 cycles
		<ADC_SampleTime_71Cycles5=>71.5 cycles
		<ADC_SampleTime_239Cycles5=>239.5 cycles
	<code>$ADC3RugSampleTim7$
	<list>Channel Rank 8  
        <ADC_Channel_0=>Channel0
		<ADC_Channel_1=>Channel1
		<ADC_Channel_2=>Channel2
		<ADC_Channel_3=>Channel3
		<ADC_Channel_4=>Channel4
		<ADC_Channel_5=>Channel5
		<ADC_Channel_6=>Channel6
		<ADC_Channel_7=>Channel7
		<ADC_Channel_8=>Channel8
		<ADC_Channel_9=>Channel9
		<ADC_Channel_10=>Channel10
		<ADC_Channel_11=>Channel11
		<ADC_Channel_12=>Channel12
		<ADC_Channel_13=>Channel13
		<ADC_Channel_14=>Channel14
		<ADC_Channel_15=>Channel15
		<ADC_Channel_16=>Channel16
		<ADC_Channel_17=>Channel17
	<code>$ADC3RegCHRank8$
	<list>Rank 8 Sample Time
	    <ADC_SampleTime_1Cycles5=>1.5 cycles
		<ADC_SampleTime_7Cycles5=>7.5 cycles
		<ADC_SampleTime_13Cycles5=>13.5 cycles
		<ADC_SampleTime_28Cycles5=>28.5 cycles
		<ADC_SampleTime_41Cycles5=>41.5 cycles
		<ADC_SampleTime_55Cycles5=>55.5 cycles
		<ADC_SampleTime_71Cycles5=>71.5 cycles
		<ADC_SampleTime_239Cycles5=>239.5 cycles
	<code>$ADC3RugSampleTim8$
	<list>Channel Rank 9  
        <ADC_Channel_0=>Channel0
		<ADC_Channel_1=>Channel1
		<ADC_Channel_2=>Channel2
		<ADC_Channel_3=>Channel3
		<ADC_Channel_4=>Channel4
		<ADC_Channel_5=>Channel5
		<ADC_Channel_6=>Channel6
		<ADC_Channel_7=>Channel7
		<ADC_Channel_8=>Channel8
		<ADC_Channel_9=>Channel9
		<ADC_Channel_10=>Channel10
		<ADC_Channel_11=>Channel11
		<ADC_Channel_12=>Channel12
		<ADC_Channel_13=>Channel13
		<ADC_Channel_14=>Channel14
		<ADC_Channel_15=>Channel15
		<ADC_Channel_16=>Channel16
		<ADC_Channel_17=>Channel17
	<code>$ADC3RegCHRank9$
	<list>Rank 9 Sample Time
	    <ADC_SampleTime_1Cycles5=>1.5 cycles
		<ADC_SampleTime_7Cycles5=>7.5 cycles
		<ADC_SampleTime_13Cycles5=>13.5 cycles
		<ADC_SampleTime_28Cycles5=>28.5 cycles
		<ADC_SampleTime_41Cycles5=>41.5 cycles
		<ADC_SampleTime_55Cycles5=>55.5 cycles
		<ADC_SampleTime_71Cycles5=>71.5 cycles
		<ADC_SampleTime_239Cycles5=>239.5 cycles
	<code>$ADC3RugSampleTim9$
	<list>Channel Rank 10  
        <ADC_Channel_0=>Channel0
		<ADC_Channel_1=>Channel1
		<ADC_Channel_2=>Channel2
		<ADC_Channel_3=>Channel3
		<ADC_Channel_4=>Channel4
		<ADC_Channel_5=>Channel5
		<ADC_Channel_6=>Channel6
		<ADC_Channel_7=>Channel7
		<ADC_Channel_8=>Channel8
		<ADC_Channel_9=>Channel9
		<ADC_Channel_10=>Channel10
		<ADC_Channel_11=>Channel11
		<ADC_Channel_12=>Channel12
		<ADC_Channel_13=>Channel13
		<ADC_Channel_14=>Channel14
		<ADC_Channel_15=>Channel15
		<ADC_Channel_16=>Channel16
		<ADC_Channel_17=>Channel17
	<code>$ADC3RegCHRank10$
	<list>Rank 10 Sample Time
	    <ADC_SampleTime_1Cycles5=>1.5 cycles
		<ADC_SampleTime_7Cycles5=>7.5 cycles
		<ADC_SampleTime_13Cycles5=>13.5 cycles
		<ADC_SampleTime_28Cycles5=>28.5 cycles
		<ADC_SampleTime_41Cycles5=>41.5 cycles
		<ADC_SampleTime_55Cycles5=>55.5 cycles
		<ADC_SampleTime_71Cycles5=>71.5 cycles
		<ADC_SampleTime_239Cycles5=>239.5 cycles
	<code>$ADC3RugSampleTim10$
	<list>Channel Rank 11  
        <ADC_Channel_0=>Channel0
		<ADC_Channel_1=>Channel1
		<ADC_Channel_2=>Channel2
		<ADC_Channel_3=>Channel3
		<ADC_Channel_4=>Channel4
		<ADC_Channel_5=>Channel5
		<ADC_Channel_6=>Channel6
		<ADC_Channel_7=>Channel7
		<ADC_Channel_8=>Channel8
		<ADC_Channel_9=>Channel9
		<ADC_Channel_10=>Channel10
		<ADC_Channel_11=>Channel11
		<ADC_Channel_12=>Channel12
		<ADC_Channel_13=>Channel13
		<ADC_Channel_14=>Channel14
		<ADC_Channel_15=>Channel15
		<ADC_Channel_16=>Channel16
		<ADC_Channel_17=>Channel17
	<code>$ADC3RegCHRank11$
	<list>Rank 11 Sample Time
	    <ADC_SampleTime_1Cycles5=>1.5 cycles
		<ADC_SampleTime_7Cycles5=>7.5 cycles
		<ADC_SampleTime_13Cycles5=>13.5 cycles
		<ADC_SampleTime_28Cycles5=>28.5 cycles
		<ADC_SampleTime_41Cycles5=>41.5 cycles
		<ADC_SampleTime_55Cycles5=>55.5 cycles
		<ADC_SampleTime_71Cycles5=>71.5 cycles
		<ADC_SampleTime_239Cycles5=>239.5 cycles
	<code>$ADC3RugSampleTim11$
	<list>Channel Rank 12  
        <ADC_Channel_0=>Channel0
		<ADC_Channel_1=>Channel1
		<ADC_Channel_2=>Channel2
		<ADC_Channel_3=>Channel3
		<ADC_Channel_4=>Channel4
		<ADC_Channel_5=>Channel5
		<ADC_Channel_6=>Channel6
		<ADC_Channel_7=>Channel7
		<ADC_Channel_8=>Channel8
		<ADC_Channel_9=>Channel9
		<ADC_Channel_10=>Channel10
		<ADC_Channel_11=>Channel11
		<ADC_Channel_12=>Channel12
		<ADC_Channel_13=>Channel13
		<ADC_Channel_14=>Channel14
		<ADC_Channel_15=>Channel15
		<ADC_Channel_16=>Channel16
		<ADC_Channel_17=>Channel17
	<code>$ADC3RegCHRank12$
	<list>Rank 12 Sample Time
	    <ADC_SampleTime_1Cycles5=>1.5 cycles
		<ADC_SampleTime_7Cycles5=>7.5 cycles
		<ADC_SampleTime_13Cycles5=>13.5 cycles
		<ADC_SampleTime_28Cycles5=>28.5 cycles
		<ADC_SampleTime_41Cycles5=>41.5 cycles
		<ADC_SampleTime_55Cycles5=>55.5 cycles
		<ADC_SampleTime_71Cycles5=>71.5 cycles
		<ADC_SampleTime_239Cycles5=>239.5 cycles
	<code>$ADC3RugSampleTim12$
	<list>Channel Rank 13  
        <ADC_Channel_0=>Channel0
		<ADC_Channel_1=>Channel1
		<ADC_Channel_2=>Channel2
		<ADC_Channel_3=>Channel3
		<ADC_Channel_4=>Channel4
		<ADC_Channel_5=>Channel5
		<ADC_Channel_6=>Channel6
		<ADC_Channel_7=>Channel7
		<ADC_Channel_8=>Channel8
		<ADC_Channel_9=>Channel9
		<ADC_Channel_10=>Channel10
		<ADC_Channel_11=>Channel11
		<ADC_Channel_12=>Channel12
		<ADC_Channel_13=>Channel13
		<ADC_Channel_14=>Channel14
		<ADC_Channel_15=>Channel15
		<ADC_Channel_16=>Channel16
		<ADC_Channel_17=>Channel17
	<code>$ADC3RegCHRank13$
	<list>Rank 13 Sample Time
	    <ADC_SampleTime_1Cycles5=>1.5 cycles
		<ADC_SampleTime_7Cycles5=>7.5 cycles
		<ADC_SampleTime_13Cycles5=>13.5 cycles
		<ADC_SampleTime_28Cycles5=>28.5 cycles
		<ADC_SampleTime_41Cycles5=>41.5 cycles
		<ADC_SampleTime_55Cycles5=>55.5 cycles
		<ADC_SampleTime_71Cycles5=>71.5 cycles
		<ADC_SampleTime_239Cycles5=>239.5 cycles
	<code>$ADC3RugSampleTim13$
	<list>Channel Rank 14  
        <ADC_Channel_0=>Channel0
		<ADC_Channel_1=>Channel1
		<ADC_Channel_2=>Channel2
		<ADC_Channel_3=>Channel3
		<ADC_Channel_4=>Channel4
		<ADC_Channel_5=>Channel5
		<ADC_Channel_6=>Channel6
		<ADC_Channel_7=>Channel7
		<ADC_Channel_8=>Channel8
		<ADC_Channel_9=>Channel9
		<ADC_Channel_10=>Channel10
		<ADC_Channel_11=>Channel11
		<ADC_Channel_12=>Channel12
		<ADC_Channel_13=>Channel13
		<ADC_Channel_14=>Channel14
		<ADC_Channel_15=>Channel15
		<ADC_Channel_16=>Channel16
		<ADC_Channel_17=>Channel17
	<code>$ADC3RegCHRank14$
	<list>Rank 14 Sample Time
	    <ADC_SampleTime_1Cycles5=>1.5 cycles
		<ADC_SampleTime_7Cycles5=>7.5 cycles
		<ADC_SampleTime_13Cycles5=>13.5 cycles
		<ADC_SampleTime_28Cycles5=>28.5 cycles
		<ADC_SampleTime_41Cycles5=>41.5 cycles
		<ADC_SampleTime_55Cycles5=>55.5 cycles
		<ADC_SampleTime_71Cycles5=>71.5 cycles
		<ADC_SampleTime_239Cycles5=>239.5 cycles
	<code>$ADC3RugSampleTim14$
	<list>Channel Rank 15  
        <ADC_Channel_0=>Channel0
		<ADC_Channel_1=>Channel1
		<ADC_Channel_2=>Channel2
		<ADC_Channel_3=>Channel3
		<ADC_Channel_4=>Channel4
		<ADC_Channel_5=>Channel5
		<ADC_Channel_6=>Channel6
		<ADC_Channel_7=>Channel7
		<ADC_Channel_8=>Channel8
		<ADC_Channel_9=>Channel9
		<ADC_Channel_10=>Channel10
		<ADC_Channel_11=>Channel11
		<ADC_Channel_12=>Channel12
		<ADC_Channel_13=>Channel13
		<ADC_Channel_14=>Channel14
		<ADC_Channel_15=>Channel15
		<ADC_Channel_16=>Channel16
		<ADC_Channel_17=>Channel17
	<code>$ADC3RegCHRank15$
	<list>Rank 15 Sample Time
	    <ADC_SampleTime_1Cycles5=>1.5 cycles
		<ADC_SampleTime_7Cycles5=>7.5 cycles
		<ADC_SampleTime_13Cycles5=>13.5 cycles
		<ADC_SampleTime_28Cycles5=>28.5 cycles
		<ADC_SampleTime_41Cycles5=>41.5 cycles
		<ADC_SampleTime_55Cycles5=>55.5 cycles
		<ADC_SampleTime_71Cycles5=>71.5 cycles
		<ADC_SampleTime_239Cycles5=>239.5 cycles
	<code>$ADC3RugSampleTim15$
	<list>Channel Rank 16  
        <ADC_Channel_0=>Channel0
		<ADC_Channel_1=>Channel1
		<ADC_Channel_2=>Channel2
		<ADC_Channel_3=>Channel3
		<ADC_Channel_4=>Channel4
		<ADC_Channel_5=>Channel5
		<ADC_Channel_6=>Channel6
		<ADC_Channel_7=>Channel7
		<ADC_Channel_8=>Channel8
		<ADC_Channel_9=>Channel9
		<ADC_Channel_10=>Channel10
		<ADC_Channel_11=>Channel11
		<ADC_Channel_12=>Channel12
		<ADC_Channel_13=>Channel13
		<ADC_Channel_14=>Channel14
		<ADC_Channel_15=>Channel15
		<ADC_Channel_16=>Channel16
		<ADC_Channel_17=>Channel17
	<code>$ADC3RegCHRank16$	
	<list>Rank 16 Sample Time
	    <ADC_SampleTime_1Cycles5=>1.5 cycles
		<ADC_SampleTime_7Cycles5=>7.5 cycles
		<ADC_SampleTime_13Cycles5=>13.5 cycles
		<ADC_SampleTime_28Cycles5=>28.5 cycles
		<ADC_SampleTime_41Cycles5=>41.5 cycles
		<ADC_SampleTime_55Cycles5=>55.5 cycles
		<ADC_SampleTime_71Cycles5=>71.5 cycles
		<ADC_SampleTime_239Cycles5=>239.5 cycles
	<code>$ADC3RugSampleTim16$
	<list>Discontinuous Mode Enable
	    <ENABLE=>Enable
		<DISABLE=>Disable
	<code>$RDisconEn$
	<input = integer[1-8]>Discontinuous Channel Count Value[1-8]
	<default>8
	<code>$RCHCVal$
</group>
<group>Inject Group Configuration   
	<input = integer[1-4]>Sequencer Length Configures 
	    <default>4
	<code>$InSeqLen$
	<list>Inject Channel Rank 1
	    <ADC_Channel_0=>Channel 0
		<ADC_Channel_1=>Channel 1
		<ADC_Channel_2=>Channel 2
		<ADC_Channel_3=>Channel 3
		<ADC_Channel_4=>Channel 4
		<ADC_Channel_5=>Channel 5
		<ADC_Channel_6=>Channel 6
		<ADC_Channel_7=>Channel 7
		<ADC_Channel_8=>Channel 8
		<ADC_Channel_9=>Channel 9
		<ADC_Channel_10=>Channel 10
		<ADC_Channel_11=>Channel 11
		<ADC_Channel_12=>Channel 12
		<ADC_Channel_13=>Channel 13
		<ADC_Channel_14=>Channel 14
		<ADC_Channel_15=>Channel 15
		<ADC_Channel_16=>Channel 16
		<ADC_Channel_17=>Channel 17
	<code>$ADC3InCHR1$
	<list>Inject Rank 1 Sample Time
	    <ADC_SampleTime_1Cycles5=>1.5 cycles
		<ADC_SampleTime_7Cycles5=>7.5 cycles
		<ADC_SampleTime_13Cycles5=>13.5 cycles
		<ADC_SampleTime_28Cycles5=>28.5 cycles
		<ADC_SampleTime_41Cycles5=>41.5 cycles
		<ADC_SampleTime_55Cycles5=>55.5 cycles
		<ADC_SampleTime_71Cycles5=>71.5 cycles
		<ADC_SampleTime_239Cycles5=>239.5 cycles
    <code>$ADC3InRSampleTim1$
	<list>Inject Channel Rank 2
	    <ADC_Channel_0=>Channel 0
		<ADC_Channel_1=>Channel 1
		<ADC_Channel_2=>Channel 2
		<ADC_Channel_3=>Channel 3
		<ADC_Channel_4=>Channel 4
		<ADC_Channel_5=>Channel 5
		<ADC_Channel_6=>Channel 6
		<ADC_Channel_7=>Channel 7
		<ADC_Channel_8=>Channel 8
		<ADC_Channel_9=>Channel 9
		<ADC_Channel_10=>Channel 10
		<ADC_Channel_11=>Channel 11
		<ADC_Channel_12=>Channel 12
		<ADC_Channel_13=>Channel 13
		<ADC_Channel_14=>Channel 14
		<ADC_Channel_15=>Channel 15
		<ADC_Channel_16=>Channel 16
		<ADC_Channel_17=>Channel 17
	<code>$ADC3InCHR2$
	<list>Inject Rank 2 Sample Time
	    <ADC_SampleTime_1Cycles5=>1.5 cycles
		<ADC_SampleTime_7Cycles5=>7.5 cycles
		<ADC_SampleTime_13Cycles5=>13.5 cycles
		<ADC_SampleTime_28Cycles5=>28.5 cycles
		<ADC_SampleTime_41Cycles5=>41.5 cycles
		<ADC_SampleTime_55Cycles5=>55.5 cycles
		<ADC_SampleTime_71Cycles5=>71.5 cycles
		<ADC_SampleTime_239Cycles5=>239.5 cycles
    <code>$ADC3InRSampleTim2$
	<list>Inject Channel Rank 3
	    <ADC_Channel_0=>Channel 0
		<ADC_Channel_1=>Channel 1
		<ADC_Channel_2=>Channel 2
		<ADC_Channel_3=>Channel 3
		<ADC_Channel_4=>Channel 4
		<ADC_Channel_5=>Channel 5
		<ADC_Channel_6=>Channel 6
		<ADC_Channel_7=>Channel 7
		<ADC_Channel_8=>Channel 8
		<ADC_Channel_9=>Channel 9
		<ADC_Channel_10=>Channel 10
		<ADC_Channel_11=>Channel 11
		<ADC_Channel_12=>Channel 12
		<ADC_Channel_13=>Channel 13
		<ADC_Channel_14=>Channel 14
		<ADC_Channel_15=>Channel 15
		<ADC_Channel_16=>Channel 16
		<ADC_Channel_17=>Channel 17
	<code>$ADC3InCHR3$
	<list>Inject Rank 3 Sample Time
	    <ADC_SampleTime_1Cycles5=>1.5 cycles
		<ADC_SampleTime_7Cycles5=>7.5 cycles
		<ADC_SampleTime_13Cycles5=>13.5 cycles
		<ADC_SampleTime_28Cycles5=>28.5 cycles
		<ADC_SampleTime_41Cycles5=>41.5 cycles
		<ADC_SampleTime_55Cycles5=>55.5 cycles
		<ADC_SampleTime_71Cycles5=>71.5 cycles
		<ADC_SampleTime_239Cycles5=>239.5 cycles
    <code>$ADC3InRSampleTim3$
	<list>Inject Channel Rank 4
	    <ADC_Channel_0=>Channel 0
		<ADC_Channel_1=>Channel 1
		<ADC_Channel_2=>Channel 2
		<ADC_Channel_3=>Channel 3
		<ADC_Channel_4=>Channel 4
		<ADC_Channel_5=>Channel 5
		<ADC_Channel_6=>Channel 6
		<ADC_Channel_7=>Channel 7
		<ADC_Channel_8=>Channel 8
		<ADC_Channel_9=>Channel 9
		<ADC_Channel_10=>Channel 10
		<ADC_Channel_11=>Channel 11
		<ADC_Channel_12=>Channel 12
		<ADC_Channel_13=>Channel 13
		<ADC_Channel_14=>Channel 14
		<ADC_Channel_15=>Channel 15
		<ADC_Channel_16=>Channel 16
		<ADC_Channel_17=>Channel 17
	<code>$ADC3InCHR4$
	<list>Inject Rank 4 Sample Time
	    <ADC_SampleTime_1Cycles5=>1.5 cycles
		<ADC_SampleTime_7Cycles5=>7.5 cycles
		<ADC_SampleTime_13Cycles5=>13.5 cycles
		<ADC_SampleTime_28Cycles5=>28.5 cycles
		<ADC_SampleTime_41Cycles5=>41.5 cycles
		<ADC_SampleTime_55Cycles5=>55.5 cycles
		<ADC_SampleTime_71Cycles5=>71.5 cycles
		<ADC_SampleTime_239Cycles5=>239.5 cycles
    <code>$ADC3InRSampleTim4$ 
    <list>Automatic Injected Conversion After Regular Enable
	    <DISABLE=>Disable
		<ENABLE=>Enable
	<code>$AutoInjEn$
	<list>discontinuous mode Enable	    
		<DISABLE=>Disable
		<ENABLE=>Enable
	<code>$InDisConEn$
	<list>External Trigger Enable
		<DISABLE=>Disable	
	    <ENABLE=>Enable
	<code>$INjIntEx$
	<list>External Trigger Configuration
	    <ADC_ExternalTrigInjecConv_T1_TRGO=>Timer1 TRGO
	    <ADC_ExternalTrigInjecConv_T1_CC4=>Timer1 capture compare4
		<ADC_ExternalTrigInjecConv_T4_CC3=>Timer4 capture compare3
		<ADC_ExternalTrigInjecConv_T8_CC2=>Timer8 capture compare2
		<ADC_ExternalTrigInjecConv_T8_CC4=>Timer8 capture compare4
		<ADC_ExternalTrigInjecConv_T5_TRGO=>Timer5  TRGO 
		<ADC_ExternalTrigInjecConv_T5_CC4=>Timer5 capture compare4
		<ADC_ExternalTrigInjecConv_None=>Injected Conversion Start
	<code>$InjExTr$  	
</group>
<group>ADC3 Interrupts
    <list>ADC3 Interrupts Enable
	    <0=>Disable
        <1=>Enable
    <code>$ADC3InInter$		
</group>
<group=or>ADC3 Interrupt Configure
    <list>EOC
        <0=>Disable	
	    <ADC_IT_EOC=>Enable		
	<list>AWD
	    <0=>Disable
		<ADC_IT_AWD=>Enable		
	<list>JEOC
	    <0=>Disable
		<ADC_IT_JEOC=>Enable		
	<code>$ADC3IntS$
</group>
<group>Calibration
    <list>Calibration Enable
	    <0=>Disable
		<1=>Enable
	<code>$CaliEn$
</group>
<group>DMA
    <list>DMA Enable
        <0=>Disable
	    <1=>Enable
	<code>$ADC3DMAE$	
</group>
<group>Analog WDG 
    <list>Analog WDG Enable
	     <1=>Enable
         <0=>Disable         
    <code>$ADC3AWDGEn$		 
    <list>WDG Channel Type 
	     <ADC_AnalogWatchdog_SingleRegEnable=>Single Regular Channel
		 <ADC_AnalogWatchdog_SingleInjecEnable=>Single Injected Channel
		 <ADC_AnalogWatchdog_SingleRegOrInjecEnable=>Single Injected or Regular Channel
		 <ADC_AnalogWatchdog_AllRegEnable=>All Regular Channel
		 <ADC_AnalogWatchdog_AllInjecEnable=>All Injected Channel
		 <ADC_AnalogWatchdog_AllRegAllInjecEnable=>All Injected And Regular Channel
		 <ADC_AnalogWatchdog_None=>No Channel
	<code>$ADC3AWDGCH$
	<input = integer[0-4095]>High Threshold[0-4095]
	     <code>$HThreshold$
	<input = integer[0-4095]>Low Threshold[0-4095]
	     <code>$LThreshold$	 
	<list>Single Guarded Channel Configure
         <ADC_Channel_0=>Channel 0
		 <ADC_Channel_1=>Channel 1
		 <ADC_Channel_2=>Channel 2
		 <ADC_Channel_3=>Channel 3
		 <ADC_Channel_4=>Channel 4
		 <ADC_Channel_5=>Channel 5
		 <ADC_Channel_6=>Channel 6
		 <ADC_Channel_7=>Channel 7
		 <ADC_Channel_8=>Channel 8
		 <ADC_Channel_9=>Channel 9
		 <ADC_Channel_10=>Channel 10
		 <ADC_Channel_11=>Channel 11
		 <ADC_Channel_12=>Channel 12
		 <ADC_Channel_13=>Channel 13
		 <ADC_Channel_14=>Channel 14
		 <ADC_Channel_15=>Channel 15
		 <ADC_Channel_16=>Channel 16
		 <ADC_Channel_17=>Channel 17
    <code>$AWDGSCH$		 	     
</group>
<group>Temperature Sensor/Vrefint Channel 
    <list>Temperature Sensor/Vrefint Channel Enable
        <0=>Disable
	    <1=>Enable
	<code>$ADC3TempVreE$
</group>
<group=pin>Pin used
      <list>ADC3_IN0
           <DISABLE=>Disable
           <ADC3_IN0=>Enable
           <code>$ADC3_IN0$
      <list>ADC3_IN1
           <DISABLE=>Disable
           <ADC3_IN1=>Enable
           <code>$ADC3_IN1$
      <list>ADC3_IN2
           <DISABLE=>Disable
           <ADC3_IN2=>Enable
           <code>$ADC3_IN2$
      <list>ADC3_IN3
           <DISABLE=>Disable
           <ADC3_IN3=>Enable
           <code>$ADC3_IN3$
      <list>ADC3_IN4
           <DISABLE=>Disable
           <ADC3_IN4=>Enable
           <code>$ADC3_IN4$
      <list>ADC3_IN5
           <DISABLE=>Disable
           <ADC3_IN5=>Enable
           <code>$ADC3_IN5$
      <list>ADC3_IN6
           <DISABLE=>Disable
           <ADC3_IN6=>Enable
           <code>$ADC3_IN6$
      <list>ADC3_IN7
           <DISABLE=>Disable
           <ADC3_IN7=>Enable
           <code>$ADC3_IN7$
      <list>ADC3_IN8
           <DISABLE=>Disable
           <ADC3_IN8=>Enable
           <code>$ADC3_IN8$
      <list>ADC3_IN9
           <DISABLE=>Disable
           <ADC3_IN9=>Enable
           <code>$ADC3_IN9$
</group>


<dep>
    <type>state
	<trigger>Analog WDG->Analog WDG Enable = Disable
	<action>Analog WDG->WDG Channel Type = disable
	<action>Analog WDG->High Threshold[0-4095] = disable
	<action>Analog WDG->Low Threshold[0-4095] = disable
	<action>Analog WDG->Single Guarded Channel Configure = disable
	<action>ADC3 Interrupt Configure->AWD = disable
</dep>
<dep>
      <type>state
	  <trigger>Analog WDG->WDG Channel Type = All Regular Channel
	  <action>Analog WDG->Single Guarded Channel Configure = disable
</dep>
<dep>
      <type>state
	  <trigger>Analog WDG->WDG Channel Type = All Injected Channel
	  <action>Analog WDG->Single Guarded Channel Configure = disable
</dep>
<dep>
      <type>state
	  <trigger>Analog WDG->WDG Channel Type = All Injected And Regular Channel
	  <action>Analog WDG->Single Guarded Channel Configure = disable
</dep>
<dep>
      <type>state
	  <trigger>Analog WDG->WDG Channel Type = No Channel
	  <action>Analog WDG->Single Guarded Channel Configure = disable
	  <action>Analog WDG->High Threshold[0-4095] = disable
	  <action>Analog WDG->Low Threshold[0-4095] = disable
	  <action>ADC3 Interrupt Configure->AWD = disable	  
</dep>
<dep>
      <type>state
	  <trigger>Regular Group Configuration->Discontinuous Mode Enable = Disable
	  <action>Regular Group Configuration->Discontinuous Channel Count Value[1-8] = disable
</dep>
<dep>
	<type>state
    <trigger>Basic Configuration->Numbers of Regular Channel[1-16] = 1
    <action>Regular Group Configuration->Channel Rank 2 = disable
    <action>Regular Group Configuration->Rank 2 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 3 = disable
    <action>Regular Group Configuration->Rank 3 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 4 = disable
    <action>Regular Group Configuration->Rank 4 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 5 = disable
    <action>Regular Group Configuration->Rank 5 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 6 = disable
    <action>Regular Group Configuration->Rank 6 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 7 = disable
    <action>Regular Group Configuration->Rank 7 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 8 = disable
    <action>Regular Group Configuration->Rank 8 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 9 = disable
    <action>Regular Group Configuration->Rank 9 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 10 = disable
    <action>Regular Group Configuration->Rank 10 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 11 = disable
    <action>Regular Group Configuration->Rank 11 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 12 = disable
    <action>Regular Group Configuration->Rank 12 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 13 = disable
    <action>Regular Group Configuration->Rank 13 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 14 = disable
    <action>Regular Group Configuration->Rank 14 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 15 = disable
    <action>Regular Group Configuration->Rank 15 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 16 = disable
    <action>Regular Group Configuration->Rank 16 Sample Time = disable	
</dep>
<dep>
	<type>state
    <trigger>Basic Configuration->Numbers of Regular Channel[1-16] = 2
    <action>Regular Group Configuration->Channel Rank 3 = disable
    <action>Regular Group Configuration->Rank 3 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 4 = disable
    <action>Regular Group Configuration->Rank 4 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 5 = disable
    <action>Regular Group Configuration->Rank 5 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 6 = disable
    <action>Regular Group Configuration->Rank 6 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 7 = disable
    <action>Regular Group Configuration->Rank 7 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 8 = disable
    <action>Regular Group Configuration->Rank 8 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 9 = disable
    <action>Regular Group Configuration->Rank 9 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 10 = disable
    <action>Regular Group Configuration->Rank 10 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 11 = disable
    <action>Regular Group Configuration->Rank 11 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 12 = disable
    <action>Regular Group Configuration->Rank 12 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 13 = disable
    <action>Regular Group Configuration->Rank 13 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 14 = disable
    <action>Regular Group Configuration->Rank 14 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 15 = disable
    <action>Regular Group Configuration->Rank 15 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 16 = disable
    <action>Regular Group Configuration->Rank 16 Sample Time = disable	
</dep>
<dep>
	<type>state
    <trigger>Basic Configuration->Numbers of Regular Channel[1-16] = 3
    <action>Regular Group Configuration->Channel Rank 4 = disable
    <action>Regular Group Configuration->Rank 4 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 5 = disable
    <action>Regular Group Configuration->Rank 5 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 6 = disable
    <action>Regular Group Configuration->Rank 6 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 7 = disable
    <action>Regular Group Configuration->Rank 7 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 8 = disable
    <action>Regular Group Configuration->Rank 8 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 9 = disable
    <action>Regular Group Configuration->Rank 9 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 10 = disable
    <action>Regular Group Configuration->Rank 10 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 11 = disable
    <action>Regular Group Configuration->Rank 11 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 12 = disable
    <action>Regular Group Configuration->Rank 12 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 13 = disable
    <action>Regular Group Configuration->Rank 13 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 14 = disable
    <action>Regular Group Configuration->Rank 14 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 15 = disable
    <action>Regular Group Configuration->Rank 15 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 16 = disable
    <action>Regular Group Configuration->Rank 16 Sample Time = disable	
</dep>
<dep>
	<type>state
    <trigger>Basic Configuration->Numbers of Regular Channel[1-16] = 4
    <action>Regular Group Configuration->Channel Rank 5 = disable
    <action>Regular Group Configuration->Rank 5 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 6 = disable
    <action>Regular Group Configuration->Rank 6 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 7 = disable
    <action>Regular Group Configuration->Rank 7 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 8 = disable
    <action>Regular Group Configuration->Rank 8 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 9 = disable
    <action>Regular Group Configuration->Rank 9 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 10 = disable
    <action>Regular Group Configuration->Rank 10 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 11 = disable
    <action>Regular Group Configuration->Rank 11 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 12 = disable
    <action>Regular Group Configuration->Rank 12 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 13 = disable
    <action>Regular Group Configuration->Rank 13 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 14 = disable
    <action>Regular Group Configuration->Rank 14 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 15 = disable
    <action>Regular Group Configuration->Rank 15 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 16 = disable
    <action>Regular Group Configuration->Rank 16 Sample Time = disable	
</dep>
<dep>
	<type>state
    <trigger>Basic Configuration->Numbers of Regular Channel[1-16] = 5
    <action>Regular Group Configuration->Channel Rank 6 = disable
    <action>Regular Group Configuration->Rank 6 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 7 = disable
    <action>Regular Group Configuration->Rank 7 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 8 = disable
    <action>Regular Group Configuration->Rank 8 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 9 = disable
    <action>Regular Group Configuration->Rank 9 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 10 = disable
    <action>Regular Group Configuration->Rank 10 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 11 = disable
    <action>Regular Group Configuration->Rank 11 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 12 = disable
    <action>Regular Group Configuration->Rank 12 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 13 = disable
    <action>Regular Group Configuration->Rank 13 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 14 = disable
    <action>Regular Group Configuration->Rank 14 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 15 = disable
    <action>Regular Group Configuration->Rank 15 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 16 = disable
    <action>Regular Group Configuration->Rank 16 Sample Time = disable	
</dep>
<dep>
	<type>state
    <trigger>Basic Configuration->Numbers of Regular Channel[1-16] = 6
    <action>Regular Group Configuration->Channel Rank 7 = disable
    <action>Regular Group Configuration->Rank 7 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 8 = disable
    <action>Regular Group Configuration->Rank 8 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 9 = disable
    <action>Regular Group Configuration->Rank 9 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 10 = disable
    <action>Regular Group Configuration->Rank 10 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 11 = disable
    <action>Regular Group Configuration->Rank 11 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 12 = disable
    <action>Regular Group Configuration->Rank 12 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 13 = disable
    <action>Regular Group Configuration->Rank 13 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 14 = disable
    <action>Regular Group Configuration->Rank 14 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 15 = disable
    <action>Regular Group Configuration->Rank 15 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 16 = disable
    <action>Regular Group Configuration->Rank 16 Sample Time = disable	
</dep>
<dep>
	<type>state
    <trigger>Basic Configuration->Numbers of Regular Channel[1-16] = 7
    <action>Regular Group Configuration->Channel Rank 8 = disable
    <action>Regular Group Configuration->Rank 8 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 9 = disable
    <action>Regular Group Configuration->Rank 9 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 10 = disable
    <action>Regular Group Configuration->Rank 10 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 11 = disable
    <action>Regular Group Configuration->Rank 11 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 12 = disable
    <action>Regular Group Configuration->Rank 12 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 13 = disable
    <action>Regular Group Configuration->Rank 13 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 14 = disable
    <action>Regular Group Configuration->Rank 14 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 15 = disable
    <action>Regular Group Configuration->Rank 15 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 16 = disable
    <action>Regular Group Configuration->Rank 16 Sample Time = disable	
</dep>
<dep>
	<type>state
    <trigger>Basic Configuration->Numbers of Regular Channel[1-16] = 8
    <action>Regular Group Configuration->Channel Rank 9 = disable
    <action>Regular Group Configuration->Rank 9 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 10 = disable
    <action>Regular Group Configuration->Rank 10 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 11 = disable
    <action>Regular Group Configuration->Rank 11 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 12 = disable
    <action>Regular Group Configuration->Rank 12 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 13 = disable
    <action>Regular Group Configuration->Rank 13 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 14 = disable
    <action>Regular Group Configuration->Rank 14 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 15 = disable
    <action>Regular Group Configuration->Rank 15 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 16 = disable
    <action>Regular Group Configuration->Rank 16 Sample Time = disable	
</dep>
<dep>
	<type>state
    <trigger>Basic Configuration->Numbers of Regular Channel[1-16] =9
    <action>Regular Group Configuration->Channel Rank 10 = disable
    <action>Regular Group Configuration->Rank 10 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 11 = disable
    <action>Regular Group Configuration->Rank 11 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 12 = disable
    <action>Regular Group Configuration->Rank 12 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 13 = disable
    <action>Regular Group Configuration->Rank 13 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 14 = disable
    <action>Regular Group Configuration->Rank 14 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 15 = disable
    <action>Regular Group Configuration->Rank 15 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 16 = disable
    <action>Regular Group Configuration->Rank 16 Sample Time = disable	
</dep>
<dep>
	<type>state
    <trigger>Basic Configuration->Numbers of Regular Channel[1-16] =10
    <action>Regular Group Configuration->Channel Rank 11 = disable
    <action>Regular Group Configuration->Rank 11 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 12 = disable
    <action>Regular Group Configuration->Rank 12 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 13 = disable
    <action>Regular Group Configuration->Rank 13 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 14 = disable
    <action>Regular Group Configuration->Rank 14 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 15 = disable
    <action>Regular Group Configuration->Rank 15 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 16 = disable
    <action>Regular Group Configuration->Rank 16 Sample Time = disable	
</dep>
<dep>
	<type>state
    <trigger>Basic Configuration->Numbers of Regular Channel[1-16] =11
    <action>Regular Group Configuration->Channel Rank 12 = disable
    <action>Regular Group Configuration->Rank 12 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 13 = disable
    <action>Regular Group Configuration->Rank 13 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 14 = disable
    <action>Regular Group Configuration->Rank 14 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 15 = disable
    <action>Regular Group Configuration->Rank 15 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 16 = disable
    <action>Regular Group Configuration->Rank 16 Sample Time = disable	
</dep>
<dep>
	<type>state
    <trigger>Basic Configuration->Numbers of Regular Channel[1-16] =12
    <action>Regular Group Configuration->Channel Rank 13 = disable
    <action>Regular Group Configuration->Rank 13 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 14 = disable
    <action>Regular Group Configuration->Rank 14 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 15 = disable
    <action>Regular Group Configuration->Rank 15 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 16 = disable
    <action>Regular Group Configuration->Rank 16 Sample Time = disable	
</dep>
<dep>
	<type>state
    <trigger>Basic Configuration->Numbers of Regular Channel[1-16] =13
    <action>Regular Group Configuration->Channel Rank 14 = disable
    <action>Regular Group Configuration->Rank 14 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 15 = disable
    <action>Regular Group Configuration->Rank 15 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 16 = disable
    <action>Regular Group Configuration->Rank 16 Sample Time = disable	
</dep>
<dep>
	<type>state
    <trigger>Basic Configuration->Numbers of Regular Channel[1-16] =14
    <action>Regular Group Configuration->Channel Rank 15 = disable
    <action>Regular Group Configuration->Rank 15 Sample Time = disable
    <action>Regular Group Configuration->Channel Rank 16 = disable
    <action>Regular Group Configuration->Rank 16 Sample Time = disable	
</dep>
<dep>
	<type>state
    <trigger>Basic Configuration->Numbers of Regular Channel[1-16] =15
    <action>Regular Group Configuration->Channel Rank 16 = disable
    <action>Regular Group Configuration->Rank 16 Sample Time = disable	
</dep>
<dep>
    <type>state
	<trigger>Inject Group Configuration->External Trigger Enable = Disable
	<action>Inject Group Configuration->External Trigger Configuration = Disable
</dep>
<dep>
    <type>state
	<trigger>Inject Group Configuration->Sequencer Length Configures = 1
	<action>Inject Group Configuration->Inject Channel Rank 2 = disable
	<action>Inject Group Configuration->Inject Rank 2 Sample Time = disable
	<action>Inject Group Configuration->Inject Channel Rank 3 = disable
	<action>Inject Group Configuration->Inject Rank 3 Sample Time = disable
	<action>Inject Group Configuration->Inject Channel Rank 4 = disable
	<action>Inject Group Configuration->Inject Rank 4 Sample Time = disable
</dep>
<dep>
    <type>state
	<trigger>Inject Group Configuration->Sequencer Length Configures = 2
	<action>Inject Group Configuration->Inject Channel Rank 3 = disable
	<action>Inject Group Configuration->Inject Rank 3 Sample Time = disable
	<action>Inject Group Configuration->Inject Channel Rank 4 = disable
	<action>Inject Group Configuration->Inject Rank 4 Sample Time = disable
</dep>
<dep>
    <type>state
	<trigger>Inject Group Configuration->Sequencer Length Configures = 3
	<action>Inject Group Configuration->Inject Channel Rank 4 = disable
	<action>Inject Group Configuration->Inject Rank 4 Sample Time = disable
</dep>
<dep>
    <type>state
	<trigger>ADC3 Interrupts->ADC3 Interrupts Enable = Disable
	<action>ADC3 Interrupt Configure = disable
</dep>
<dep>
    <type>state
	<trigger>Basic Configuration->Inject Group Enable = Disable
	<action>Inject Group Configuration = disable
</dep>

******************************<<config wizard end>>***************************/
#include "stm32f10x.h"
#include "stm32f10x_rcc.h"
#include "stm32f10x_adc.h"
#include "stm32f10x_gpio.h"
void RCC_Configuration(void);
void GPIO_Configuration(void);


void ADC3_Init()
{
   ADC_InitTypeDef ADC_InitStructure;
   // Deinitialize the ADC peripheral registers to their default reset values
   //
   ADC_DeInit(ADC3);
   // Clock Configuration
   // 
   RCC_Configuration();
   // Config AFIO mode as ADC function
   //
   GPIO_Configuration();
   //Config ADC3
   //
   ADC_InitStructure.ADC_Mode = $ADC3Mode$;
   ADC_InitStructure.ADC_ScanConvMode = $ADC3ScanConvMode$;
   ADC_InitStructure.ADC_ContinuousConvMode = $ADC3ContinuousConvMode$;
   ADC_InitStructure.ADC_ExternalTrigConv = $ADC3ExternalTrigConv$;
   ADC_InitStructure.ADC_DataAlign = $ADC3DataAlign$;
   ADC_InitStructure.ADC_NbrOfChannel = $ADC3OfChannel$;
   ADC_Init(ADC3, &ADC_InitStructure);
   ADC_Cmd(ADC3, ENABLE);
   
   #if($ADC3InInter$)
   ADC_ITConfig(ADC3,$ADC3IntS$, ENABLE);
   #endif
   
   #if($ADC3AWDGEn$)
   /*The Anolog WDG Configuration*/
   //
   ADC_AnalogWatchdogSingleChannelConfig(ADC3, $AWDGSCH$);
   ADC_AnalogWatchdogThresholdsConfig(ADC3, $HThreshold$,$LThreshold$);
   ADC_AnalogWatchdogCmd(ADC3, $ADC3AWDGCH$);
   #endif
   
   #if($ADC3DMAE$)
   /* Enable ADC3 DMA */
   ADC_DMACmd(ADC3, ENABLE);
   #endif
   
   //ADC3 Regular Group Channel Configuration
   //
   #if($ADC3OfChannel$ - 1 >= 0)
   ADC_RegularChannelConfig(ADC3, $ADC3RegCHRank1$, 1, $ADC3RugSampleTim1$); 
   #endif
   #if($ADC3OfChannel$ - 2 >= 0)
   ADC_RegularChannelConfig(ADC3, $ADC3RegCHRank2$, 2, $ADC3RugSampleTim2$); 
   #endif
   #if($ADC3OfChannel$ - 3 >= 0)
   ADC_RegularChannelConfig(ADC3, $ADC3RegCHRank3$, 3, $ADC3RugSampleTim3$); 
   #endif
   #if($ADC3OfChannel$ - 4 >= 0)
   ADC_RegularChannelConfig(ADC3, $ADC3RegCHRank4$, 4, $ADC3RugSampleTim4$); 
   #endif
   #if($ADC3OfChannel$ - 5 >= 0)
   ADC_RegularChannelConfig(ADC3, $ADC3RegCHRank5$, 5, $ADC3RugSampleTim5$); 
   #endif
   #if($ADC3OfChannel$ - 6 >= 0)
   ADC_RegularChannelConfig(ADC3, $ADC3RegCHRank6$, 6, $ADC3RugSampleTim6$); 
   #endif
   #if($ADC3OfChannel$ - 7 >= 0)
   ADC_RegularChannelConfig(ADC3, $ADC3RegCHRank7$, 7, $ADC3RugSampleTim7$); 
   #endif
   #if($ADC3OfChannel$ - 8 >= 0)
   ADC_RegularChannelConfig(ADC3, $ADC3RegCHRank8$, 8, $ADC3RugSampleTim8$); 
   #endif
   #if($ADC3OfChannel$ - 9 >= 0)
   ADC_RegularChannelConfig(ADC3, $ADC3RegCHRank9$, 9, $ADC3RugSampleTim9$); 
   #endif
   #if($ADC3OfChannel$ - 10 >= 0)
   ADC_RegularChannelConfig(ADC3, $ADC3RegCHRank10$, 10, $ADC3RugSampleTim10$); 
   #endif
   #if($ADC3OfChannel$ - 11 >= 0)
   ADC_RegularChannelConfig(ADC3, $ADC3RegCHRank11$, 11, $ADC3RugSampleTim11$); 
   #endif
   #if($ADC3OfChannel$ - 12 >= 0)
   ADC_RegularChannelConfig(ADC3, $ADC3RegCHRank12$, 12, $ADC3RugSampleTim12$); 
   #endif
   #if($ADC3OfChannel$ - 13 >= 0)
   ADC_RegularChannelConfig(ADC3, $ADC3RegCHRank13$, 13, $ADC3RugSampleTim13$); 
   #endif
   #if($ADC3OfChannel$ - 14 >= 0)
   ADC_RegularChannelConfig(ADC3, $ADC3RegCHRank14$, 14, $ADC3RugSampleTim14$); 
   #endif
   #if($ADC3OfChannel$ - 15 >= 0)
   ADC_RegularChannelConfig(ADC3, $ADC3RegCHRank15$, 15, $ADC3RugSampleTim15$); 
   #endif
   #if($ADC3OfChannel$ - 16 >= 0)
   ADC_RegularChannelConfig(ADC3, $ADC3RegCHRank16$, 16, $ADC3RugSampleTim16$); 
   #endif
   
   #if($RDisconEn$)
   /*DiscMode Config for Regular Group*/
   //   
   ADC_DiscModeChannelCountConfig(ADC3, $RCHCVal$);
   ADC_DiscModeCmd(ADC3, $RDisconEn$);
   #endif   
   
   
   #if($ADC3InjEn$)
   ADC_InjectedSequencerLengthConfig(ADC3,$InSeqLen$);
    
   #if($InSeqLen$ - 1 >= 0)
   ADC_InjectedChannelConfig(ADC3,$ADC3InCHR1$, 1, $ADC3InRSampleTim1$);
   #endif
   #if($InSeqLen$ - 2 >= 0)
   ADC_InjectedChannelConfig(ADC3,$ADC3InCHR2$, 2, $ADC3InRSampleTim2$);
   #endif
   #if($InSeqLen$ - 3 >= 0)
   ADC_InjectedChannelConfig(ADC3,$ADC3InCHR3$, 3, $ADC3InRSampleTim3$);
   #endif
   #if($InSeqLen$ - 4 >= 0)
   ADC_InjectedChannelConfig(ADC3,$ADC3InCHR4$, 4, $ADC3InRSampleTim4$);
   #endif
   
   #if(STRCMP($InDisConEn$,ENABLE) == 1)
   ADC_InjectedDiscModeCmd(ADC3, $InDisConEn$);
   #endif
   #if(STRCMP($AutoInjEn$,ENABLE) == 1)
   ADC_AutoInjectedConvCmd(ADC3, $AutoInjEn$);
   #endif
   #endif
   
   #if($ADC3TempVreE$)
   ADC_TempSensorVrefintCmd(ENABLE);
   #endif
   #if($CaliEn$)
   /* Enable ADC3 reset calibaration register */
   ADC_ResetCalibration(ADC3);
   /* Check the end of ADC3 reset calibration register */
   while (ADC_GetResetCalibrationStatus(ADC3));
   /* Start ADC3 calibration */
   ADC_StartCalibration(ADC3);
   /* Check the end of ADC3 calibration */
   while(ADC_GetCalibrationStatus(ADC3));
   #endif
   
   
   #if(STRCMP($ADC3ExternalTrigConv$,ADC_ExternalTrigConv_None) == 0)
   //Enable The External Trigger
   ADC_ExternalTrigConvCmd(ADC3,ENABLE);
   #endif
   #if(STRCMP($ADC3ExternalTrigConv$,ADC_ExternalTrigConv_None) == 1)
   //Start The Software Convert
   ADC_SoftwareStartConvCmd(ADC3, ENABLE);
   #endif
   
   #if(STRCMP($INjIntEx$,ENABLE) == 1)
   ADC_ExternalTrigInjectedConvConfig(ADC3, $InjExTr$);
   ADC_ExternalTrigInjectedConvCmd(ADC3, $INjIntEx$);
   #endif
   


}

void RCC_Configuration(void)
{
    /* RCC system reset(for debug purpose) */
    RCC_DeInit();

    /* Enable HSE */
    RCC_HSEConfig(RCC_HSE_ON);


    if (RCC_WaitForHSEStartUp() == SUCCESS)
    {
        /* HCLK = SYSCLK */
        RCC_HCLKConfig(RCC_SYSCLK_Div1);

        /* PCLK2 = HCLK */
        RCC_PCLK2Config(RCC_HCLK_Div1);

        /* PCLK1 = HCLK/2 */
        RCC_PCLK1Config(RCC_HCLK_Div2);

        /* ADCCLK = PCLK2/4 */
        RCC_ADCCLKConfig(RCC_PCLK2_Div4);


        /* PLLCLK = 8MHz * 9 = 56 MHz */
        RCC_PLLConfig(0x00010000, RCC_PLLMul_9);

        /* Enable PLL */
        RCC_PLLCmd(ENABLE);

        /* Wait till PLL is ready */
        while (RCC_GetFlagStatus(RCC_FLAG_PLLRDY) == RESET)
        {
        }

        /* Select PLL as system clock source */
        RCC_SYSCLKConfig(RCC_SYSCLKSource_PLLCLK);

        /* Wait till PLL is used as system clock source */
        while (RCC_GetSYSCLKSource() != 0x08)
        {
        }
    }

    /* Enable ADC3 and GPIOC clock */
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC3 | RCC_APB2Periph_GPIOA
            | RCC_APB2Periph_GPIOB, ENABLE);
}
void GPIO_Configuration(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;
    /* Configure PA.01 (ADC Channel1) as analog input -------------------------*/
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AIN;
    GPIO_Init(GPIOA, &GPIO_InitStructure);
}





















