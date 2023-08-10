#include "main.h"

/**
 * malloc_checked - Allocates memory and checks for allocation failure.
 * @b: Size of memory to allocate.
 *
 * Return: Pointer to the allocated memory if successful.
 *         If allocation fails, the function terminates with status 98.
 */

void *malloc_checked(unsigned int b)
{
	int a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
