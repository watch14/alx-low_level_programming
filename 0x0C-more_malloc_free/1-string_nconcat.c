#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *s)
{
	char *p = m;

	while (*m)
		m++;
	return (m - p);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: destination string
 * @s2: source string
 * @n: number of bytes from s2 to be copied
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len, l1, l2;
	char *t;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	if (n > l2)
		n = l2;
	len = l1 + n;
	t = malloc(sizeof(char) * len + 1);
	if (!t)
		return (NULL);
	for (i = 0; i < l1; i++)
		t[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		t[i] = s2[j];
	t[i] = 0;
	return (t);
}
