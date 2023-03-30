#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - concatenates two strings.
 *
 * @src: the parameter
 *
 * @dest: the parameter
 *
 * @n: the parameter
 *
 * Return: on success,
 *         on error, -1 is returned, and errno is set appropriately
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	int end = (int)strlen(dest);

	int end2 = (int)strlen(src);

	if (n > end2)
	{
		n = end2;

	}
	for (i = 0; i < n; i++)
	{
		dest[end + i] = src[i];

	}

	return (dest);
}
