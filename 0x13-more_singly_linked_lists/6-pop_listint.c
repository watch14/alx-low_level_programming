#include "lists.h"

/**
 * pop_listint - Removes the first node of a linked list and returns its value.
 * @head: Pointer to the pointer of the head of the linked list.
 *
 * Return: The value of the removed node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *current;

	if (head == NULL || *head == NULL)
		return (0);

	current = *head;
	n = current->n;
	*head = (*head)->next;
	free(current);

	return (n);
}
