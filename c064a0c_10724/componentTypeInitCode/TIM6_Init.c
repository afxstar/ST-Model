/******************************<<config wizard begin>>*************************
<group>Peripheral
    <list>Peripheral Name
        <TIM6=>TIM6
    <code>$TIM_NUM$
</group>
<group>TIM Configuration
    <list>Auto Relode Prelode Enable
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$autoRePrelodeEn$
    <list>Updata Disable
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$updataDis$
    <list>Update Request Source
        <0=>Global
        <1=>Regular
    <code>$updateReqSou$
    <list>One Pules Mode
        <TIM_OPMode_Repetitive=>Repetitive Mode
        <TIM_OPMode_Single=>One Pulse Mode
    <code>$onePulseMod$
    <list>Trigger Output Mode
        <TIM_TRGOSource_Reset=>Reset
        <TIM_TRGOSource_Enable=>Enable
        <TIM_TRGOSource_Update=>Update
    <code>$trigOutMod$
    <input=integer[0-65535]>Auto Relode Value
    <code>$autoRelVal$
    <input=integer[0-65535]>Prescaler Value
    <code>$prescalVal$
</group>
<group>DMA Request Configuration
    <list>DMA Request Enable
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$DMAReqEn$
</group>
<group>Interrupt Configuration
    <list>Updata Interrupt Enable
        <DISABLE=>Disable
        <ENABLE=>Enable
    <code>$updataIntEn$
</group>




<group=pin>Pin used

</group>
******************************<<config wizard end>>***************************/

#include "stm32f10x_rcc.h"
#include "stm32f10x_tim.h"

//PUT_A_NEW_LINE_HERE
/*************************************************************
 * TIM6 Initialization Code Template
**************************************************************/
void TIM6_Init()
{
    TIM_TimeBaseInitTypeDef TIM_TimeBaseInitStruct;
    
    /* Auto Relode Prelode Enable configuration */
    TIM_ARRPreloadConfig(TIM6, $autoRePrelodeEn$);
    
    //PUT_A_NEW_LINE_HERE
    
    /* Update Disable configuration. Notice:ENABLE means Disable the Update Event. */
    TIM_UpdateDisableConfig(TIM6, $updataDis$);
    
    //PUT_A_NEW_LINE_HERE
    
    /* Update Request Source configuration */
    #if ($updateReqSou$)
    TIM_UpdateRequestConfig(TIM6, TIM_UpdateSource_Regular);
    #else 
    TIM_UpdateRequestConfig(TIM6, TIM_UpdateSource_Global);
    
    //PUT_A_NEW_LINE_HERE
    
    /* One Pules Mode configuration */
    TIM_SelectOnePulseMode(TIM6, $onePulseMod$);
    
    //PUT_A_NEW_LINE_HERE
    
    /* Trigger Output Mode configuration */
    TIM_SelectOutputTrigger(TIM6, $trigOutMod$);
    
    //PUT_A_NEW_LINE_HERE
    
    /* Time Base configuration */
    TIM_TimeBaseInitStruct.TIM_Period = $autoRelVal$;
    TIM_TimeBaseInitStruct.TIM_Prescaler = $prescalVal$;
    TIM_TimeBaseInit(TIM6, &TIM_TimeBaseInitStruct);
    
    //PUT_A_NEW_LINE_HERE
    
    /* Enable Timer Count */
    TIM_Cmd(TIM6, ENABLE);
}
