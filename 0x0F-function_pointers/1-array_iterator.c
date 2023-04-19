#include "function_pointers.h"
/**
 * array_iterator - executes a function given as
 *					a parameter on each element of an array.
 * @action: pointer to the function you need to use
 * @size: the size of the array
 * @array : the array
 * Return: on success, executes a function
 *         on error, -1 is returned, and errno is set appropriately
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!action || !array)
		exit(-1);
	for (i = 0; i < (int)size; i++)
		action(array[i]);
}
