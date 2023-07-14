#include <stdio.h>

/**
 *  *main - Prints all possible combinations of two two-digit numbers,
 *          ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++) {
		for (j = 0; j <= 99; j++) {
			putchar('0' + (i / 10));
			putchar('0' + (i % 10));
			putchar(' ');
			putchar('0' + (j / 10));
			putchar('0' + (j % 10));
			if(a == 98 && b 99)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return 0;
}
