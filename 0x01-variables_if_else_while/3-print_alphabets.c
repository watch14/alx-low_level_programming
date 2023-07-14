#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point.
 *
 * Return: 0 indicate success.
 */

int main(void)
{
	int a = 'a';
	int A = 'A';

	for (; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (; A <= 'Z'; A++)
	{
		putchar(A);
	}
	putchar ('\n');
return (0);
}
