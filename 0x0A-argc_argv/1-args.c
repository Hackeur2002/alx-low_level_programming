#include <stdio.h>
#include "main.h"
/**
 * main - prints the name
 * @argc: number of argument
 * @argv: un tablea
 * Return: 0 Always
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%s\n", argc - 1);
	return (0);
}
