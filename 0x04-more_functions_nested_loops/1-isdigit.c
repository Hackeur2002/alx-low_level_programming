#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit-"this program check if character is upper"
 * @c: the number to check
 * Return: 1 if is digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
