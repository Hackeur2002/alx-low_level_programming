#include "main.h"
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
/**
 * print_last_digit-"The program gives the last digit of a number"
 * @a: "The number to check"
 * File: "7-print_last_digit.c"
 * Return: "Always 0 (Success)
 */

int print_last_digit(int a)
{
	_abs(a);
	int b = a % 10;
	_putchar('0' + b);
	return (a % 10);
}

