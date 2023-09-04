#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int f, len;

	if (filename == NULL)
		return (-1);
	len = 0;
	while (text_content[len] != '\0')
	{
		len++;
	}

	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (f == -1)
		return (-1);

	f = write(f, text_content, len);
	if (f == -1)
		return (-1);

	close(f);
	return (1);
}
