#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "math.h"
/**
 * * * main - Entry point
 * * * Return: Always 0 (Success)
 * **/

int main(void)
{
	int n;
	char m;
	
	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	for (m = 'a'; m <= 'f'; m++)
		putchar(m);

	putchar('\n');
	return (0);
}
