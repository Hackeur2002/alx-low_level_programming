#include "main.h"
/**
 * set_bit - convert a binary number to an unsigned int
 * @n:binaty
 * @index:l'index
 * Return: unsigned long int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	
	if (index > 63)
		return (-1);
	i = 1 << index;
	*n = (*n | i);
	return (1);
}
