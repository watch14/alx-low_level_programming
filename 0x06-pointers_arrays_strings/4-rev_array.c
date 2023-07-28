#include "main.h"

/**
 * reverse_array - revereses an array.
 * @a: pointer to array.
 * @n: number of elements of an array.
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i, t[n];

	for (i = 0 ; i < n ; i++)
	{
		t[i] = a[i];
	}
	for (i = n ; i >= 0 ; i--)
	{
		a[n - 1 - i] = t[i];
	}
}
