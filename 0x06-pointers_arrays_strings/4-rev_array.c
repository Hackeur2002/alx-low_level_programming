#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array-"compare two chaine"
 * @a: first pointer
 * @n: number of elements of the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int b[n];
	int n, j;
	
	j = 0;
	for (i = n - 1; i >= 0; i--)
	{
		b[j] = a[i];
		j++;
	}
	for (i = 0; i <= n - 1; i++)
	{
		a[i] = b[i];
	}
}
