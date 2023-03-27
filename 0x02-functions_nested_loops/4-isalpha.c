#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 *
 * @c: the character to check
 *
 * Return: on success, 0 or 1
 *         on error, -1 is returned, and errno is set appropriately
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
