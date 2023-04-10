#include "main.h"

/**
 * *_strncat - concatenates @src to @dest
 *
 * @src: the source string to append to @dest
 *
 * @dest: the destiation string to be concatenated upon
 *
 * @n: num of bytes
 *
 * Return:pointer to the resulting string
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
