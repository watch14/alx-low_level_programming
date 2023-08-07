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
	int len = strlen(str);

	if(str == 0)
		return (0);
	a = malloc(sizeof(char) * len);
	if (str == 0 || a == 0)
                return (0);
	return (a);
}
