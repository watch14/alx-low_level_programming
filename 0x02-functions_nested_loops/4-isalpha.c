#include "main.h"
#include <stdio.h>
/**
 * _isalpha - Checks if a character is an alphabetic letter.
 * c -
 * Return: 1 if the character is an alphabetic letter
 *          0 otherwise.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
