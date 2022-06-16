#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_most_numbers-"this program print most numbers"
 * File: 4-print_most_numbers
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
			_putchar((n % 10) + '0');
	}
	_putchar('\n');
}
