#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * string_toupper-i"compare two chaine"
 * @c: first pointe
 * Return: lettters uppercase
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
}
