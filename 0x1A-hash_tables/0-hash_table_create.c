#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: The size of the array.
 * Return: newly created hash table.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *Hash_Table;
	unsigned long int i;

	Hash_Table = malloc(sizeof(hash_table_t));
	if (!Hash_Table)
		return (NULL);

	Hash_Table->size = size;
	Hash_Table->array = malloc(size * sizeof(hash_node_t *));

	if (!(Hash_Table->array))
	{
		free(Hash_Table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		Hash_Table->array[i] = NULL;

	return (Hash_Table);
}
