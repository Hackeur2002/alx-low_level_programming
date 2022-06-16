#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * more_numbers-"this program print more numbers"
 * File: 4-print_most_numbers
 * */

void more_numbers(void)
{
	int n, nu;

	for (n = 0; n <= 9; n++)
	{
		for (nu = 0; nu <= 14; nu++)
		{
			if (n != 2 && n != 4)
				_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
