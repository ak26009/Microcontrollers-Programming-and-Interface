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


/*
ARR defines the total PWM period, while the compare value (CCR) determines how long the signal remains HIGH within that period. 
Setting CCR to ARR/2 generates a 50% duty cycle square wave, which is commonly used for reliable stepper motor pulse generation.
*/
