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
	int n; 
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = n % 10;
	first = log10(n) + 1;
	printf("Last digit of %d is ", n);
	if (last > 5)
	{
		printf("%d and is greater than 5", last);
	}
	else if (last = 0)
	{
		printf("%d and is 0", last);
	}
	else if ((last < 6) && (last != 0))
	{
		printf("%d and is less than 6 and not 0", last);
	}

	return (0);
}
