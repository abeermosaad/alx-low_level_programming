#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, or -1 if value not present
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t pos = 0;

	if (!array)
		return (-1);

	pos = low + (((double)(high - low) /
	(array[high] - array[low])) * (value - array[low]));
	while (pos < size)
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (value > array[pos])
			low = pos + 1;
		else
			high = pos - 1;
		pos = low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low]));
	}
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
