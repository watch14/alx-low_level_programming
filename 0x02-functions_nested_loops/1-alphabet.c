#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line.
 *
 * Return: void.
 */

void print_alphabet(void)
{
	int a;

	for (a = 'a' ; a <= 'z' ; a++)
		_putchar (a);
	_putchar ('\n');
}
