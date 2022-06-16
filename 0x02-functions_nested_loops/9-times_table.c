#include "main.h"
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * times_table-"print the 9 times table"
 * File: "9-times_table.c"
 * Return: "Always 0 (Success)
 */

void times_table(void)
{
	int h, n, m;
	
	for (h = 0; h <= 9; h++)
	{
		_putchar('0');

		for (n = 0; n <= 9; n++)
		{
			_putchar(',');
			_putchar(' ');
			m = h * n;
			if (m <= 9)
				_putchar(' ');
			else
				_putchar((m / 10) + '0');

			_putchar((m % 10) + '0');
		}
		_putchar('\n');
	}
}
