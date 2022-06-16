#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isupper-"this program check if character is upper"
 * @c: the number to check
 * Return: 1 if is upper
 * */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
