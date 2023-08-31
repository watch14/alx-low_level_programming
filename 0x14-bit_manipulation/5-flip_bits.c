#include "main.h"

/**
 * flip_bits - flip to get one number to another.
 * @n: the first number.
 * @m: the second number.
 * Return: the number of bits you would need to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, r;
	unsigned int i, j;

	i = 0;
	x = 1;
	r = n ^ m;
	for (j = 0; j < (sizeof(unsigned long int) * 8); j++)
	{
		if (x == (r & x))
		{
			i++;
		}
		x <<= 1;
	}
	return (i);
}
