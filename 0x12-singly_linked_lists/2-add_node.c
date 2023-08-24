#include "lists.h"

/**
 * str_len - function that returns the length of a string.
 * @s : s is a character
 * Return: value is i
 */

int str_len(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - add a new node at beginning of a list_t list.
 * @head: head of a list_t list.
 * @str: value to insert into element.
 * Return: the number of nodes.
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t new;

	new = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = str_len(str);
	new->next = *head;
	*head = new;
	return (add);
}
