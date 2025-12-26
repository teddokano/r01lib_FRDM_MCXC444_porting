#include "r01lib.h"

void	delay(void);

bool		flag_sw;
bool		flag_pin;

InterruptIn	sw( SW2 );
InterruptIn	pin( SW3 );

void callback_sw( void )
{
	flag_sw	= true;
}

void callback_pin( void )
{
	flag_pin	= true;
}

int main( void )
{
	sw.rise(  callback_sw  );
	pin.fall( callback_pin );

	while ( true )
	{
		if ( flag_sw )
		{
			flag_sw	= false;
			PRINTF( "!!! Switch event detected\r\n" );
		}
		if ( flag_pin )
		{
			flag_pin	= false;
			PRINTF( "!!! Pin event detected\r\n" );
		}
		PRINTF( "%d %d\r\n", sw & 1, pin & 1 );
		wait( 0.1 );
	}
}
