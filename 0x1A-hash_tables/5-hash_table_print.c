#include "hash_tables.h"

/**
 * hash_table_print - Print the contents of the hash table
 * @ht: The hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	char space = 0;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");

	for (i = 0 ; i < ht->size ; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (space == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			space = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
