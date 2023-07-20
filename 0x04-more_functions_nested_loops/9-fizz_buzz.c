#include <stfio.h>

/**
 * main - Prints numbers from 1 to 100 with special conditions.
 * For multiples of three, prints "Fizz".
 * For multiples of five, prints "Buzz".
 * For multiples of both three and five, prints "FizzBuzz".
 * Each number or word is separated by a space.
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 0 ; i <= 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz ");
		if (i % 3 == 0)
			printf(" Fizz ");
		if (i % 5 == 0)
			printf(" Buzz ");
		else
			printf(" %d ", i);
	}
	return (0);
}
