/** test code for r01lib
 *
 *  @author Tedd OKANO
 *
 *  Released under the MIT license
 */

#include	"r01lib.h"

DigitalOut	led( BLUE );
DigitalIn	pin( D4 );


int main( void )
{
	printf( "Hello, world!\r\n" );

	led	= true;

	while ( true )
	{
		led	= !led;
		wait( 0.5 );
	}
}
