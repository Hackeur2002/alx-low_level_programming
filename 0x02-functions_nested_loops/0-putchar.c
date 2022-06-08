#include "main.h"
#include <unistd.h>
/**
 * * * main - Entry point
 * * * _putchar - writes the character c to stdout
 * * * @c: The character to print
 *
 * * * Return: On success 1.
 * * * On error, -1 is returned, and error is set appropriately
 * * * Return: Always 0 (Success)
 * **/
int _putchar_(char c)
{
	return (write(1, &c, 1));
}
int main(void) 
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	Return 0;
}
