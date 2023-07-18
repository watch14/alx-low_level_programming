#include "main.h"
#include <stdio.h>


int print_last_digit(int n)
{
	int last = n % 10;
	printf("%d", last);

	return (last);
}
