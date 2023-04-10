#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *_strcpy - copies the string
 *
 * @dest: the parameter
 *
 * @src: the parameter
 *
 * Return: on success,
 *         on error, -1 is returned, and errno is set appropriately
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= (int) strlen(src); i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
