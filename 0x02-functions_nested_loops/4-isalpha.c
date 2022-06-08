#include "main.h"
#include <unistd.h>
#include <ctype.h>
/**
 * _isalpha-"The program check the alphabet"
 * @c: "The character to check"
 * File: "4-isalpha.c"
 * Return: "Always 0 (Success)
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
