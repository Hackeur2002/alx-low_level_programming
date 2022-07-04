#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_chessboard-cette fonction permet de rechercher une occurence
 * @a: le nombre de lignes
 * Return: Always 0 success
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", [i][j]);
		}
		printf("\n");
	}
}
