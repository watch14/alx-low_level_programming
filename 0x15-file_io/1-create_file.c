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
	int f1, f2, len = 0;

	if (filename == NULL)
		return (-1);

	while (text_content[len] != '\0')
	{
		len++;
	}

	f1 = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	f2 = write(f1, text_content, len);

	if (f1 == -1 || f2 == -1)
		return (-1);

	close(f1);
	return (1);
}
