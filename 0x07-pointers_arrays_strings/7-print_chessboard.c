#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strstr-cette fonction permet de rechercher une occurence
 * @board: le tableau 
 * @a: le nombre de lignes
 * Return: Always 0 success
 */
void print_chessboard(char board(*a)[8])
{
	int i;
	int j;

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", board[i][j]);
		}
		printf("\n");
	}
}
