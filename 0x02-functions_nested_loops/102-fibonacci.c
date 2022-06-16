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
	int i;
	unsigned long f1, f2, add;

	f1 = 0;
	f2 = 1;
	for (i = 0; i < 50; i++)
	{
		add = f1 + f2;
		printf("%lu", add);
		f1 = f2;
		f2 = add;
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);

}
