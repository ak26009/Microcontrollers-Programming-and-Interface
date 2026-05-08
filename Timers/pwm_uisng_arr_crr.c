while(1)
{
    // Fade IN
    for(int i=0; i<=100; i++)
    {
        __HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_1, i);
        HAL_Delay(10);
    }

    // Fade OUT
    for(int i=100; i>=0; i--)
    {
        __HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_1, i);
        HAL_Delay(10);
    }
}
