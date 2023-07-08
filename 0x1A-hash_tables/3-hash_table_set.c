#include "hash_tables.h"
/**
 * hash_table_set - function that creates a hash table.
 * @ht: The size of the array.
 * @key: The size of the array.
 * @value: The size of the array.
 * Return: newly created hash table.
*/



int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
	hash_node_t *curr;
	unsigned long int index;

	item = malloc(sizeof(hash_node_t));

	if (!item)
		return (0);

	if (key == NULL || strlen(key) == 0)
	{
		free(item);
		return (0);
	}

	item->key = strdup(key);
	item->value = strdup(value);
	item->next = NULL;

	index = key_index((const unsigned char *) item->key, ht->size);

	if (ht->array[index] != NULL)
	{
		curr = ht->array[index];
		while (curr)
		{
			if (strcmp(curr->key, key) == 0)
			{
				curr->value = strdup(value);
				return (1);
			}
			curr = curr->next;
		}
		item->next = ht->array[index];
		ht->array[index] = item;
	}
	else
		ht->array[index] = item;
	return (1);
}
