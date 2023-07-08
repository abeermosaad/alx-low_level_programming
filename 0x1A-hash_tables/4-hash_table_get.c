#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: The size of the array.
 * @key: The size of the array.
 * Return: newly created hash table.
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *curr;

	index = key_index((const unsigned char *) key, ht->size);
	curr = ht->array[index];
	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
		{
			return (curr->value);
		}
		curr = curr->next;
	}
	return (NULL);
}
