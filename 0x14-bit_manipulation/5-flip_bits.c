#include "main.h"
/**
 *flips_bits - convert a binary number to an unsigned int
 * @n:binaty
 * @m:l'index
 * Return: unsigned long int
 */
int flip_bits(unsigned long int n, unsigned int m)
{
	unsigned int i;
	
	for (i = 0; n || i; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			i++;
	}
	return (i);
}
