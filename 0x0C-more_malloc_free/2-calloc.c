#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements of pointer
 * @size: size of each member
 * Return: pointer of allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *t;

	if (!nmemb || !size)
		return (NULL);
	t = malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	_memset(t, 0, size * nmemb);
	return (t);
}
/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: bytes of the memory area
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *t = s;

	while (n--)
		*s++ = b;
	return (t);
}
