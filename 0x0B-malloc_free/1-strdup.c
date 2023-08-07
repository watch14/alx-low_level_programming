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
	int i = 0;


	while (str != '\0')
	{
		i++;
	}
	a = malloc(sizeof(char) * i);
	a = strdup(str);
	if (str == 0 || a == 0)
                return (0);
	return (a);
}
