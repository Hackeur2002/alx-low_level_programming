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
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		int compteur += atoi(argv[i]);
	}
	printf("%d\n", compteur);
	return (0);
}
