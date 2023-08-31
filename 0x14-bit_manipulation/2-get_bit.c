#include "main.h"
/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The number from which to retrieve the bit.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at the specified index,
 *         or -1 if the index is out of range.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
