#include "hash_tables.h"

/**
 * key_index - Get the index of a key in the hash table
 * @key: The key to hash
 * @size: Size of the hash table
 *
 * Return: Index of the key in the hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
