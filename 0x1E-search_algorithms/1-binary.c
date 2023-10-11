#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>

/**
 * binary_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, or -1 if value not present or
*/

int binary_search(int *array, size_t size, int value)
{
	size_t r = size - 1;
	size_t l = 0, mid;

	if (array == NULL || size == 0)
		return (-1);

	while (l <= r)
	{
		print_array1(array, l, r);
		mid = l + (r - l) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			r = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}

/**
 * print_array1 - print elements of array
 * @array: pointer to the first element of the array to print
 * @start: first element of array to print from
 * @end: last element of array to print to
 * Return: Non
*/

void print_array1(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[end]);
}
