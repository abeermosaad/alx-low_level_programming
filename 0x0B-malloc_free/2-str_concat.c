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
	int i = 0, l = 0;
	char *array;
	int j = 0, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	l = i + j;
	array = malloc(2);
	if (array == NULL)
		return (NULL);
	j = 0;
	while (k < l)
	{
		if (k <= i)
			array[k] = s1[k];
		if (k >= i)
		{
			array[k] = s2[j];
			j++;
		}
		k++;
	}
	array[k] = '\0';
	return (array);
}
