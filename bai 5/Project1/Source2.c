#include <stdio.h>
typedef struct
{
	char light;
	char motor;
	char fan

}smarthome;

void main()
{
	
	smarthome thietbi;
	thietbi.light =(char)("on");
	thietbi.fan = (char)("off");
	thietbi.motor = (char)("off");
}