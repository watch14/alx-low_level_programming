#include "lists.h"
/**
 * add_node - add a new node at the beginning of a list_t list.
 * @head: pointer to a pointer to the head of a list_t list.
 * @str: value to insert into the new element.
 * Return: pointer to the new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}

