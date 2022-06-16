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

	
	While (1)
	{
		add = f1 + f2;
		if (add > 4000000)
			break;
		if ((add % 2) == 0)
			i += add;
		
		f1 = f2;
		f2 = add;
	}
	printf("%.0f\n", i);

	return (0);

}
