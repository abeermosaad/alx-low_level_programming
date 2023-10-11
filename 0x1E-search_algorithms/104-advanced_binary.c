#include "search_algos.h"

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
 * advanced_binary -  function that searches for a value in a sorted array
 * @array: A pointer to the first element of the array.
 * @size: The number of elements in array.
 * @value: The value to search for.
 * Return: The first index where value is located.
*/
int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid = 0;
	int idx = -1;

	if (!array || !size)
		return (-1);

	print_array(array, size);

	mid = left + (right - left) / 2;

	if (array[mid] == value)
	{
		if (mid == 0 || array[mid - 1] != value)
			return (mid);
		right = mid;
	}
	else if (array[mid] < value)
		left = mid + 1;
	else
		right = mid - 1;

	if (left <= right)
		idx = advanced_binary(array + left, right - left + 1, value);

	return ((idx >= 0) ? (idx + (int)left) : idx);
}
