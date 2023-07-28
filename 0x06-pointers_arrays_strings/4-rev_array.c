#include "main.h"


void reverse_array(int *a, int n)
{
	int i, t[n];

	for (i = 0 ; i < n ; i++)
	{
		t[i] = a[i];
	}
	for (i = n ; i > 0 ; i--)
	{
		a[i] = t[n - 1 - i];
	}
}
