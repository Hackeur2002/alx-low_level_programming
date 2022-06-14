#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2-"This pogram reset the variable with pointers"
 * @str: Le pointer
 * Return: "Always 0 (Success)"
 */

void puts2(char *str)
{
	int i, t;
	char *b;

	t = strlen(str);
	b = &str[t+1];
	*b = "\0";

	for(i = 0; i <= t+1; i = i+2)
	{
		printf("%c",str[i]);
	}
	putchar('\n');
}
