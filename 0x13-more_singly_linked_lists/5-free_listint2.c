#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets the head to NULL.
 * @head: Pointer to the pointer of the head of the linked list.
 *
 * Return: None (void).
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
	*head = NULL;
}
