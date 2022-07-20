#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints its name
 * @argc: la taille du tableau
 * @argv: le tableau en question
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int compteur;

	compteur = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		compteur += atoi(argv[i]);
	}
	printf("%d\n", compteur);
	return (0);
}
