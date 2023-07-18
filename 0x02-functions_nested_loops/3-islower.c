#include <stdio.h>
#include "main.h"


int _islower()
{
	int c;

	if (c < 'a' || c > 'z')
		printf("1");
	else
		printf("0");
	return (0);
}
