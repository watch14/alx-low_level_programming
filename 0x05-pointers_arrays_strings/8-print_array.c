#include "main.h"
#include <string.h>

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d, ", a[i]);
	}
}
