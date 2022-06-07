#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
/**
 * * * main - Entry point
 * * * Return: Always 0 (Success)
 * **/

int main(void)
{
	char n;
	
	for(n='a'; n < 'z'; n++)
	{
		putchar(n);
		if (n == 'y')
		{
			putchar('z');
		}
	}
	return (0); 
}
