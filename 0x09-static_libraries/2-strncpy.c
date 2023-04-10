#include "main.h"

/**
 * _strncpy - Copies at most an inputted number
 *            of bytes from string src into dest.
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

char *_strncpy(char *dest, char *src, int n)
{
	int index, src_len = (int) strlen(src);

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
