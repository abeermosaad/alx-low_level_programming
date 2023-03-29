#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_array - prints every other character of a string
 *
 * @a: the parameter
 *
 * @n: the parameter
 *
 * Return: on success,
 *         on error, -1 is returned, and errno is set appropriately
 */
void print_array(int *a, int n)
{
	if (n <= 0)
		printf("\n");
	else
	{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", *(a + i));
	}
	printf("%d\n", *(a + (n - 1)));
	}
}
