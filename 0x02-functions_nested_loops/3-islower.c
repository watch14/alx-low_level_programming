#include <stdio.h>
#include "main.h"


int _islower(int c)
{
	if (c < 'a' || c > 'z')
		return (0);
	else
		return (1);
}
