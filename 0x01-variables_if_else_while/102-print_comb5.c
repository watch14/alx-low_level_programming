#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: 0 indicate success.
 */
int main(void)
{
	int a, b, c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = a ; b <= '9' ; b++)
		{
			putchar (a);
			putchar (b);
			putchar (' ');
			putchar (a);
                        putchar (b);
			putchar (',');
			putchar (' ');
		
		}

	}
	putchar ('\n');
	return (0);
}
