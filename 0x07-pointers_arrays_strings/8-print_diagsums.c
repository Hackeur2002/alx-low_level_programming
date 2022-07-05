#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_diagsums-cette fonction permet de rechercher une occurence
 * @a: le nombre de lignes
 * @size: la taille des tableaux
 * Return: Always 0 success
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;

	j = 0;
	for (i = 0; i <= size; i++)
	{
		j = j + a[i][i];
	}
	printf("%d", j);
	j = 0;

	for (i = size; i >= 0; i--)
	{
		j = j + a[i][i];
	}
	printf("%d", j);
}
