#include "main.h"

/**
 * _islower - checks for lowercase character.
 *
 * @c: the character to check
 *
 * Return: on success, 0 or 1
 *         on error, -1 is returned, and errno is set appropriately
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
