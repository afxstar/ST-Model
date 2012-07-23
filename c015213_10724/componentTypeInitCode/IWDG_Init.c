/***************************<<config wizard begin>>***************************
<group>Peripheral
    <list>Peripheral Name
        <IWDG =>IWDG
    <code>$IWDG$
</group>
<group>Basic config
    <list>Prescaler
        <IWDG_Prescaler_4 =>1/4
		<IWDG_Prescaler_8 =>1/8
		<IWDG_Prescaler_16 =>1/16 
		<IWDG_Prescaler_32 =>1/32 
		<IWDG_Prescaler_64 =>1/64 
		<IWDG_Prescaler_128 =>1/128 
		<IWDG_Prescaler_256 =>1/256 
    <code>$PRESCALER$
</group>
<group>Set Reload Value
    <input = integer[1-4095]>Reload Value[1-4095]
	<default>4095
    <code>$ReloadValue$
</group>          
<group>Write Access PR RLR
    <list>Write Access
		<DISABLE =>Disable
		<ENABLE =>Enable
	<code>$WAEn$
</group>
*********************************<<config wizard end>>**********************/

#include "stm32f10x.h"
#include "stm32f10x_iwdg.h"
#include "stm32f10x_rcc.h"

/*************************************************************
 * IWDG initialization code template
**************************************************************/
void IWDG_Init()
{
 
    // Enable IWDT clock
	   RCC_DeInit ();
    RCC_LSICmd(ENABLE);
	   while (RCC_GetFlagStatus(RCC_FLAG_LSIRDY) == RESET);

    // Set Reload value of the WDT.
    IWDG_SetReload($ReloadValue$);
    IWDG_ReloadCounter();
	
	   // Set Prescaler value of the WDT.
	   IWDG_SetPrescaler($PRESCALER$);


    //Enables or disables write access to IWDG_PR and IWDG_RLR registers.
	#if(STRCMP($WAEn$,DISABLE) == 0)
    IWDG_WriteAccessCmd($WAEn$);
	#endif
    IWDG_Enable();


}