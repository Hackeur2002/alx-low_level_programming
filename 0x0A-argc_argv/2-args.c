#include <stdio.h>
/**
 * main - prints its name
 * @argc: la taille du tableau
 * @argv: le tableau en question
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	for (int a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}
