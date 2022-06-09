#include "main.h"
#include <unistd.h>
#include <ctype.h>
/**
 * print_sign-"The program give the sign of numbers"
 * @n: "The number to check"
 * File: "5-sign.c"
 * Return: "Always 0 (Success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else 
	{
		_putchar('-');
		return (-1);
	}
}
