#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: 0 indicate success.
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 100 ; a++)
	{
		for (b = 0 ; b < 100 ; b++)
		{
			putchar ((a / 10) + 48);
			putchar ((b / 10) + 48);
			putchar (' ');
			putchar ((a / 10) + 48); 
			putchar ((b / 10) + 48);
			if (a == 98 && b == 99)
				break;
			putchar (',');
			putchar (' ');
		}

	}
	putchar ('\n');
	return (0);
}
