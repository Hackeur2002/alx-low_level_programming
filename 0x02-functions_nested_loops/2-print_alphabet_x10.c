#include "main.h"
#include <unistd.h>
/**
 * print_alphabet_x10-"The program prints alphabet followed by a new line"
 * File: "1-alphabet.c"
 * Return: "Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
