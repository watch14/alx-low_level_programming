#include "main.h"

/**
 * _strdup - Duplicates a string.
 * @str: The string to be duplicated.
 *
 * Return: Pointer to the duplicated string or NULL if memory allocation fails.
 */

char *_strdup(char *str)
{
	char *a;
	int i, len = strlen(str);

	if (str == NULL)
		return (NULL);
	a = malloc((sizeof(char) * len) + 1);
	if (copy == NULL)
		return (NULL);
	for (i = 0 ; i < len ; i++)
	{
		a[i] = str[i];
	}
	return (a);
}
