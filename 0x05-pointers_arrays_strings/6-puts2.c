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

	t = _strlen(str);

	for(i = 0; i <= t; i = i+2)
	{
		printf("%d",str[i]);
	}
}
