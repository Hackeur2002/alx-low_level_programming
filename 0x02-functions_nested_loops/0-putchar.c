#include "main.h"
#include <unistd.h>
/**
 * * * _putchar - "The program prints _putchar followed by a new line"
 * * * File: "0-putchar.c"
 * * * Return: On success 1.
 * * * On error, -1 is returned, and errno is set appropriately.
 * **/
int _putchar(char c)
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
	return (0);
}
