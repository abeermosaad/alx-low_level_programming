#include "search_algos.h"

/**
 * exponential_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, or -1 if value not present
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, min = 0;
	int index = 0;

	if (!array)
		return (-1);

	if (array[0] == value)
		return (0);

	while (i < size && value > array[i])
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}
	min = MIN(i, size - 1);
	printf("Value found between indexes [%lu] and [%lu]\n", i / 2, min);

	index = binary_search(array + i / 2, (min - i / 2) + 1, value);
	if (index >= 0)
		return (index + i / 2);
	return (index);
}

/**
 * print_array - Prints an array of integers
 * @array: Pointer to the array
 * @size: Size of the array
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search -  function that searches for a value in a sorted array of
 *  integers using the Binary search algorithm
 * @array: A pointer to the first element of the array.
 * @size: The number of elements in array.
 * @value: The value to search for.
 * Return: The first index where value is located.
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid = 0;

	if (!array)
		return (-1);


	while (left <= right)
	{
		mid = left + (right - left) / 2;
		print_array(array + left, right - left + 1);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
