#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @index: The index of the node to be deleted, starting from 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *prev;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (i < index)
	{
		if (current == NULL)
			return (-1);

		prev = current;
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	prev->next = current->next;
	if (current->next)
		current->next->prev = prev;
	free(current);

	return (1);
}

