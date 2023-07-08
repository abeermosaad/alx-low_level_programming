#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key.
 * @key: The key.
 * @size: The size of the array.
 * Return: newly created hash table.
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int Index;

	Index = hash_djb2(key);

	Index = Index % size;

	return (Index);
}
