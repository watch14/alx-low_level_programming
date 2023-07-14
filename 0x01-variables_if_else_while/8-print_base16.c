#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: 0 indicate success.
 */
int main(void)
{
	int i;
	for(; i <= 102 ; i++)
	{
		putchar(i);
		if (i == 57)
			i = i + 39;
		i++;
	}
	return (0);
}
