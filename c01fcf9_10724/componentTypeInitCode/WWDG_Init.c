/***************************<<config wizard begin>>***************************
<group>Peripheral
    <list>Peripheral Name
        <WWDG=>WindowWatchDog
    <code>$WWDG$
</group>
<group>Interrupt And Reset Config
    <list>Enable Interrupt
        <DISABLE=>Disable
		<ENABLE=>Enable
    <code>$IntEn$
	<list>Enable Reset
        <DISABLE=>Disable
		<ENABLE=>Enable
    <code>$ResetEn$
</group>
<group>counter value
    <input = integer[64-127]>Counter Value[64-127]
	<default>127
    <code>$CounterValue$
</group>
<group>Prescaler Value
    <list>Prescaler Value
		<WWDG_Prescaler_1=>PCLK1/4096
        <WWDG_Prescaler_2 =>PCLK1/8192
		<WWDG_Prescaler_4 =>PCLK1/16384
		<WWDG_Prescaler_8 =>PCLK1/32768
    <code>$PreValue$
</group>
<group>window value
    <input = integer[64-127]>Reload Value[64-127]
	<default>64
    <code>$WindowValue$
</group>
*********************************<<config wizard end>>**********************/
#include "stm32f10x_rcc.h"
#include "stm32f10x_wwdg.h"

/*******************************************************************************
 * Declare function prototype
*******************************************************************************/
#if(!STRCMP($IntEn$, DISABLE))
//PUT_A_NEW_LINE_HERE
void WwdtCbName();
#endif

//PUT_A_NEW_LINE_HERE 
/*************************************************************
 * WWDT Initialization
**************************************************************/
void WWDG_Init()
{

    RCC_APB1PeriphClockCmd(RCC_APB1Periph_WWDG, ENABLE);
	
    // Deinitializes WWDG peripheral registers 
	#if(STRCMP($ResetEn$, DISABLE) == 0)
	   WWDG_DeInit();
	#endif
	

    // Sets Prescaler value of the WWDG.
    WWDG_SetPrescaler($PreValue$);

    // Sets Window value of the WWDG.
    WWDG_SetWindowValue($WindowValue$);

    // Sets Counter value of the WWDG.
    WWDG_SetCounter($CounterValue$);
	
    // Enable WWDG and set counter value
    WWDG_Enable($CounterValue$);

	   //Enable EW interrupt
	#if((STRCMP($IntEn$,DISABLE)) == 0)
    WWDG_ClearFlag();
    WWDG_EnableIT();
	#endif
    

}

#if(!STRCMP($IntEn$, DISABLE))
//PUT_A_NEW_LINE_HERE
void WwdtCbName()
{

}
#endif
