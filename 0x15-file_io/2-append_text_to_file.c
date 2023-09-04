#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		while (text_content[len])
			len++;

	f = open(filename, O_WRONLY | O_APPEND);
	if (f < 0)
		return (-1);
	f = write(f, text_content, len);
	if (f < 0)
		return (-1);

	close(f);
	return (1);
}
