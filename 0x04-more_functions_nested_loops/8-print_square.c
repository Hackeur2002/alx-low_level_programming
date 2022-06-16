#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_square-"this program print square"
 * @size: the numbers
 * File: 8-print_square
 * */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i <= size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			

			if (i == size - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
