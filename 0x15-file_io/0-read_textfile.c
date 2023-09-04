#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t l;
	int f;
	char buf[READ_BUf_SIZE * 8];

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	l = read(f, buf, letters);
	if (f == -1)
		return (0);

	l = write(STDOUT_FILENO, buf, l);
	if (l == -1)
		return (0);

	close(f);
	return (l);
}
