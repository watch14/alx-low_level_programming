#include "lists.h"
/**
 * str_len - function that returns the length of a string.
 * @str : is a character
 * Return: value is len
 */
int str_len(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * add_node - add a new node at beginning of a list_t list.
 * @head: head of a list_t list.
 * @str: value to insert into element.
 * Return: the number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (new == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	new->str = strdup(str);
	new->len = str_len(str);
	new->next = *head;
	*head = new;

	return (new);
}
