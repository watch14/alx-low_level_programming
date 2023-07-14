#include <stdio.h>

/**
 *  *main - Prints all possible combinations of two two-digit numbers,
 *          ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 99; a++) {
		for (b = 0; b <= 99; b++) {
			putchar('0' + (a / 10));
			putchar('0' + (a % 10));
			putchar(' ');
			putchar('0' + (b / 10));
			putchar('0' + (b % 10));
			if(a == 98 && b 99)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return 0;
}
