/**********************<<config wizard begin>>*********************************
<group>Peripheral
    <list>Peripheral Name
        <DMA=>DMA
    <code>$dma$
</group>

<group>DMA1 Channel1 config
    <list>DMA1 Channel1
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$dma1ch1En$
    <input=integer>Peripheral base addr
    <default>0
    <code>$dma1ch1PerphAddr$
    <input=integer>Memory base addr
    <default>0
    <code>$dma1ch1MemAddr$
    <list>Transfer direction
        <DMA_DIR_PeripheralSRC=>Peripheral for Source
        <DMA_DIR_PeripheralDST=>Peripheral for Destination
    <code>$dma1ch1Dir$
    <input=integer[0-65535]>Buffer size[0-65535]
    <default>0 
    <code>$dma1ch1BufSize$
    <list>Peripheral Inc mode
        <DMA_PeripheralInc_Disable=>Disable
        <DMA_PeripheralInc_Enable=>Enable
    <code>$dma1ch1PerphIncMode$
    <list>Memory Inc mode
        <DMA_MemoryInc_Disable=>Disable
        <DMA_MemoryInc_Enable=>Enable
    <code>$dma1ch1MemIncMode$
    <list>Peripheral data size
        <DMA_PeripheralDataSize_Byte=>Byte
        <DMA_PeripheralDataSize_HalfWord=>HalfWord
        <DMA_PeripheralDataSize_Word=>Word
    <code>$dma1ch1PerphDatSize$
    <list>Memory data size
        <DMA_MemoryDataSize_Byte=>Byte
        <DMA_MemoryDataSize_HalfWord=>HalfWord
        <DMA_MemoryDataSize_Word=>Word
    <code>$dma1ch1MemDatSize$
    <list>DMA circular mode
        <DMA_Mode_Normal=>Normal
        <DMA_Mode_Circular=>Circular
    <code>$dma1ch1CrclrMode$
    <list>DMA Priority
        <DMA_Priority_Low=>Low
        <DMA_Priority_Medium=>Medium
        <DMA_Priority_High=>High
        <DMA_Priority_VeryHigh=>VeryHigh
    <code>$dma1ch1Priority$
    <list>DMA Mem to Mem
        <DMA_M2M_Disable=>Disable
        <DMA_M2M_Enable=>Enable
    <code>$dma1ch1M2mEn$
</group>

<group=or>DMA1 Ch1 Interrupt config
    <list>Transfer complete Interrupt
        <0=>Disable
        <DMA_IT_TC=>Enable
    <list>Half transfer Interrupt
        <0=>Disable
        <DMA_IT_HT=>Enable
    <list>Transfer error Interrupt
        <0=>Disable
        <DMA_IT_TE=>Enable
    <code>$dma1ch1IntEn$
</group>

<group>DMA1 Channel2 config
    <list>DMA1 Channel2
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$dma1ch2En$
    <input=integer>Peripheral base addr
    <default>0
    <code>$dma1ch2PerphAddr$
    <input=integer>Memory base addr
    <default>0
    <code>$dma1ch2MemAddr$
    <list>Transfer direction
        <DMA_DIR_PeripheralSRC=>Peripheral for Source
        <DMA_DIR_PeripheralDST=>Peripheral for Destination
    <code>$dma1ch2Dir$
    <input=integer[0-65535]>Buffer size[0-65535]
    <default>0 
    <code>$dma1ch2BufSize$
    <list>Peripheral Inc mode
        <DMA_PeripheralInc_Disable=>Disable
        <DMA_PeripheralInc_Enable=>Enable
    <code>$dma1ch2PerphIncMode$
    <list>Memory Inc mode
        <DMA_MemoryInc_Disable=>Disable
        <DMA_MemoryInc_Enable=>Enable
    <code>$dma1ch2MemIncMode$
    <list>Peripheral data size
        <DMA_PeripheralDataSize_Byte=>Byte
        <DMA_PeripheralDataSize_HalfWord=>HalfWord
        <DMA_PeripheralDataSize_Word=>Word
    <code>$dma1ch2PerphDatSize$
    <list>Memory data size
        <DMA_MemoryDataSize_Byte=>Byte
        <DMA_MemoryDataSize_HalfWord=>HalfWord
        <DMA_MemoryDataSize_Word=>Word
    <code>$dma1ch2MemDatSize$
    <list>DMA circular mode
        <DMA_Mode_Normal=>Normal
        <DMA_Mode_Circular=>Circular
    <code>$dma1ch2CrclrMode$
    <list>DMA Priority
        <DMA_Priority_Low=>Low
        <DMA_Priority_Medium=>Medium
        <DMA_Priority_High=>High
        <DMA_Priority_VeryHigh=>VeryHigh
    <code>$dma1ch2Priority$
    <list>DMA Mem to Mem
        <DMA_M2M_Disable=>Disable
        <DMA_M2M_Enable=>Enable
    <code>$dma1ch2M2mEn$
</group>

<group=or>DMA1 Ch2 Interrupt config
    <list>Transfer complete Interrupt
        <0=>Disable
        <DMA_IT_TC=>Enable
    <list>Half transfer Interrupt
        <0=>Disable
        <DMA_IT_HT=>Enable
    <list>Transfer error Interrupt
        <0=>Disable
        <DMA_IT_TE=>Enable
    <code>$dma1ch2IntEn$
</group>


<group>DMA1 Channel3 config
    <list>DMA1 Channel3
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$dma1ch3En$
    <input=integer>Peripheral base addr
    <default>0
    <code>$dma1ch3PerphAddr$
    <input=integer>Memory base addr
    <default>0
    <code>$dma1ch3MemAddr$
    <list>Transfer direction
        <DMA_DIR_PeripheralSRC=>Peripheral for Source
        <DMA_DIR_PeripheralDST=>Peripheral for Destination
    <code>$dma1ch3Dir$
    <input=integer[0-65535]>Buffer size[0-65535]
    <default>0 
    <code>$dma1ch3BufSize$
    <list>Peripheral Inc mode
        <DMA_PeripheralInc_Disable=>Disable
        <DMA_PeripheralInc_Enable=>Enable
    <code>$dma1ch3PerphIncMode$
    <list>Memory Inc mode
        <DMA_MemoryInc_Disable=>Disable
        <DMA_MemoryInc_Enable=>Enable
    <code>$dma1ch3MemIncMode$
    <list>Peripheral data size
        <DMA_PeripheralDataSize_Byte=>Byte
        <DMA_PeripheralDataSize_HalfWord=>HalfWord
        <DMA_PeripheralDataSize_Word=>Word
    <code>$dma1ch3PerphDatSize$
    <list>Memory data size
        <DMA_MemoryDataSize_Byte=>Byte
        <DMA_MemoryDataSize_HalfWord=>HalfWord
        <DMA_MemoryDataSize_Word=>Word
    <code>$dma1ch3MemDatSize$
    <list>DMA circular mode
        <DMA_Mode_Normal=>Normal
        <DMA_Mode_Circular=>Circular
    <code>$dma1ch3CrclrMode$
    <list>DMA Priority
        <DMA_Priority_Low=>Low
        <DMA_Priority_Medium=>Medium
        <DMA_Priority_High=>High
        <DMA_Priority_VeryHigh=>VeryHigh
    <code>$dma1ch3Priority$
    <list>DMA Mem to Mem
        <DMA_M2M_Disable=>Disable
        <DMA_M2M_Enable=>Enable
    <code>$dma1ch3M2mEn$
</group>

<group=or>DMA1 Ch3 Interrupt config
    <list>Transfer complete Interrupt
        <0=>Disable
        <DMA_IT_TC=>Enable
    <list>Half transfer Interrupt
        <0=>Disable
        <DMA_IT_HT=>Enable
    <list>Transfer error Interrupt
        <0=>Disable
        <DMA_IT_TE=>Enable
    <code>$dma1ch3IntEn$
</group>


<group>DMA1 Channel4 config
    <list>DMA1 Channel4
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$dma1ch4En$
    <input=integer>Peripheral base addr
    <default>0
    <code>$dma1ch4PerphAddr$
    <input=integer>Memory base addr
    <default>0
    <code>$dma1ch4MemAddr$
    <list>Transfer direction
        <DMA_DIR_PeripheralSRC=>Peripheral for Source
        <DMA_DIR_PeripheralDST=>Peripheral for Destination
    <code>$dma1ch4Dir$
    <input=integer[0-65535]>Buffer size[0-65535]
    <default>0 
    <code>$dma1ch4BufSize$
    <list>Peripheral Inc mode
        <DMA_PeripheralInc_Disable=>Disable
        <DMA_PeripheralInc_Enable=>Enable
    <code>$dma1ch4PerphIncMode$
    <list>Memory Inc mode
        <DMA_MemoryInc_Disable=>Disable
        <DMA_MemoryInc_Enable=>Enable
    <code>$dma1ch4MemIncMode$
    <list>Peripheral data size
        <DMA_PeripheralDataSize_Byte=>Byte
        <DMA_PeripheralDataSize_HalfWord=>HalfWord
        <DMA_PeripheralDataSize_Word=>Word
    <code>$dma1ch4PerphDatSize$
    <list>Memory data size
        <DMA_MemoryDataSize_Byte=>Byte
        <DMA_MemoryDataSize_HalfWord=>HalfWord
        <DMA_MemoryDataSize_Word=>Word
    <code>$dma1ch4MemDatSize$
    <list>DMA circular mode
        <DMA_Mode_Normal=>Normal
        <DMA_Mode_Circular=>Circular
    <code>$dma1ch4CrclrMode$
    <list>DMA Priority
        <DMA_Priority_Low=>Low
        <DMA_Priority_Medium=>Medium
        <DMA_Priority_High=>High
        <DMA_Priority_VeryHigh=>VeryHigh
    <code>$dma1ch4Priority$
    <list>DMA Mem to Mem
        <DMA_M2M_Disable=>Disable
        <DMA_M2M_Enable=>Enable
    <code>$dma1ch4M2mEn$
</group>

<group=or>DMA1 Ch4 Interrupt config
    <list>Transfer complete Interrupt
        <0=>Disable
        <DMA_IT_TC=>Enable
    <list>Half transfer Interrupt
        <0=>Disable
        <DMA_IT_HT=>Enable
    <list>Transfer error Interrupt
        <0=>Disable
        <DMA_IT_TE=>Enable
    <code>$dma1ch4IntEn$
</group>


<group>DMA1 Channel5 config
    <list>DMA1 Channel5
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$dma1ch5En$
    <input=integer>Peripheral base addr
    <default>0
    <code>$dma1ch5PerphAddr$
    <input=integer>Memory base addr
    <default>0
    <code>$dma1ch5MemAddr$
    <list>Transfer direction
        <DMA_DIR_PeripheralSRC=>Peripheral for Source
        <DMA_DIR_PeripheralDST=>Peripheral for Destination
    <code>$dma1ch5Dir$
    <input=integer[0-65535]>Buffer size[0-65535]
    <default>0 
    <code>$dma1ch5BufSize$
    <list>Peripheral Inc mode
        <DMA_PeripheralInc_Disable=>Disable
        <DMA_PeripheralInc_Enable=>Enable
    <code>$dma1ch5PerphIncMode$
    <list>Memory Inc mode
        <DMA_MemoryInc_Disable=>Disable
        <DMA_MemoryInc_Enable=>Enable
    <code>$dma1ch5MemIncMode$
    <list>Peripheral data size
        <DMA_PeripheralDataSize_Byte=>Byte
        <DMA_PeripheralDataSize_HalfWord=>HalfWord
        <DMA_PeripheralDataSize_Word=>Word
    <code>$dma1ch5PerphDatSize$
    <list>Memory data size
        <DMA_MemoryDataSize_Byte=>Byte
        <DMA_MemoryDataSize_HalfWord=>HalfWord
        <DMA_MemoryDataSize_Word=>Word
    <code>$dma1ch5MemDatSize$
    <list>DMA circular mode
        <DMA_Mode_Normal=>Normal
        <DMA_Mode_Circular=>Circular
    <code>$dma1ch5CrclrMode$
    <list>DMA Priority
        <DMA_Priority_Low=>Low
        <DMA_Priority_Medium=>Medium
        <DMA_Priority_High=>High
        <DMA_Priority_VeryHigh=>VeryHigh
    <code>$dma1ch5Priority$
    <list>DMA Mem to Mem
        <DMA_M2M_Disable=>Disable
        <DMA_M2M_Enable=>Enable
    <code>$dma1ch5M2mEn$
</group>

<group=or>DMA1 Ch5 Interrupt config
    <list>Transfer complete Interrupt
        <0=>Disable
        <DMA_IT_TC=>Enable
    <list>Half transfer Interrupt
        <0=>Disable
        <DMA_IT_HT=>Enable
    <list>Transfer error Interrupt
        <0=>Disable
        <DMA_IT_TE=>Enable
    <code>$dma1ch5IntEn$
</group>


<group>DMA1 Channel6 config
    <list>DMA1 Channel6
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$dma1ch6En$
    <input=integer>Peripheral base addr
    <default>0
    <code>$dma1ch6PerphAddr$
    <input=integer>Memory base addr
    <default>0
    <code>$dma1ch6MemAddr$
    <list>Transfer direction
        <DMA_DIR_PeripheralSRC=>Peripheral for Source
        <DMA_DIR_PeripheralDST=>Peripheral for Destination
    <code>$dma1ch6Dir$
    <input=integer[0-65535]>Buffer size[0-65535]
    <default>0 
    <code>$dma1ch6BufSize$
    <list>Peripheral Inc mode
        <DMA_PeripheralInc_Disable=>Disable
        <DMA_PeripheralInc_Enable=>Enable
    <code>$dma1ch6PerphIncMode$
    <list>Memory Inc mode
        <DMA_MemoryInc_Disable=>Disable
        <DMA_MemoryInc_Enable=>Enable
    <code>$dma1ch6MemIncMode$
    <list>Peripheral data size
        <DMA_PeripheralDataSize_Byte=>Byte
        <DMA_PeripheralDataSize_HalfWord=>HalfWord
        <DMA_PeripheralDataSize_Word=>Word
    <code>$dma1ch6PerphDatSize$
    <list>Memory data size
        <DMA_MemoryDataSize_Byte=>Byte
        <DMA_MemoryDataSize_HalfWord=>HalfWord
        <DMA_MemoryDataSize_Word=>Word
    <code>$dma1ch6MemDatSize$
    <list>DMA circular mode
        <DMA_Mode_Normal=>Normal
        <DMA_Mode_Circular=>Circular
    <code>$dma1ch6CrclrMode$
    <list>DMA Priority
        <DMA_Priority_Low=>Low
        <DMA_Priority_Medium=>Medium
        <DMA_Priority_High=>High
        <DMA_Priority_VeryHigh=>VeryHigh
    <code>$dma1ch6Priority$
    <list>DMA Mem to Mem
        <DMA_M2M_Disable=>Disable
        <DMA_M2M_Enable=>Enable
    <code>$dma1ch6M2mEn$
</group>

<group=or>DMA1 Ch6 Interrupt config
    <list>Transfer complete Interrupt
        <0=>Disable
        <DMA_IT_TC=>Enable
    <list>Half transfer Interrupt
        <0=>Disable
        <DMA_IT_HT=>Enable
    <list>Transfer error Interrupt
        <0=>Disable
        <DMA_IT_TE=>Enable
    <code>$dma1ch6IntEn$
</group>


<group>DMA1 Channel7 config
    <list>DMA1 Channel7
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$dma1ch7En$
    <input=integer>Peripheral base addr
    <default>0
    <code>$dma1ch7PerphAddr$
    <input=integer>Memory base addr
    <default>0
    <code>$dma1ch7MemAddr$
    <list>Transfer direction
        <DMA_DIR_PeripheralSRC=>Peripheral for Source
        <DMA_DIR_PeripheralDST=>Peripheral for Destination
    <code>$dma1ch7Dir$
    <input=integer[0-65535]>Buffer size[0-65535]
    <default>0 
    <code>$dma1ch7BufSize$
    <list>Peripheral Inc mode
        <DMA_PeripheralInc_Disable=>Disable
        <DMA_PeripheralInc_Enable=>Enable
    <code>$dma1ch7PerphIncMode$
    <list>Memory Inc mode
        <DMA_MemoryInc_Disable=>Disable
        <DMA_MemoryInc_Enable=>Enable
    <code>$dma1ch7MemIncMode$
    <list>Peripheral data size
        <DMA_PeripheralDataSize_Byte=>Byte
        <DMA_PeripheralDataSize_HalfWord=>HalfWord
        <DMA_PeripheralDataSize_Word=>Word
    <code>$dma1ch7PerphDatSize$
    <list>Memory data size
        <DMA_MemoryDataSize_Byte=>Byte
        <DMA_MemoryDataSize_HalfWord=>HalfWord
        <DMA_MemoryDataSize_Word=>Word
    <code>$dma1ch7MemDatSize$
    <list>DMA circular mode
        <DMA_Mode_Normal=>Normal
        <DMA_Mode_Circular=>Circular
    <code>$dma1ch7CrclrMode$
    <list>DMA Priority
        <DMA_Priority_Low=>Low
        <DMA_Priority_Medium=>Medium
        <DMA_Priority_High=>High
        <DMA_Priority_VeryHigh=>VeryHigh
    <code>$dma1ch7Priority$
    <list>DMA Mem to Mem
        <DMA_M2M_Disable=>Disable
        <DMA_M2M_Enable=>Enable
    <code>$dma1ch7M2mEn$
</group>

<group=or>DMA1 Ch7 Interrupt config
    <list>Transfer complete Interrupt
        <0=>Disable
        <DMA_IT_TC=>Enable
    <list>Half transfer Interrupt
        <0=>Disable
        <DMA_IT_HT=>Enable
    <list>Transfer error Interrupt
        <0=>Disable
        <DMA_IT_TE=>Enable
    <code>$dma1ch7IntEn$
</group>

<dep>
    <type>state
    <trigger>DMA1 Channel1 config->DMA1 Channel1 = Disable
	<action>DMA1 Channel1 config->Peripheral base addr = Disable
	<action>DMA1 Channel1 config->Memory base addr = Disable
	<action>DMA1 Channel1 config->Transfer direction = Disable
	<action>DMA1 Channel1 config->Buffer size[0-65535] = Disable
	<action>DMA1 Channel1 config->Peripheral Inc mode = Disable
	<action>DMA1 Channel1 config->Memory Inc mode = Disable
	<action>DMA1 Channel1 config->Peripheral data size = Disable
	<action>DMA1 Channel1 config->Memory data size = Disable
	<action>DMA1 Channel1 config->DMA circular mode = Disable
	<action>DMA1 Channel1 config->DMA Priority = Disable
	<action>DMA1 Channel1 config->DMA Mem to Mem = Disable
</dep>

<dep>
    <type>state
    <trigger>DMA1 Channel1 config->DMA1 Channel1 = Disable
	<action>DMA1 Ch1 Interrupt config = Disable
</dep>

<dep>
    <type>value
    <trigger>DMA1 Channel1 config->DMA1 Channel1 = Disable
	<action>DMA1 Ch1 Interrupt config->Transfer complete Interrupt = Disable
	<action>DMA1 Ch1 Interrupt config->Half transfer Interrupt = Disable
	<action>DMA1 Ch1 Interrupt config->Transfer error Interrupt = Disable
</dep>

<dep>
    <type>state
    <trigger>DMA1 Channel2 config->DMA1 Channel2 = Disable
	<action>DMA1 Channel2 config->Peripheral base addr = Disable
	<action>DMA1 Channel2 config->Memory base addr = Disable
	<action>DMA1 Channel2 config->Transfer direction = Disable
	<action>DMA1 Channel2 config->Buffer size[0-65535] = Disable
	<action>DMA1 Channel2 config->Peripheral Inc mode = Disable
	<action>DMA1 Channel2 config->Memory Inc mode = Disable
	<action>DMA1 Channel2 config->Peripheral data size = Disable
	<action>DMA1 Channel2 config->Memory data size = Disable
	<action>DMA1 Channel2 config->DMA circular mode = Disable
	<action>DMA1 Channel2 config->DMA Priority = Disable
	<action>DMA1 Channel2 config->DMA Mem to Mem = Disable
</dep>

<dep>
    <type>state
    <trigger>DMA1 Channel2 config->DMA1 Channel2 = Disable
	<action>DMA1 Ch2 Interrupt config = Disable
</dep>

<dep>
    <type>value
    <trigger>DMA1 Channel2 config->DMA1 Channel2 = Disable
	<action>DMA1 Ch2 Interrupt config->Transfer complete Interrupt = Disable
	<action>DMA1 Ch2 Interrupt config->Half transfer Interrupt = Disable
	<action>DMA1 Ch2 Interrupt config->Transfer error Interrupt = Disable
</dep>

<dep>
    <type>state
    <trigger>DMA1 Channel3 config->DMA1 Channel3 = Disable
	<action>DMA1 Channel3 config->Peripheral base addr = Disable
	<action>DMA1 Channel3 config->Memory base addr = Disable
	<action>DMA1 Channel3 config->Transfer direction = Disable
	<action>DMA1 Channel3 config->Buffer size[0-65535] = Disable
	<action>DMA1 Channel3 config->Peripheral Inc mode = Disable
	<action>DMA1 Channel3 config->Memory Inc mode = Disable
	<action>DMA1 Channel3 config->Peripheral data size = Disable
	<action>DMA1 Channel3 config->Memory data size = Disable
	<action>DMA1 Channel3 config->DMA circular mode = Disable
	<action>DMA1 Channel3 config->DMA Priority = Disable
	<action>DMA1 Channel3 config->DMA Mem to Mem = Disable
</dep>

<dep>
    <type>state
    <trigger>DMA1 Channel3 config->DMA1 Channel3 = Disable
	<action>DMA1 Ch3 Interrupt config = Disable
</dep>

<dep>
    <type>value
    <trigger>DMA1 Channel3 config->DMA1 Channel3 = Disable
	<action>DMA1 Ch3 Interrupt config->Transfer complete Interrupt = Disable
	<action>DMA1 Ch3 Interrupt config->Half transfer Interrupt = Disable
	<action>DMA1 Ch3 Interrupt config->Transfer error Interrupt = Disable
</dep>

<dep>
    <type>state
    <trigger>DMA1 Channel4 config->DMA1 Channel4 = Disable
	<action>DMA1 Channel4 config->Peripheral base addr = Disable
	<action>DMA1 Channel4 config->Memory base addr = Disable
	<action>DMA1 Channel4 config->Transfer direction = Disable
	<action>DMA1 Channel4 config->Buffer size[0-65535] = Disable
	<action>DMA1 Channel4 config->Peripheral Inc mode = Disable
	<action>DMA1 Channel4 config->Memory Inc mode = Disable
	<action>DMA1 Channel4 config->Peripheral data size = Disable
	<action>DMA1 Channel4 config->Memory data size = Disable
	<action>DMA1 Channel4 config->DMA circular mode = Disable
	<action>DMA1 Channel4 config->DMA Priority = Disable
	<action>DMA1 Channel4 config->DMA Mem to Mem = Disable
</dep>

<dep>
    <type>state
    <trigger>DMA1 Channel4 config->DMA1 Channel4 = Disable
	<action>DMA1 Ch4 Interrupt config = Disable
</dep>

<dep>
    <type>value
    <trigger>DMA1 Channel4 config->DMA1 Channel4 = Disable
	<action>DMA1 Ch4 Interrupt config->Transfer complete Interrupt = Disable
	<action>DMA1 Ch4 Interrupt config->Half transfer Interrupt = Disable
	<action>DMA1 Ch4 Interrupt config->Transfer error Interrupt = Disable
</dep>

<dep>
    <type>state
    <trigger>DMA1 Channel5 config->DMA1 Channel5 = Disable
	<action>DMA1 Channel5 config->Peripheral base addr = Disable
	<action>DMA1 Channel5 config->Memory base addr = Disable
	<action>DMA1 Channel5 config->Transfer direction = Disable
	<action>DMA1 Channel5 config->Buffer size[0-65535] = Disable
	<action>DMA1 Channel5 config->Peripheral Inc mode = Disable
	<action>DMA1 Channel5 config->Memory Inc mode = Disable
	<action>DMA1 Channel5 config->Peripheral data size = Disable
	<action>DMA1 Channel5 config->Memory data size = Disable
	<action>DMA1 Channel5 config->DMA circular mode = Disable
	<action>DMA1 Channel5 config->DMA Priority = Disable
	<action>DMA1 Channel5 config->DMA Mem to Mem = Disable
</dep>

<dep>
    <type>state
    <trigger>DMA1 Channel5 config->DMA1 Channel5 = Disable
	<action>DMA1 Ch5 Interrupt config = Disable
</dep>

<dep>
    <type>value
    <trigger>DMA1 Channel5 config->DMA1 Channel5 = Disable
	<action>DMA1 Ch5 Interrupt config->Transfer complete Interrupt = Disable
	<action>DMA1 Ch5 Interrupt config->Half transfer Interrupt = Disable
	<action>DMA1 Ch5 Interrupt config->Transfer error Interrupt = Disable
</dep>

<dep>
    <type>state
    <trigger>DMA1 Channel6 config->DMA1 Channel6 = Disable
	<action>DMA1 Channel6 config->Peripheral base addr = Disable
	<action>DMA1 Channel6 config->Memory base addr = Disable
	<action>DMA1 Channel6 config->Transfer direction = Disable
	<action>DMA1 Channel6 config->Buffer size[0-65535] = Disable
	<action>DMA1 Channel6 config->Peripheral Inc mode = Disable
	<action>DMA1 Channel6 config->Memory Inc mode = Disable
	<action>DMA1 Channel6 config->Peripheral data size = Disable
	<action>DMA1 Channel6 config->Memory data size = Disable
	<action>DMA1 Channel6 config->DMA circular mode = Disable
	<action>DMA1 Channel6 config->DMA Priority = Disable
	<action>DMA1 Channel6 config->DMA Mem to Mem = Disable
</dep>

<dep>
    <type>state
    <trigger>DMA1 Channel6 config->DMA1 Channel6 = Disable
	<action>DMA1 Ch6 Interrupt config = Disable
</dep>

<dep>
    <type>value
    <trigger>DMA1 Channel6 config->DMA1 Channel6 = Disable
	<action>DMA1 Ch6 Interrupt config->Transfer complete Interrupt = Disable
	<action>DMA1 Ch6 Interrupt config->Half transfer Interrupt = Disable
	<action>DMA1 Ch6 Interrupt config->Transfer error Interrupt = Disable
</dep>

<dep>
    <type>state
    <trigger>DMA1 Channel7 config->DMA1 Channel7 = Disable
	<action>DMA1 Channel7 config->Peripheral base addr = Disable
	<action>DMA1 Channel7 config->Memory base addr = Disable
	<action>DMA1 Channel7 config->Transfer direction = Disable
	<action>DMA1 Channel7 config->Buffer size[0-65535] = Disable
	<action>DMA1 Channel7 config->Peripheral Inc mode = Disable
	<action>DMA1 Channel7 config->Memory Inc mode = Disable
	<action>DMA1 Channel7 config->Peripheral data size = Disable
	<action>DMA1 Channel7 config->Memory data size = Disable
	<action>DMA1 Channel7 config->DMA circular mode = Disable
	<action>DMA1 Channel7 config->DMA Priority = Disable
	<action>DMA1 Channel7 config->DMA Mem to Mem = Disable
</dep>

<dep>
    <type>state
    <trigger>DMA1 Channel7 config->DMA1 Channel7 = Disable
	<action>DMA1 Ch7 Interrupt config = Disable
</dep>

<dep>
    <type>value
    <trigger>DMA1 Channel7 config->DMA1 Channel7 = Disable
	<action>DMA1 Ch7 Interrupt config->Transfer complete Interrupt = Disable
	<action>DMA1 Ch7 Interrupt config->Half transfer Interrupt = Disable
	<action>DMA1 Ch7 Interrupt config->Transfer error Interrupt = Disable
</dep>
*******************************<<config wizard end>>**************************/
#include "stm32f10x.h"
#include "stm32f10x_rcc.h"
#include "stm32f10x_dma.h"

#if (STRCMP($dma1ch1IntEn$, 0) == 0 || STRCMP($dma1ch2IntEn$, 0) == 0 || STRCMP($dma1ch3IntEn$, 0) == 0 || \
STRCMP($dma1ch4IntEn$, 0) == 0 || STRCMP($dma1ch5IntEn$, 0) == 0 || STRCMP($dma1ch6IntEn$, 0) == 0 || \
STRCMP($dma1ch7IntEn$, 0) == 0 )
#include "misc.h"

//PUT_A_NEW_LINE_HERE
/***************************************************************************//**
 * Declare function prototype
*******************************************************************************/
#if (STRCMP($dma1ch1IntEn$, 0) == 0)
void DMA1_Channel1_IRQHandler(void);
#endif
#if (STRCMP($dma1ch2IntEn$, 0) == 0)
void DMA1_Channel2_IRQHandler(void);
#endif
#if (STRCMP($dma1ch3IntEn$, 0) == 0)
void DMA1_Channel3_IRQHandler(void);
#endif
#if (STRCMP($dma1ch4IntEn$, 0) == 0)
void DMA1_Channel4_IRQHandler(void);
#endif
#if (STRCMP($dma1ch5IntEn$, 0) == 0)
void DMA1_Channel5_IRQHandler(void);
#endif
#if (STRCMP($dma1ch6IntEn$, 0) == 0)
void DMA1_Channel6_IRQHandler(void);
#endif
#if (STRCMP($dma1ch7IntEn$, 0) == 0)
void DMA1_Channel7_IRQHandler(void);
#endif
#endif

//PUT_A_NEW_LINE_HERE
/*************************************************************
 * DMA Initialization
**************************************************************/
void DMA__Init()
{
	#if (STRCMP($dma1ch1IntEn$, 0) == 0 || STRCMP($dma1ch2IntEn$, 0) == 0 || STRCMP($dma1ch3IntEn$, 0) == 0 || \
    STRCMP($dma1ch4IntEn$, 0) == 0 || STRCMP($dma1ch5IntEn$, 0) == 0 || STRCMP($dma1ch6IntEn$, 0) == 0 || \
    STRCMP($dma1ch7IntEn$, 0) == 0 )
    NVIC_InitTypeDef NVIC_InitStructure;
    #endif
	
    #if (STRCMP($dma1ch1En$, DISABLE) == 0 || STRCMP($dma1ch2En$, DISABLE) == 0 || \
    STRCMP($dma1ch3En$, DISABLE) == 0 || STRCMP($dma1ch4En$, DISABLE) == 0 || \
    STRCMP($dma1ch5En$, DISABLE) == 0 || STRCMP($dma1ch6En$, DISABLE) == 0 || \
    STRCMP($dma1ch7En$, DISABLE) == 0 )
    DMA_InitTypeDef DMA_InitStructure;
    #endif
	
    #if (STRCMP($dma1ch1En$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // DMA1 Channel1 Configuration
    //
    DMA_InitStructure.DMA_PeripheralBaseAddr = (u32) $dma1ch1PerphAddr$;
    DMA_InitStructure.DMA_MemoryBaseAddr = (u32) $dma1ch1MemAddr$;
    DMA_InitStructure.DMA_DIR = $dma1ch1Dir$;

    DMA_InitStructure.DMA_BufferSize = $dma1ch1BufSize$;
    DMA_InitStructure.DMA_PeripheralInc = $dma1ch1PerphIncMode$;
    DMA_InitStructure.DMA_MemoryInc = $dma1ch1MemIncMode$;
    DMA_InitStructure.DMA_PeripheralDataSize = $dma1ch1PerphDatSize$;
    DMA_InitStructure.DMA_MemoryDataSize = $dma1ch1MemDatSize$;
    DMA_InitStructure.DMA_Mode = $dma1ch1CrclrMode$;
    DMA_InitStructure.DMA_Priority = $dma1ch1Priority$;
    DMA_InitStructure.DMA_M2M = $dma1ch1M2mEn$;
    DMA_Init(DMA1_Channel1, &DMA_InitStructure);
    //PUT_A_NEW_LINE_HERE
    //
    // Enable DMA1 Channel1
    //
    DMA_Cmd(DMA1_Channel1, ENABLE);
    #endif
	
    #if (STRCMP($dma1ch1IntEn$, 0) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Enables DMA1_Channel1 interrupt
    //
    DMA_ITConfig(DMA1_Channel1, $dma1ch1IntEn$, ENABLE);
    NVIC_InitStructure.NVIC_IRQChannel = DMA1_Channel1_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);
    #endif	

    #if (STRCMP($dma1ch2En$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // DMA1 Channel2 Configuration
    //
    DMA_InitStructure.DMA_PeripheralBaseAddr = (u32) $dma1ch2PerphAddr$;
    DMA_InitStructure.DMA_MemoryBaseAddr = (u32) $dma1ch2MemAddr$;
    DMA_InitStructure.DMA_DIR = $dma1ch2Dir$;

    DMA_InitStructure.DMA_BufferSize = $dma1ch2BufSize$;
    DMA_InitStructure.DMA_PeripheralInc = $dma1ch2PerphIncMode$;
    DMA_InitStructure.DMA_MemoryInc = $dma1ch2MemIncMode$;
    DMA_InitStructure.DMA_PeripheralDataSize = $dma1ch2PerphDatSize$;
    DMA_InitStructure.DMA_MemoryDataSize = $dma1ch2MemDatSize$;
    DMA_InitStructure.DMA_Mode = $dma1ch2CrclrMode$;
    DMA_InitStructure.DMA_Priority = $dma1ch2Priority$;
    DMA_InitStructure.DMA_M2M = $dma1ch2M2mEn$;
    DMA_Init(DMA1_Channel2, &DMA_InitStructure);
    //PUT_A_NEW_LINE_HERE
    //
    // Enable DMA1 Channel2
    //
    DMA_Cmd(DMA1_Channel2, ENABLE);
    #endif
	
    #if (STRCMP($dma1ch2IntEn$, 0) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Enables DMA1_Channel2 interrupt
    //
    DMA_ITConfig(DMA1_Channel2, $dma1ch2IntEn$, ENABLE);
    NVIC_InitStructure.NVIC_IRQChannel = DMA1_Channel2_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);
    #endif	

    #if (STRCMP($dma1ch3En$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // DMA1 Channel3 Configuration
    //
    DMA_InitStructure.DMA_PeripheralBaseAddr = (u32) $dma1ch3PerphAddr$;
    DMA_InitStructure.DMA_MemoryBaseAddr = (u32) $dma1ch3MemAddr$;
    DMA_InitStructure.DMA_DIR = $dma1ch3Dir$;

    DMA_InitStructure.DMA_BufferSize = $dma1ch3BufSize$;
    DMA_InitStructure.DMA_PeripheralInc = $dma1ch3PerphIncMode$;
    DMA_InitStructure.DMA_MemoryInc = $dma1ch3MemIncMode$;
    DMA_InitStructure.DMA_PeripheralDataSize = $dma1ch3PerphDatSize$;
    DMA_InitStructure.DMA_MemoryDataSize = $dma1ch3MemDatSize$;
    DMA_InitStructure.DMA_Mode = $dma1ch3CrclrMode$;
    DMA_InitStructure.DMA_Priority = $dma1ch3Priority$;
    DMA_InitStructure.DMA_M2M = $dma1ch3M2mEn$;
    DMA_Init(DMA1_Channel3, &DMA_InitStructure);
    //PUT_A_NEW_LINE_HERE
    //
    // Enable DMA1 Channel3
    //
    DMA_Cmd(DMA1_Channel3, ENABLE);
    #endif
	
    #if (STRCMP($dma1ch3IntEn$, 0) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Enables DMA1_Channel3 interrupt
    //
    DMA_ITConfig(DMA1_Channel3, $dma1ch3IntEn$, ENABLE);
    NVIC_InitStructure.NVIC_IRQChannel = DMA1_Channel3_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);
    #endif	

    #if (STRCMP($dma1ch4En$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // DMA1 Channel4 Configuration
    //
    DMA_InitStructure.DMA_PeripheralBaseAddr = (u32) $dma1ch4PerphAddr$;
    DMA_InitStructure.DMA_MemoryBaseAddr = (u32) $dma1ch4MemAddr$;
    DMA_InitStructure.DMA_DIR = $dma1ch4Dir$;

    DMA_InitStructure.DMA_BufferSize = $dma1ch4BufSize$;
    DMA_InitStructure.DMA_PeripheralInc = $dma1ch4PerphIncMode$;
    DMA_InitStructure.DMA_MemoryInc = $dma1ch4MemIncMode$;
    DMA_InitStructure.DMA_PeripheralDataSize = $dma1ch4PerphDatSize$;
    DMA_InitStructure.DMA_MemoryDataSize = $dma1ch4MemDatSize$;
    DMA_InitStructure.DMA_Mode = $dma1ch4CrclrMode$;
    DMA_InitStructure.DMA_Priority = $dma1ch4Priority$;
    DMA_InitStructure.DMA_M2M = $dma1ch4M2mEn$;
    DMA_Init(DMA1_Channel4, &DMA_InitStructure);
    //PUT_A_NEW_LINE_HERE
    //
    // Enable DMA1 Channel4
    //
    DMA_Cmd(DMA1_Channel4, ENABLE);
    #endif
	
    #if (STRCMP($dma1ch4IntEn$, 0) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Enables DMA1_Channel4 interrupt
    //
    DMA_ITConfig(DMA1_Channel4, $dma1ch4IntEn$, ENABLE);
    NVIC_InitStructure.NVIC_IRQChannel = DMA1_Channel4_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);
    #endif	

    #if (STRCMP($dma1ch5En$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // DMA1 Channel5 Configuration
    //
    DMA_InitStructure.DMA_PeripheralBaseAddr = (u32) $dma1ch5PerphAddr$;
    DMA_InitStructure.DMA_MemoryBaseAddr = (u32) $dma1ch5MemAddr$;
    DMA_InitStructure.DMA_DIR = $dma1ch5Dir$;

    DMA_InitStructure.DMA_BufferSize = $dma1ch5BufSize$;
    DMA_InitStructure.DMA_PeripheralInc = $dma1ch5PerphIncMode$;
    DMA_InitStructure.DMA_MemoryInc = $dma1ch5MemIncMode$;
    DMA_InitStructure.DMA_PeripheralDataSize = $dma1ch5PerphDatSize$;
    DMA_InitStructure.DMA_MemoryDataSize = $dma1ch5MemDatSize$;
    DMA_InitStructure.DMA_Mode = $dma1ch5CrclrMode$;
    DMA_InitStructure.DMA_Priority = $dma1ch5Priority$;
    DMA_InitStructure.DMA_M2M = $dma1ch5M2mEn$;
    DMA_Init(DMA1_Channel5, &DMA_InitStructure);
    //PUT_A_NEW_LINE_HERE
    //
    // Enable DMA1 Channel5
    //
    DMA_Cmd(DMA1_Channel5, ENABLE);
    #endif
	
    #if (STRCMP($dma1ch5IntEn$, 0) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Enables DMA1_Channel5 interrupt
    //
    DMA_ITConfig(DMA1_Channel5, $dma1ch5IntEn$, ENABLE);
    NVIC_InitStructure.NVIC_IRQChannel = DMA1_Channel5_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);
    #endif	

    #if (STRCMP($dma1ch6En$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // DMA1 Channel6 Configuration
    //
    DMA_InitStructure.DMA_PeripheralBaseAddr = (u32) $dma1ch6PerphAddr$;
    DMA_InitStructure.DMA_MemoryBaseAddr = (u32) $dma1ch6MemAddr$;
    DMA_InitStructure.DMA_DIR = $dma1ch6Dir$;

    DMA_InitStructure.DMA_BufferSize = $dma1ch6BufSize$;
    DMA_InitStructure.DMA_PeripheralInc = $dma1ch6PerphIncMode$;
    DMA_InitStructure.DMA_MemoryInc = $dma1ch6MemIncMode$;
    DMA_InitStructure.DMA_PeripheralDataSize = $dma1ch6PerphDatSize$;
    DMA_InitStructure.DMA_MemoryDataSize = $dma1ch6MemDatSize$;
    DMA_InitStructure.DMA_Mode = $dma1ch6CrclrMode$;
    DMA_InitStructure.DMA_Priority = $dma1ch6Priority$;
    DMA_InitStructure.DMA_M2M = $dma1ch6M2mEn$;
    DMA_Init(DMA1_Channel6, &DMA_InitStructure);
    //PUT_A_NEW_LINE_HERE
    //
    // Enable DMA1 Channel6
    //
    DMA_Cmd(DMA1_Channel6, ENABLE);
    #endif
	
    #if (STRCMP($dma1ch6IntEn$, 0) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Enables DMA1_Channel6 interrupt
    //
    DMA_ITConfig(DMA1_Channel6, $dma1ch6IntEn$, ENABLE);
    NVIC_InitStructure.NVIC_IRQChannel = DMA1_Channel6_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);
    #endif	

    #if (STRCMP($dma1ch7En$, DISABLE) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // DMA1 Channel7 Configuration
    //
    DMA_InitStructure.DMA_PeripheralBaseAddr = (u32) $dma1ch7PerphAddr$;
    DMA_InitStructure.DMA_MemoryBaseAddr = (u32) $dma1ch7MemAddr$;
    DMA_InitStructure.DMA_DIR = $dma1ch7Dir$;

    DMA_InitStructure.DMA_BufferSize = $dma1ch7BufSize$;
    DMA_InitStructure.DMA_PeripheralInc = $dma1ch7PerphIncMode$;
    DMA_InitStructure.DMA_MemoryInc = $dma1ch7MemIncMode$;
    DMA_InitStructure.DMA_PeripheralDataSize = $dma1ch7PerphDatSize$;
    DMA_InitStructure.DMA_MemoryDataSize = $dma1ch7MemDatSize$;
    DMA_InitStructure.DMA_Mode = $dma1ch7CrclrMode$;
    DMA_InitStructure.DMA_Priority = $dma1ch7Priority$;
    DMA_InitStructure.DMA_M2M = $dma1ch7M2mEn$;
    DMA_Init(DMA1_Channel7, &DMA_InitStructure);
    //PUT_A_NEW_LINE_HERE
    //
    // Enable DMA1 Channel7
    //
    DMA_Cmd(DMA1_Channel7, ENABLE);
    #endif
	
    #if (STRCMP($dma1ch7IntEn$, 0) == 0)
    //PUT_A_NEW_LINE_HERE
    //
    // Enables DMA1_Channel7 interrupt
    //
    DMA_ITConfig(DMA1_Channel7, $dma1ch7IntEn$, ENABLE);
    NVIC_InitStructure.NVIC_IRQChannel = DMA1_Channel7_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);
    #endif	
}
//PUT_A_NEW_LINE_HERE
#if (STRCMP($dma1ch1IntEn$, 0) == 0)
/* DMA1_Channel1 Interrupt function */
void DMA1_Channel1_IRQHandler(void)
{
    //
    // add your code 
    //   
}
#endif

//PUT_A_NEW_LINE_HERE
#if (STRCMP($dma1ch2IntEn$, 0) == 0)
/* DMA1_Channel2 Interrupt function */
void DMA1_Channel2_IRQHandler(void)
{
    //
    // add your code 
    //   
}
#endif

//PUT_A_NEW_LINE_HERE
#if (STRCMP($dma1ch3IntEn$, 0) == 0)
/* DMA1_Channel3 Interrupt function */
void DMA1_Channel3_IRQHandler(void)
{
    //
    // add your code 
    //   
}
#endif

//PUT_A_NEW_LINE_HERE
#if (STRCMP($dma1ch4IntEn$, 0) == 0)
/* DMA1_Channel4 Interrupt function */
void DMA1_Channel4_IRQHandler(void)
{
    //
    // add your code 
    //   
}
#endif

//PUT_A_NEW_LINE_HERE
#if (STRCMP($dma1ch5IntEn$, 0) == 0)
/* DMA1_Channel5 Interrupt function */
void DMA1_Channel5_IRQHandler(void)
{
    //
    // add your code 
    //   
}
#endif

//PUT_A_NEW_LINE_HERE
#if (STRCMP($dma1ch6IntEn$, 0) == 0)
/* DMA1_Channel6 Interrupt function */
void DMA1_Channel6_IRQHandler(void)
{
    //
    // add your code 
    //   
}
#endif

//PUT_A_NEW_LINE_HERE
#if (STRCMP($dma1ch7IntEn$, 0) == 0)
/* DMA1_Channel7 Interrupt function */
void DMA1_Channel7_IRQHandler(void)
{
    //
    // add your code 
    //   
}
#endif
//PUT_A_NEW_LINE_HERE