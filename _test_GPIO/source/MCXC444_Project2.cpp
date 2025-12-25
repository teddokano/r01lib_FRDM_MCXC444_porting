#include "r01lib.h"

void	delay(void);

DigitalOut	led[]	= {
	DigitalOut( RED   ),
	DigitalOut( GREEN ),
	DigitalOut( BLUE  )
};

int main(void) {

    printf("Hello World\r\n");

    auto	count	= 0;
	
    while ( true )
    {
		for ( auto i = 0; i < 3; i++ )
			led[ i ]	= (count + i) % 3 ? true : false;
		
		count++;
		wait( 0.5 );
	}
}
