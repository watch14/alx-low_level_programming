#include "main.h"
#include <string.h>

/**
 * puts2 - print every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: The string to be processed.
 */

void puts2(char *str)
{
	int i, len = strlen(str);

	for (i = 0 ; i < len ; i++)
	{
	       _putchar (str[i]);
	       i++;
	}
	_putchar ('\n');
}
