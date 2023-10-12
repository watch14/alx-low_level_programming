#include "lists.h"

/**
 * dlistint_len - Prints all elements of a dlistint_t list
 * @h: Head of the linked list
 * Return: The number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
