#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup -  function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 *
 * @str: the string
 *
 * Return: NULL or dup_str
 */

char *_strdup(char *str)
{
	char *dup_str;
	int n = 0;

	if (!str)
		return (NULL);
	dup_str = malloc((int)strlen(str) + 1);
	if (!dup_str)
		return (NULL);
	while (str[n])
	{
		dup_str[n] = str[n];
		n++;
	}
	return (dup_str);
}
