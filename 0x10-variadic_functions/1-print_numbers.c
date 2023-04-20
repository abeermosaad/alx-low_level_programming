#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 * @n: num of args
 * @separator: the string to be printed between numbers
 * Return: on success, prints numbers
 *         on error, -1 is returned, and errno is set appropriately
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		if (i == (n - 1))
		{
			printf("%d", x);
			continue;
		}
		if (separator == NULL)
		{
			printf("%d", x);
			continue;
		}
		printf("%d%s", x, separator);
	}
	printf("\n");
}
