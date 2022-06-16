#include "main.h"
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * print_times_table-"print the 9 times table"
 * File: "9-times_table.c"
 * Return: "Always 0 (Success)
 */

void print_times_table(int n)
{
	int h, nu, m;
	
	if (n >= 0 && n <= 15)
	{

		for (nu = 0; nu <= n; nu++)
		{
			_putchar('0');
			for (m = 1; m <= n; m++)
			{
				_putchar(',');
				_putchar(' ');
				h = m * nu;
				if (h <= 99)
					_putchar(' ');
				if (h <= 9)
					_putchar(' ');
				
				if (h >= 100)
				{
					_putchar((h / 100) + '0');
					_putchar(((h / 100)) % 10 + '0');
				}
				else if (h <= 99 && h >= 100)
				{
					_putchar((h / 10) + '0');
				}
				
				_putchar((h % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
