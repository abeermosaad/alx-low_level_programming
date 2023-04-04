#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * _strchr - copies memory area
 *
 * @s: pointer to the null-terminated string to be searched.
 *
 * @c: the character to be located.
 *
 * Return: on sucess will return s.
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
