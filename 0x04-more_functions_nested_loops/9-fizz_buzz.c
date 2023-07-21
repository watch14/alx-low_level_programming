#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100 with special conditions.
 * For multiples of three, prints "Fizz".
 * For multiples of five, prints "Buzz".
 * For multiples of three and five, prints "FizzBuzz".
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0 ; i <= 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf ("\n");
	return (0);
}
