#include "r01lib.h"

void	delay(void);

DigitalOut	led[]	= {
	DigitalOut( RED   ),
	DigitalOut( GREEN ),
	DigitalOut( BLUE  )
};

int main(void) {

    printf("Hello World\r\n");

    volatile int	*prt	= new int[5'000'000];

    printf( "%lx\r\n", (uint32_t)prt );

	auto	count	= 0;
	
    while ( true )
    {
		for ( auto i = 0; i < 3; i++ )
			led[ i ]	= (count + i) % 3 ? true : false;
		
		count++;
		delay();
	}
}


void delay(void)
{
    volatile uint32_t i = 0;
    for (i = 0; i < 500000; ++i)
    {
        __asm("NOP"); /* delay */
    }
}
