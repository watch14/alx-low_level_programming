#include "function_pointers.h"
/**
 * array_iterator - Executes a function on each element of an array
 * @array: Pointer to the array
 * @size: Size of the array
 * @action: Pointer to the function to be applied
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
