#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, or -1 if value not present
*/

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, j;
	size_t m = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);

	while (i < size + m)
	{
		if (value > array[i] && i < size)
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		else
		{
			printf("Value found between indexes [%lu] and [%lu]\n", i - m, i);
			for (j = i - m; j <= i && j < size; j++)
			{
				printf("Value checked array[%lu] = [%d]\n", j, array[j]);
				if (value == array[j])
					return (j);
			}
		}
		i += m;
	}
	return (-1);
}
