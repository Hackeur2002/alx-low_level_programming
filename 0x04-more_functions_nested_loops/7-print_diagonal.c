#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_diagonal-"this program print diagonal"
 * @n: the numbers
 * File: 7-print_diagonal
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');

			if (i == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
