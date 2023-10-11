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

	if (!array)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (i + m > size)
		{
			vlaue_found:
			printf("Value found between indexes [%lu] and [%lu]\n", i, i + m);
			for (j = i; j <= i + m && j < size; j++)
			{
				printf("Value checked array[%lu] = [%d]\n", j, array[j]);
				if (value == array[j])
					return (j);
			}
		}
		else if (value >= array[i] && value <= array[i + m])
			goto vlaue_found;
		i += m;
	}
	return (-1);
}
