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
	int l1, l2, j, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*to calculate the lenghth of the strings*/
	for (l1 = 0 ; s1[l1] != '\0' ; l1++)
		;
	for (l2 = 0 ; s2[l2] != '\0' ; l2++)
		;
	if (l2 < n)
		return (NULL);
	/*to reserve the memory*/
	t = malloc((l1 + n + 1) * sizeof(char));
	if (!t)
		return (NULL);
	/*to put s2 and s2 into t*/
	for (i = 0 ; i < l1 ; i++)
		t[i] = s1[i];
	for (j = 0 ; j < n ; j++,i++)
		t[i] = s2[j];
	t[i] = 0;
	return (t);
}
