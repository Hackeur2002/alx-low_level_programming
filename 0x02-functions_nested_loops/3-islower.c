#include "main.h"
#include <unistd.h>
#include <ctype.h>
/**
 * _islower-"The program check the lower alphabet followed by a new line"
 * File: "2-islower.c"
 * Return: "Always 0 (Success)
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
