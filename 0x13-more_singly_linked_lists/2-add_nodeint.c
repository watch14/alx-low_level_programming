#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list.
 * @head: Pointer to the pointer of the head of the linked list.
 * @n: Value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
