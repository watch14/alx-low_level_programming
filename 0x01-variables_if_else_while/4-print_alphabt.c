#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: 0 indicate success.
 */
int main(void)
{
	int a = 'a';
	for(; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'q')
			putchar(a);
	}
	putchar('\n');
	return (0);
}
