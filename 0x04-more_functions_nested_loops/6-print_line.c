#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_line-"this program print line"
 * @n: the numbers
 * File: 6-print_line
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
