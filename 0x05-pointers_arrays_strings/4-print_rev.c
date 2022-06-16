#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev-"This pogram reset the variable with pointers"
 * @s: Le pointer
 * Return: "Always 0 (Success)"
 */

void print_rev(char *s)
{
	int i, j;

	i = 0;
	while (s[j++])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);
	
	_putchar('\n')
}
