#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @cmp: pointer to the function you need to use
 * @size: the size of the array
 * @array : the array
 * Return: on success, executes a function
 *         on error, -1 is returned, and errno is set appropriately
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
