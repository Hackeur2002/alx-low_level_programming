#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * main-"this program print triangle"
 * File: 10-print_triangle
 * Return: Always 0
 */

int main(void)
{
	long n, div;

	n = 612852475143;

	while (div < (n / 2))
	{
		if ((n % 2) == 0)
		{
			n /= 2;
			continue;
		}
		for (div = 3; div < (n / 2); div += 2)
		{
			if ((n % div) == 0)
				n /= div;
		}
	}
	printf("%ld\n", n);
	return (0);
}
