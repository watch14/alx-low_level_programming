#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a list.
 * @head: Pointer to the pointer of the head of the linked list.
 * @idx: Index at which the new node should be inserted.
 * @n: Value to be stored in the new node.
 *
 * Return: Pointer to the new node, or NULL if insertion failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *tmp;
	unsigned int i = 0;

	tmp = *head;
	if (!tmp)
		return (NULL);

	if (idx == 0 || *head == NULL)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	while (tmp)
	{
		if (i == idx)
		{
			node = malloc(sizeof(listint_t));
			if (!node)
				return (NULL);

			node->n = n;
			node->next = tmp->next;
			tmp->next = node;
			return (node);
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
