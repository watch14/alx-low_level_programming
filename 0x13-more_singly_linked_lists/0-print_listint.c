#include "lists.h"

/**
 * print_listint - Prints the elements of a linked list and counts them.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of elements in the linked list.
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}
	return (i);
}

