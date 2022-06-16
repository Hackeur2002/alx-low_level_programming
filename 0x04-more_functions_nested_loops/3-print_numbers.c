#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_numbers-"this program check if character is upper"
 * File: 3-print_numbers
 * */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		_putchar((n % 10) + '0');

	_putchar('\n');
}
