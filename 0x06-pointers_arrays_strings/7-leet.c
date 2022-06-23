#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * leet-"compare two chaine"
 * @c: first pointe
 * Return: lettters uppercase
 */
char *leet(char *c)
{
	int i;
	int j;
	char b[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j <= 7; j++)
		{

		if (c[i] == b[j] ||
		c[i] - 32 == b[j])
			c[i] = j - 32;
	}
	return (c);
}
