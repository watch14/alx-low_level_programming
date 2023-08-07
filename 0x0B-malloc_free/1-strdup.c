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
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	a = (char *)malloc((sizeof(char) * len) + 1);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		a[i] = a[i];
	copy[len] = '\0';

	return (a);
}
