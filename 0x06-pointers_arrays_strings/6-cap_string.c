#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * cap_string-i"compare two chaine"
 * @c: first pointe
 * Return: lettters uppercase
 */
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		while (!(c[i] >= 'a' && c[i] <= 'z'))
			i++;

		if (c[i - 1] == ' ' ||
		c[i - 1] == '\t' ||
		c[i - 1] == '\n' ||
		c[i - 1] == ',' ||
		c[i - 1] == ';' ||
		c[i - 1] == '.' ||
		c[i - 1] == '!' ||
		c[i - 1] == '?' ||
		c[i - 1] == '"' ||
		c[i - 1] == '(' ||
		c[i - 1] == ')' ||
		c[i - 1] == '{' ||
		c[i - 1] == '}' ||
		i == 0)
			c[i] = c[i] - 32;
	}
	return (c);
}
