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
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}