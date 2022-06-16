#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_number-"this program print triangle"
 * File: 10-print_triangle
 * @n: the integer
 */

void print_number(int n)
{
	unsigned int m;

	m = n;

	if (n < 2)
	{
		_putchar('-');
		m  = -m;
	}
	if ((num / 10) > 0)
		print_number(m / 10);
	
	_putchar((m % 10) + '0');
}
