#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: 0 indicate success.
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar (a);
		if (a == '9')
			break;
		putchar (' ');
		putchar (',');
        }
	return (0);
}