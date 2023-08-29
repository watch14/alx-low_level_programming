#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index of a list.
 * @head: Pointer to the pointer of the head of the linked list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if successful, -1 if failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *tmp;
	unsigned int n = 1;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		node = *head;
		*head = head->next;
		free(node);
		return (1);
	}

	tmp = *head;
	while (tmp != NULL && n < index)
	{
		tmp = tmp->next;
		n++;
	}

	if (tmp == NULL || tmp->next == NULL)
		return (-1);

	node = tmp->next;
	tmp->next = node->next;
	free(node);

	return (1);
}
