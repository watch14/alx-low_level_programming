#include "lists.h"



listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node->n = n;
	node->next = *head;
	*head = node;

	if (node->next == NULL)
	{
		return (-1);
	}
}
