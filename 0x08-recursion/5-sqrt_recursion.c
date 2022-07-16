#include "main.h"

/**
 * _sqrt_recursion - print recursion string
 * @n:number
 * Return: valeur
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (_racine(n, 2));
}
/**
 * _racine-racine
 * @n:the number
 * @x:other number
 * Return: racine carré du nombre
 */
int _racine(int n, int x)
{
	if (x * (n / x) == n)
		return (x);
	else
		return (-1);
	return (0 + _racine(n, x + 1));
}
