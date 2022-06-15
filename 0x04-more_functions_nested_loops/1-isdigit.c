#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit-"this program check if character is upper"
 * @c: the number to check
 * Returns: 1 if is upper
 * Returns: 0 f is not upper
 * */

int _isdigit(int c)
{
	if (isdigit(c) == true)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
