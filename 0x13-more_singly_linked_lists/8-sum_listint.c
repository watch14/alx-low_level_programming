#include "lists.h"

/**
 * sum_listint - Calculates the sum of all integers in a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: Sum of all integers in the linked list, or 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum = 0;

	node = head;

	if (!node)
		return (NULL);

	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
