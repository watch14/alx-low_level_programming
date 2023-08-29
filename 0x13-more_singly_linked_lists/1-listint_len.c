#include "lists.h"

/**
 * listint_len - Counts the number of elements in a linked list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of elements in the linked list.
 */

size_t listint_len(const listint_t *h)
{

	int i = 0;
	const listint_t *curent = h;

	while (curent.n != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}
