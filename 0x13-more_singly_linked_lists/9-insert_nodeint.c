#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the pointer of the head of the linked list.
 * @idx: The index where the new node should be added.
 * @n: Value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *tmp;
	unsigned int count = 1;

	if (head == NULL)
		return (NULL);
	node = (listint_t *)malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (idx == 0 || *head == NULL)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	tmp = *head;
	while (tmp != NULL && count < idx)
	{
		tmp = tmp->next;
		count++;
	}
	if (tmp == NULL)
	{
		free(node);
		return (NULL);
	}
	node->next = tmp->next;
	tmp->next = node;
	return (node);
}

