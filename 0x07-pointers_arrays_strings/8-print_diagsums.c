#include "main.h"

/**
 * print_diagsums - Print the sum of the two diagonals of a square matrix.
 * @a: Pointer to the 2D array representing the square matrix.
 * @size: The size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int j, ds1 = 0, ds2 = 0;

	for (j = 0; j < size; j++)
	{
		ds1 += a[j * size + j];
		ds2 += a[j * size + (size - 1 - j)];
	}
	printf("%d, %d\n", ds1, ds2);
}
