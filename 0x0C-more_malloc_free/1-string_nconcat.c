#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: destination string
 * @s2: source string
 * @n: number of bytes from s2 to be copied
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int l1, l2, j, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (l1 = 0 ; s1[l1] != '\0' ; l1++)
		;
	for (l2 = 0 ; s2[l2] != '\0' ; l2++)
		;
	if (l2 < n)
		return (NULL);

	t = malloc(l1 + n + 1);
	if (t == NULL)
		return (NULL);

	for (i = 0 ; i < l1 ; i++)
		t[i] = s1[i];
	for (j = 0 ; j < n ; j++)
		t[i + j] = s2[j];
	t[i + j] = '\0';
	return (t);
}
