#include <lists.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h->next != NULL)
	{
		printf("[%d] %s\n",h->len, h->str);

		if (h->str == NULL)
			printf("[0](nil)\n");

		h = h->next;
		i++:
	}
	retutn (i);
}
