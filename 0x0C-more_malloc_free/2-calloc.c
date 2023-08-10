#include "main.h"
/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: Number of elements.
 * @size: Size of each element.
 *
 * Return: Pointer to the allocated memory, or NULL on failure.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *t;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	/* allocate the memory */
	t = malloc(nmemb * size);
	if (t == NULL)
		return (NULL);
	/*put 0 in very t[i++]*/
	for (i = 0; i < nmemb * size; i++)
		t[i] = 0;
	return (t)
}
