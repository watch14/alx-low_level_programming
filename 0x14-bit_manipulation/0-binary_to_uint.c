#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: Pointer to a binary string.
 *
 * Return: The equivalent unsigned integer of the binary string,
 *         or 0 if the input string is invalid (not composed of '0' and '1').
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int nb = 0;
	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		nb = (nb * 2) + (*b++ - '0');
	}
	return (nb);
}
