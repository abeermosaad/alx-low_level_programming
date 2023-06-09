#include "variadic_functions.h"
#include <string.h>
#include <stdlib.h>
/**
 * print_char - .
 * @args: .
 * Return: on success, .
 *         on error, -1 is returned, and errno is set appropriately
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_int - .
 * @args: .
 * Return: on success, .
 *         on error, -1 is returned, and errno is set appropriately
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_float - .
 * @args: .
 * Return: on success, .
 *         on error, -1 is returned, and errno is set appropriately
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_string - .
 * @args: .
 * Return: on success, .
 *         on error, -1 is returned, and errno is set appropriately
 */
void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char*);
	if (str != NULL)
	{
		printf("%s", str);
		return;
	}
	printf("(nil)");
}
/**
 * print_all - .
 * @format: n.
 * Return: on success, .
 *         on error, -1 is returned, and errno is set appropriately
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, idx;
	char s[] = "sifc", *m;
	/**
	* struct - Struct cformat
	*
	*@c: The operator
	*@type_of: The function associated
	*/
	struct type
	{
		char c;
		void (*type_of)(va_list);
	};

	struct type tp[] = {{'s', print_string}, {'i', print_int},
	{'f', print_float}, {'c', print_char}};
	va_start(args, format);
	i = 0;
	while ((format) && (format[i]))
	{
		m = strchr(s, format[i]);
		while (m)
		{
			idx = (int)(m - s);
			tp[idx].type_of(args);
			if (format[i + 1] != '\0')
				printf(", ");
			break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
