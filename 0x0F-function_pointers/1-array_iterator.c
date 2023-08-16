#include "function_pointers.h"
/**
 * array_iterator - Executes a function on each element of an array
 * @array: Pointer to the array
 * @size: Size of the array
 * @action: Pointer to the function to be applied
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action && array)
		for (i = 0 ; i < size ; i++)
			action(array[i]);
}
