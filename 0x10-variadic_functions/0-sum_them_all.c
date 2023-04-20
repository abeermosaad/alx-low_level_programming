#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: num of args
 * Return: on success, sum
 *         on error, -1 is returned, and errno is set appropriately
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	int i, sum = 0;

	va_start(args, n);
	for (i = 0; i < (int)n; i++)
	{
		int x = va_arg(args, int);

		sum += x;
	}
	return (sum);
}
