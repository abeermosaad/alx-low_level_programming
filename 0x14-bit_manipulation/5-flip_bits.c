#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to
 *				get from one number to another.
 * @n: number
 * @m: nd num
 * Return:  number of bits you would need to flip to
 *				get from one number to another.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int compare = n ^ m;

	for (i = 0; i < 64; i++)
	{
		if (compare & 1)
			count++;
		compare = compare >> 1;
	}
	return (count);
}
