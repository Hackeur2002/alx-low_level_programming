#include "main.h"
#include <unistd.h>
/**
 * main-"The program prints alphabet followed by a new line"
 * File: "1-alphabet.c"
 * Return: "Always 0 (Success)
 */

void print_alphabet(void)
{
	char i;
	for(i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

int main(void) 
{
	print_alphabet();

	return (0);
}
