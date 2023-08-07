#include "main.h"

/**
 * _strdup - Duplicates a string.
 * @str: The string to be duplicated.
 *
 * Return: Pointer to the duplicated string or NULL if memory allocation fails.
 */

char *_strdup(char *str)
{
	char *a = strdup(str);

	if (str == NULL || a == NULL)
		return (NULL);
	return (a);
	free(a);
}
