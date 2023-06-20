#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - concatenates two strings.
 *
 * @src: the parameter
 *
 * @dest: the parameter
 *
 * Return: on success,
 *         on error, -1 is returned, and errno is set appropriately
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	int end = (int)strlen(dest);

	while (src[i] != '\0')
	{
		dest[end + i] = src[i];
		i++;

	}
	dest[end + i] = '\0';

	return (dest);
}
