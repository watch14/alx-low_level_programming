#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point.
 *
 * Return: 0 indicate success.
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n > 5)
	{
	printf("%d is greater than 5", n % 10);
	} else if(n == 0)
	{
		printf("%d is greater than 5", n % 10);
	} else
	{
		printf("%d  is less than 6 and not 0",n % 10);
	}
	return (0);
}
