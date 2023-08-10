#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: starting int
 * @max: max int
 * Return: array of integers
 */

int *array_range(int min, int max)
{
	int l, i;
	int *t;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	t = malloc(sizeof(int) * l);
	if (!t)
		return (NULL);
	for (i = 0; i < l; i++)
		t[i] = min++;
	return (t);
}
