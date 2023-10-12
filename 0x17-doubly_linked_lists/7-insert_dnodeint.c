#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a
 * dlistint_t list.
 * @h: A pointer to a pointer to the head of the doubly linked list.
 * @idx: The index at which the new node should be added, starting from 0.
 * @n: The integer to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	if (h == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	current = *h;

	if (idx == 0)
	{
		new_node->next = current;
		new_node->prev = NULL;
		if (current)
		{
			current->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}
		current = current->next;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	new_node->prev = current;
	if (current->next)
	{
		current->next->prev = new_node;
	}
	current->next = new_node;

	return (new_node);
}

