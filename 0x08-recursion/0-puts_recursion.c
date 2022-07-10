#include "main.h"

/*
 * _puts_recursion-print recursion string
 * @s:the string
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (s != '\0')
	{
		puts(*s);
		_puts_recursion(s+1);
	}
	else
		puts('\n');
}
