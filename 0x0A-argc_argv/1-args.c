#include <stdio.h>
/**
 * main - prints its name
 * @argc: la taille du tableau
 * @argv: le tableau en question
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
