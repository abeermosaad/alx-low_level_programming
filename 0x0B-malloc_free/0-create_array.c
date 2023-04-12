#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * create_array -  creates an array of chars,
 *					and initializes it with a specific char.
 *
 * @size: the size of arr
 *
 * @c: the specific char.
 *
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s = malloc(size);
	unsigned int i;

	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
