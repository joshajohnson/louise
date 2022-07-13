// mcuconf.h:
#include_next <mcuconf.h>
#undef STM32_DAC_USE_DAC1_CH1
#define STM32_DAC_USE_DAC1_CH1              TRUE
#undef STM32_DAC_USE_DAC1_CH2
#define STM32_DAC_USE_DAC1_CH2              TRUE
#undef STM32_GPT_USE_TIM6
#define STM32_GPT_USE_TIM6                  TRUE
#undef STM32_GPT_USE_TIM7
#define STM32_GPT_USE_TIM7                  TRUE
#undef STM32_GPT_USE_TIM8
#define STM32_GPT_USE_TIM8                  TRUE
