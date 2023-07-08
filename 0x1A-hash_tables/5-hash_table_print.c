#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: The size of the array.
 * Return: newly created hash table.
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr;
	unsigned long int flag;
	
	for (i = (ht->size); (int)i >= 0; i--)
	{
		if(ht->array[i])
		{
			flag = i;
			break;
		}
	}
	
	i = 0;
	printf("{");
	for (i = 0; i < (ht->size); i++)
	{
		if(ht->array[i])
		{
			curr = ht->array[i];
			while (curr)
			{
				if (curr->next == NULL && (i == flag))
					printf("'%s': '%s'", curr->key, curr->value);
				else
					printf("'%s': '%s', ", curr->key, curr->value);
				curr = curr->next;
			}
		}
	}
	printf("}\n");

}
