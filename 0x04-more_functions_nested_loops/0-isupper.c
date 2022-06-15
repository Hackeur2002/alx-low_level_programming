#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isupper-"this program check if character is upper"
 * @c: the number to check
 * Returns: 1 if is upper
 * Returns: 0 f is not upper
 * */

int _isupper(int c)
{
	if (isupper(c) == true)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
