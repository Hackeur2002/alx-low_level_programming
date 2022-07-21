#include "main.h"
/**
 * clear_bit - convert a binary number to an unsigned int
 * @n:binaty
 * @index:l'index
 * Return: unsigned long int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	
	if (index > 63)
		return (-1);
	i = 1 << index;
	if (*n & i)
		*n ^= i;
	return (1);
}
