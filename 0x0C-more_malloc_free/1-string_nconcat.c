#include "main.h"

/**
 * string_nconcat - Concatenates two strings up to n bytes from s2
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes to concatenate from s2
 *
 * Return: A pointer to the concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int l1, l2, j, i, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	if (n >= l2)
		n = l2;

	size = l1 + n;
	t = malloc(size + 1);

	if (t == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		t[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		t[i] = s2[j];

	t[i] = '\0';
	return (t);
}

/**
 * _strlen - Returns the length of a string
 * @s: String s
 * Return: Length of string
 */
int _strlen(char *s)
{
	int length = 0;
	while (*s != '\0') {
		length++;
		s++;
	}
	return (length);
}
