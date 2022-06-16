#include "main.h"
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * jack_bauer-"print hours 00:00 to 23:59"
 * File: "8-24_hours.c"
 * Return: "Always 0 (Success)
 */

void jack_bauer(void)
{
	int h, n;
	
	for (h = 0; h <= 23; h++)
	{
		for (n = 0; n <= 59; n++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar('\n');
		}
	}
}
