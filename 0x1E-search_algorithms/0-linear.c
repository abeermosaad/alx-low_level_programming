#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>

/**
 * linear_search - searches for a value in an array of integers using the
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, or -1 if value not present or
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			return (i);
		}
		else
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}

	return (-1);
}
