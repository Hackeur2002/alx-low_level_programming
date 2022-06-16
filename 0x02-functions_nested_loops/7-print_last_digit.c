#include "main.h"
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * print_last_digit-"The program gives the last digit of a number"
 * @a: "The number to check"
 * File: "7-print_last_digit.c"
 * Return: "Always 0 (Success)
 */

int print_last_digit(int a)
{
	int last;
	last = a % 10;

	if (last < 0)
		last *= -1;

	_putchar(last + '0');
	return (last);
}


