#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @n: num of args
 * @separator: the string to be printed between numbers
 * Return: on success, prints numbers
 *         on error, -1 is returned, and errno is set appropriately
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *x = va_arg(args, char*);

		if (x == NULL)
			x = "(nil)";
		if (i == (n - 1))
		{
			printf("%s", x);
			continue;
		}
		if (separator == NULL)
		{
			printf("%s", x);
			continue;
		}
		printf("%s%s", x, separator);
	}
	printf("\n");
}
