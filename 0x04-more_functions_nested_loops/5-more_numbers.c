#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints numbers from 0 to 14; 10 times.
 *
 * Return: void.
 */


void more_numbers(void)
{
	int i, j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
			_putchar (j + '0');
		for (i = 0 ; i < 5 ; j++)
		{
			_putchar ('1');
			_putchar (j + '0');
		}
		-putchar ('\n');
	}
}
