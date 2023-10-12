#include "lists.h"

/**
 * print_dlistint - Prints all elements of a dlistint_t list
 * @h: Head of the linked list
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
