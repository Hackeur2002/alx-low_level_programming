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
	int i;
	int j;

	for (i = n - 1; i >= n / 2; i--)
	{
		j = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = j;
	}
}
