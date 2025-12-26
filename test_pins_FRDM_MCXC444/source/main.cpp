#include "r01lib.h"

void	delay(void);

//BusOut	pins( D0, D1, D2, D3, D4, D5, D6, D7 );
//BusOut	pins( D8, D9, D10, D11, D12, D13, D18, D19 );
//BusOut	pins( D7 );
//BusOut	pins( D10, D11, D12, D13 );
//BusOut	pins( MB_AN,  MB_RST, MB_CS, MB_SCK, MB_MISO, MB_MOSI );
BusOut	pins( MB_PWM, MB_INT, MB_RX, MB_TX,  MB_SCL,  MB_SDA  );

int main(void) {

	printf("Hello World\r\n");

	auto	count	= 0;

	while ( true )
	{
		pins	= count++;
	}
}
