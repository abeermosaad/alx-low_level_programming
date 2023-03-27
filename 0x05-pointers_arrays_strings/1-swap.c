#include "main.h"
/**
 * swap_int - swap_int
 *
 * @a: the parameters
 *
 * @b: the parameters
 *
 * Return: on success,
 *         on error, -1 is returned, and errno is set appropriately
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
