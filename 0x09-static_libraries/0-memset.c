#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to the memory block to be filled
 *
 * @b: value to be set in each byte of the memory block
 *
 * @n : the number of bytes to be filled with the specified value.
 *
 * Return: on sucess will return s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < (int)n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
