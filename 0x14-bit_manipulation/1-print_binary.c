#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long integer.
 * @n: The unsigned long integer to be printed in binary.
 */

void print_binary(unsigned long int n)
{
	int b = sizeof(n) * 8, r = 0;

	while (b)
	{
		if (n & 1L << --b)
		{
			_putchar ('1');
			r++;
		}
		if (r)
			_putchar ('0');
	}
	if (!n)
		_putchar ('0');
}
