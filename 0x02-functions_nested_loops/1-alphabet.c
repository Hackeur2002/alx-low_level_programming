#include "main.h"
#include <unistd.h>
/**
 * main-"The program prints alphabet followed by a new line"
 * File: "1-alphabet.c"
 * Return: "Always 0 (Success)
 */

void print_alphabet(void)
{
	for(int i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	return (0);
}

int main(void) 
{
	print_alphabet();

	return (0);
}
