#include "hash_tables.h"
/**
 * hash_table_delete - function that dekets a hash table.
 * @ht: hash_table
 * Return: NONE.
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr, *temp;

	if (!ht)
		return;

	for (i = 0; i < (ht->size); i++)
	{
		if (ht->array[i])
		{
			curr = ht->array[i];
			while (curr)
			{
				temp = curr;
				free(temp->key);
				free(temp->value);
				curr = curr->next;
			}
			ht->array[i] = NULL;
		}
	}
	free(ht->array);
	free(ht);
}
