/******************************<<config wizard begin>>*************************
<group>Peripheral
    <list>Peripheral Name
        <SPI3=>SPI3
    <code>$SPI_NUM$
</group>
<group>SPI/I2S Mode Select
    <list>Peripheral Mode Selection
	    <SPI_Mode_Select=>SPI Mode
        <I2S_Mode_Select=>I2S Mode
    <code>$perModSel$
</group>
<group>SPI Configure
    <list>Mode Config
        <SPI_Mode_Slave=>Slave
		<SPI_Mode_Master=>Master
    <code>$modeConfig$
	<list>Direction
        <SPI_Direction_2Lines_FullDuplex=>2Lines Full Duplex
        <SPI_Direction_2Lines_RxOnly=>2Line Receive Only
	    <SPI_Direction_1Line_Rx=>1Line Receiver
        <SPI_Direction_1Line_Tx=>1Line Transmiter
    <code>$SPIDirection$
    <list>Data Size
		<SPI_DataSize_8b=>8 Bit
        <SPI_DataSize_16b=>16 Bit
    <code>$dataSize$
    <list>Clock Polarity
        <SPI_CPOL_Low=>Low in Steady State
		<SPI_CPOL_High=>High in Steady State
    <code>$clkPol$
    <list>Clock Phase
        <SPI_CPHA_1Edge=>First Edge Sample
		<SPI_CPHA_2Edge=>Second Edge Sample
    <code>$clkPha$
    <list>Slave Select Management
		<SPI_NSS_Hard=>Hardware Management
        <SPI_NSS_Soft=>Software Management
    <code>$slaSelMan$
    <list>Baud Rate Prescaler
        <SPI_BaudRatePrescaler_2=>PCLK/2
		<SPI_BaudRatePrescaler_4=>PCLK/4
        <SPI_BaudRatePrescaler_8=>PCLK/8
		<SPI_BaudRatePrescaler_16=>PCLK/16
        <SPI_BaudRatePrescaler_32=>PCLK/32
		<SPI_BaudRatePrescaler_64=>PCLK/64
        <SPI_BaudRatePrescaler_128=>PCLK/128
		<SPI_BaudRatePrescaler_256=>PCLK/256
    <code>$baudRate$
    <list>Fitst Bit Transmition
        <SPI_FirstBit_MSB=>MSB
		<SPI_FirstBit_LSB=>LSB
    <code>$fitstBitTrans$
    <list>Calculate CRC Enable
        <DISABLE=>Disable
		<ENABLE=>Enable
    <code>$CalCRCEn$
    <input = integer[0-65535]>CRC polynomial
        <default>7
    <code>$CRCPoly$
</group>
<group>I2S Configure
    <list>Mode Config
	    <I2S_Mode_SlaveTx=>Slave Transmiter
        <I2S_Mode_SlaveRx=>Slave Receiver
        <I2S_Mode_MasterTx=>Master Transmiter
        <I2S_Mode_MasterRx=>Master Receiver
    <code>$modeConfig$
    <list>Standard Config
	    <I2S_Standard_Phillips=>Phillips Standard
        <I2S_Standard_MSB=>MSB Standard
        <I2S_Standard_LSB=>LSB Standard
        <I2S_Standard_PCMShort=>PCMShort Standard
        <I2S_Standard_PCMLong=>PCMLong Standard
    <code>$standConfig$
    <list>Data Format
	    <I2S_DataFormat_16b=>16 Bits
        <I2S_DataFormat_16bextended=>16 Bits Extended
        <I2S_DataFormat_24b=>24 Bits
        <I2S_DataFormat_32b=>32 Bits
    <code>$dataFormat$
    <list>Master CLK Output Enable
	    <I2S_MCLKOutput_Enable=>Enable
        <I2S_MCLKOutput_Disable=>Disable
    <code>$masterCLKOutEn$
    <list>Audio Frequence
        <I2S_AudioFreq_Default=>Default
	    <I2S_AudioFreq_192k=>192k
        <I2S_AudioFreq_96k=>96k
        <I2S_AudioFreq_48k=>48k
        <I2S_AudioFreq_44k=>44k
        <I2S_AudioFreq_32k=>32k
        <I2S_AudioFreq_22k=>22k
        <I2S_AudioFreq_16k=>16k
        <I2S_AudioFreq_11k=>11k
        <I2S_AudioFreq_8k=>8k
    <code>$audioFreq$
    <list>Clock Polarity
	    <I2S_CPOL_Low=>Low in Steady State
        <I2S_CPOL_High=>High in Steady State
    <code>$clockPolarity$
</group>
<group=or>DMA Configure
    <list>Tx DMA Enable
        <0=>Disable
        <SPI_I2S_DMAReq_Tx=>Enable
    <list>Rx DMA Enable
        <0=>Disable
        <SPI_I2S_DMAReq_Rx=>Enable
    <code>$DMAEn$
</group>
<group>SS Output Configure
    <list>SS Output Enable
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$SSOutEn$
</group>

<group>Interrupt Configure
    <list>Tx Empty Interrupt Enable
        <0=>Disable
        <SPI_I2S_IT_TXE=>Enable
    <code>$TxEmptyItEn$
    <list>Rx Not Empty Interrupt Enable
        <0=>Disable
        <SPI_I2S_IT_RXNE=>Enable
    <code>$RxNEmptyItEn$
    <list>Error Interrupt Enable
        <0=>Disable
        <SPI_I2S_IT_ERR=>Enable
    <code>$errItEn$
</group>
<group=pin>Pin used
    <list>SPI3_NSS
        <DISABLE=>Disable
        <SPI3_NSS=>Enable
    <code>$NOCODE$
    <list>SPI3_SCK
        <DISABLE=>Disable
        <SPI3_SCK=>Enable
    <code>$NOCODE$
    <list>SPI3_MISO
        <DISABLE=>Disable
        <SPI3_MISO=>Enable
    <code>$NOCODE$
    <list>SPI3_MOSI
        <DISABLE=>Disable
        <SPI3_MOSI=>Enable
    <code>$NOCODE$
    <list>SPI3_NSS
        <DISABLE=>Disable
        <SPI3_NSS=>Enable
    <code>$NOCODE$
    <list>SPI3_SCK
        <DISABLE=>Disable
        <SPI3_SCK=>Enable
    <code>$NOCODE$
    <list>SPI3_MISO
        <DISABLE=>Disable
        <SPI3_MISO=>Enable
    <code>$NOCODE$
    <list>SPI3_MOSI
        <DISABLE=>Disable
        <SPI3_MOSI=>Enable
    <code>$NOCODE$
</group>
<dep>
    <type>state
    <trigger>SPI/I2S Mode Select->Peripheral Mode Selection = SPI Mode
    <action>SPI Configure = enable
    <action>I2S Configure = disable
</dep>
<dep>
    <type>state
    <trigger>SPI/I2S Mode Select->Peripheral Mode Selection = I2S Mode
    <action>SPI Configure = disable
    <action>SS Output Configure = disable
    <action>I2S Configure = enable
</dep>
******************************<<config wizard end>>***************************/

#include "stm32f10x_spi.h"
#include "stm32f10x_gpio.h"

//PUT_A_NEW_LINE_HERE
/*************************************************************
 * SPI Initialization Code Template
**************************************************************/
void SPI3_Init()
{
    #if (STRCMP($perModSel$, SPI_Mode_Select))
    
    int32_t k;
    SPI_InitTypeDef SPI_InitStructure;
    GPIO_InitTypeDef GPIO_InitStructure;
    
    //PUT_A_NEW_LINE_HERE
    
    /* Configure SPI3 pins: NSS, SCK, MISO and MOSI -------------------------------*/
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12 | GPIO_Pin_13 | GPIO_Pin_14 | GPIO_Pin_15;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_AF_PP;
    GPIO_Init(GPIOB, &GPIO_InitStructure);
    
    //PUT_A_NEW_LINE_HERE
    
     /* Just delay some time */
    for (k = 0; k < 10000; k++)
    {}
    
    //PUT_A_NEW_LINE_HERE
    /* SPI3 Configuration ----------------------------------------------------*/
    SPI_InitStructure.SPI_Direction = $SPIDirection$;
    SPI_InitStructure.SPI_Mode = $modeConfig$;
    SPI_InitStructure.SPI_DataSize = $dataSize$;
    SPI_InitStructure.SPI_CPOL = $clkPol$;
    SPI_InitStructure.SPI_CPHA = $clkPha$;
    #if (STRCMP($modeConfig$, SPI_Mode_Master))
    SPI_InitStructure.SPI_NSS = $slaSelMan$;
    #endif
    SPI_InitStructure.SPI_BaudRatePrescaler = $baudRate$;
    SPI_InitStructure.SPI_FirstBit = $fitstBitTrans$;
    SPI_InitStructure.SPI_CRCPolynomial = $CRCPoly$;
    SPI_Init(SPI3, &SPI_InitStructure);
    
    //PUT_A_NEW_LINE_HERE
    
    #if (STRCMP($modeConfig$, SPI_Mode_Master))
    /* SS Pin Output Enable configuration */
    SPI_SSOutputCmd(SPI3, $SSOutEn$);
    #endif

    #else 
    
    I2S_InitTypeDef I2S_InitStructure;
    GPIO_InitTypeDef GPIO_InitStructure;
    
    //PUT_A_NEW_LINE_HERE
    
    /* Configure SPI3 pins: CK, WS and SD ---------------------------------*/
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12 | GPIO_Pin_13 | GPIO_Pin_15;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
    GPIO_Init(GPIOB, &GPIO_InitStructure);
    
    //PUT_A_NEW_LINE_HERE
    
    /* I2S peripheral configuration */
    I2S_InitStructure.I2S_Mode = $modeConfig$;
    I2S_InitStructure.I2S_Standard = $standConfig$;
    I2S_InitStructure.I2S_DataFormat = $dataFormat$;
    I2S_InitStructure.I2S_MCLKOutput = $masterCLKOutEn$;
    I2S_InitStructure.I2S_AudioFreq = $audioFreq$;
    I2S_InitStructure.I2S_CPOL = $clockPolarity$;
    I2S_Init(SPI3, &I2S_InitStructure);

    #endif
    
    //PUT_A_NEW_LINE_HERE
    
    #if (!STRCMP($DMAEn$, 0))
    /* DMA Requirement configuration */
    SPI_I2S_DMACmd(SPI3, $DMAEn$, ENABLE);
    #endif
    
    //PUT_A_NEW_LINE_HERE
    
    #if (STRCMP($TxEmptyItEn$, SPI_I2S_IT_TXE))
    /* Tx Empty Interruption configuration */
    SPI_I2S_ITConfig(SPI3, $TxEmptyItEn$);
    #endif
    #if (STRCMP($RxNEmptyItEn$, SPI_I2S_IT_RXNE))
    /*  Rx Not Empty Interruption configuration */
    SPI_I2S_ITConfig(SPI3, $RxNEmptyItEn$);
    #endif
    #if (STRCMP($errItEn$, SPI_I2S_IT_ERR))
    /* Error Interruption configuration */
    SPI_I2S_ITConfig(SPI3, $errItEn$);
    #endif
    
    //PUT_A_NEW_LINE_HERE
    
    #if (STRCMP($perModSel$, SPI_Mode_Select))
    /* Enable SPI3 */
    SPI_Cmd(SPI3, ENABLE);
    #else
    /* Enable the I2S2 */
    I2S_Cmd(SPI3, ENABLE);
    #endif
}
