#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int print_alphabet(void)
{
        int a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
        return (0);
}
