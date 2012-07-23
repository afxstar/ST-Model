/******************************<<config wizard begin>>*************************
<group>Peripheral
    <list>Peripheral Name
        <SPI1=>SPI1
    <code>$SPI_NUM$
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
    <list>SPI1_NSS
        <DISABLE=>Disable
        <SPI1_NSS=>Enable
    <code>$NOCODE$
    <list>SPI1_SCK
        <DISABLE=>Disable
        <SPI1_SCK=>Enable
    <code>$NOCODE$
    <list>SPI1_MISO
        <DISABLE=>Disable
        <SPI1_MISO=>Enable
    <code>$NOCODE$
    <list>SPI1_MOSI
        <DISABLE=>Disable
        <SPI1_MOSI=>Enable
    <code>$NOCODE$
    <list>SPI1_NSS
        <DISABLE=>Disable
        <SPI1_NSS=>Enable
    <code>$NOCODE$
    <list>SPI1_SCK
        <DISABLE=>Disable
        <SPI1_SCK=>Enable
    <code>$NOCODE$
    <list>SPI1_MISO
        <DISABLE=>Disable
        <SPI1_MISO=>Enable
    <code>$NOCODE$
    <list>SPI1_MOSI
        <DISABLE=>Disable
        <SPI1_MOSI=>Enable
    <code>$NOCODE$
</group>

<dep>
    <type>state
    <trigger>SPI Configure->Mode Config = Slave
    <action>SS Output Configure = disable
    <action>SPI Configure->Slave Select Management = disable
</dep>
******************************<<config wizard end>>***************************/

#include "stm32f10x_spi.h"
#include "stm32f10x_gpio.h"

//PUT_A_NEW_LINE_HERE
/*************************************************************
 * SPI Initialization Code Template
**************************************************************/
void SPI1_Init()
{    
    int32_t k;
    SPI_InitTypeDef SPI_InitStructure;
    GPIO_InitTypeDef GPIO_InitStructure;
    
    //PUT_A_NEW_LINE_HERE
    
    /* Configure SPI1 pins: NSS, SCK, MISO and MOSI -------------------------------*/
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12 | GPIO_Pin_13 | GPIO_Pin_14 | GPIO_Pin_15;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_AF_PP;
    GPIO_Init(GPIOB, &GPIO_InitStructure);
    
    //PUT_A_NEW_LINE_HERE
    
     /* Just delay some time */
    for (k = 0; k < 10000; k++)
    {}
    
    //PUT_A_NEW_LINE_HERE
    /* SPI1 Configuration ----------------------------------------------------*/
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
    SPI_Init(SPI1, &SPI_InitStructure);
    
    //PUT_A_NEW_LINE_HERE
    
    #if (STRCMP($modeConfig$, SPI_Mode_Master))
    /* SS Pin Output Enable configuration */
    SPI_SSOutputCmd(SPI1, $SSOutEn$);
    #endif
    
    //PUT_A_NEW_LINE_HERE
    
    #if (!STRCMP($DMAEn$, 0))
    /* DMA Requirement configuration */
    SPI_I2S_DMACmd(SPI1, $DMAEn$, ENABLE);
    #endif
    
    //PUT_A_NEW_LINE_HERE
    
    #if (STRCMP($TxEmptyItEn$, SPI_I2S_IT_TXE))
    /* Tx Empty Interruption configuration */
    SPI_I2S_ITConfig(SPI1, $TxEmptyItEn$);
    #endif
    #if (STRCMP($RxNEmptyItEn$, SPI_I2S_IT_RXNE))
    /*  Rx Not Empty Interruption configuration */
    SPI_I2S_ITConfig(SPI1, $RxNEmptyItEn$);
    #endif
    #if (STRCMP($errItEn$, SPI_I2S_IT_ERR))
    /* Error Interruption configuration */
    SPI_I2S_ITConfig(SPI1, $errItEn$);
    #endif
    
    //PUT_A_NEW_LINE_HERE

    /* Enable SPI1 */
    SPI_Cmd(SPI1, ENABLE);

}
