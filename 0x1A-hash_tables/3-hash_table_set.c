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
	unsigned long int index;

	if (ht == NULL)
		return (0);

	if (key == NULL || strlen(key) == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	item = add_node(&(ht->array[index]), key, value);
	if (!item)
		return (0);
	return (1);
}
/**
 * add_node - .
 * @head: head
 * @key: string
 * @value: string
 * Return: Always cnt.
 */

hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *item;

	item = *head;

	while (item)
	{
		if (strcmp(item->key, key) == 0)
		{
			free(item->value);
			item->value = strdup(value);
			return (*head);
		}
		item = item->next;
	}

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (NULL);

	item->key = strdup(key);
	item->value = strdup(value);
	item->next = *head;
	*head = item;
	return (*head);
}
