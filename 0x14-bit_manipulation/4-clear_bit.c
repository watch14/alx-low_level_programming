#include "main.h"

/**
 * clear_bit - Clears the value of a bit at a given index to 0.
 * @n: A pointer to the number whose bit is to be cleared.
 * @index: The index of the bit to clear.
 *
 * Return: 1 if the bit was successfully, or -1 if the index is out of range.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
