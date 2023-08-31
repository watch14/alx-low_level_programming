#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: A pointer to the number whose bit is to be set.
 * @index: The index of the bit to set.
 *
 * Return: 1 if the bit was successfully set, or -1 if the index is out of range.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
