#include "main.h"
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main-"Lists all the natural numbers"
 * File: "101-natural.c"
 * Return: "Always 0 (Success)
 */

int main(void)
{
	int i, add;

	add = 0;
	for(i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			add += i;
	}
	printf("%d\n", add);

	return (0);

}
