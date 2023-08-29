#include "lists.h"



listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	listint_t *current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = node;
	return (node);
}
