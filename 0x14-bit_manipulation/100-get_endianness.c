#include "main.h"
/**
 *get_endianness - convert a binary number to an unsigned int
 * 
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int i;
	char *c;
	
	i = 1;
	c = (char *) &x;

	return ((int)*c);
}
