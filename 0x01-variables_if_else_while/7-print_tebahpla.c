#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: 0 indicate success.
 */
int main(void)
{
	int a = 'z';

	for (; a >= 'a'; a-- )
		putchar (a);
	putchar ('\n');
	return (0);
}
