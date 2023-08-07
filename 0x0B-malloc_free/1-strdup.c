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
	int i; len = strlen(str);

	if(str == 0)
		return (0);
	a = malloc((sizeof(char) * len) + 1);
	if (str == 0 || a == 0)
                return (0);
	for (i = 0 ; i < len ; i++)
	{
		a[i] = str[i];
	}
	return (a);
}
