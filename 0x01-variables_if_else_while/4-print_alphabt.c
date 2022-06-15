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

	for (n = 'a'; 'a' >= n < 'e' && 'f' >= n < 'q' && 'r' >= n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
