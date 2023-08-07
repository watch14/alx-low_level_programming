#include "main.h"

/**
 * _strdup - Duplicates a string.
 * @str: The string to be duplicated.
 *
 * Return: Pointer to the duplicated string or NULL if memory allocation fails.
 */

char *_strdup(char *str)
{
	if (str == 0)
		return (0);
	char *a = (char *)malloc(sizeof(*str) - 1);

	a = strdup(str);
	if (a == 0)
                return (0);
	return (a);
	free(a);
}
