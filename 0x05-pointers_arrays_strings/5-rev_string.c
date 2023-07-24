#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string.
 *
 * @s: The string to be reversed.
 */

void rev_string(char *s)
{
	int len = strlen(s), i, j = 0;
	char r[len];

	for (i = len - 1 ; i >= 0 ; i--)
	{
		r[j] = s[i];
		j++;
	}
	for (i = 0 ; i < len ; i++)
        {
                s[i] = r[i];
        }
}
