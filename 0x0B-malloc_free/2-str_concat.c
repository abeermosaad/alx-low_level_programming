#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat -  fconcatenates two strings.
 *
 * @s1: the first string
 *
 * @s2: the second string
 *
 * Return: NULL or new
 */
char *str_concat(char *s1, char *s2)
{
	int len;
	int b, a;
	char *new;

	b = 0;
	a = 0;
	len = (int)strlen(s1) + (int)strlen(s2);
	new = malloc(sizeof(char) * len + 1);
	if (!new)
		return (NULL);
	while (s1 && s1[a])
		new[b++] = s1[a++];
	a = 0;
	while (s2 && s2[a])
		new[b++] = s2[a++];
	new[b] = '\0';
	return (new);
}
