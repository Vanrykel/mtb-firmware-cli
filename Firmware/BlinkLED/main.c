#include "cyhal.h"
#include "cybsp.h"

int main(void)
{
    cy_rslt_t result;

    result = cybsp_init();

    if (result != CY_RSLT_SUCCESS)
    {
        CY_ASSERT(0);
    }

    result = cyhal_gpio_init(P0_3, CYHAL_GPIO_DIR_OUTPUT, CYHAL_GPIO_DRIVE_STRONG, 0u);

    if (result != CY_RSLT_SUCCESS)
    {
        CY_ASSERT(0);
    }

    __enable_irq();

    for (;;)
    {
    }
}

/* [] END OF FILE */
