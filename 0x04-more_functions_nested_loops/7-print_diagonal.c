#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal.
 * @n: number of times the character '\' should be printed
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (n <= 0)
			break;
		_putchar ('\\');
	}
	_putchar ('\n');
}
