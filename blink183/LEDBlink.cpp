#include <stm32f10x_gpio.h>
#include <stm32f10x_rcc.h>

void Delay(int D )
{
	int i;
	for (i = 0; i < D; i++)
		asm("nop");
}

int main()
{
  GPIO_InitTypeDef GPIO_InitStructure;
  
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);

  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;
  
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOC, &GPIO_InitStructure);
// hui
	// hui2
	//hui3
	//hui GIT
	// hui local 2
	// display
  for (;;)
  {
	  GPIO_WriteBit(GPIOC, GPIO_Pin_13, Bit_SET);
	  Delay(300000);
	  GPIO_WriteBit(GPIOC, GPIO_Pin_13, Bit_RESET);
	  Delay(300000);

	  GPIO_WriteBit(GPIOC, GPIO_Pin_13, Bit_SET);
	  Delay(3000000);
	  GPIO_WriteBit(GPIOC, GPIO_Pin_13, Bit_RESET);
	  Delay(3000000);

	  GPIO_WriteBit(GPIOC, GPIO_Pin_13, Bit_SET);
	  Delay(300000);
	  GPIO_WriteBit(GPIOC, GPIO_Pin_13, Bit_RESET);
	  Delay(3000000);
	  
  }
}
