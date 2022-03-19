#include <stdio.h>
typedef struct
{
	char light;
	char motor;
	char fan

}smarthome;

void main()
{
	int function();
	smarthome thietbi;
	thietbi.light = ("on",function(1)),
	thietbi.fan = ("off", function(0)),
	thietbi.motor = ("off", function(0));
}