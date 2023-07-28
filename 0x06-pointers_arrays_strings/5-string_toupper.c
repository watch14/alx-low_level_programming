#include "main.h"
/**
 * *string_toupper - Converst all lowercase letters to uppercase
 * @str: the string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0 ; i < len ; i++)
	{
		str[i] = toupper(str[i]);
	}
	return (str);
}
