#include "lists.h"

/**
 * add_node_end - adds a new node to the end of linked list
 * @head: double pointer to a linked list
 * @str: string to add to the new node
 *
 * Return: pointer to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last, *curent;

	last = malloc(sizeof(list_t));
	if (last == NULL)
        return (NULL);

	last->str = strdup(str);
	last->len = strlen(last->str);
	last->next = NULL;

	if (last->str == NULL)
	{
		free(last);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = last;
		return (last);
	}
	curent = *head;
	while (curent->next != NULL)
		curent = curent->next;

	curent->next = last;
	return (last);
}
