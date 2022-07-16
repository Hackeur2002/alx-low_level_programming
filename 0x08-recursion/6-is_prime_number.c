#include "main.h"
/**
 * _premier - donne le nombre
 * @n:le nombre
 * @x:un autre nombre
 * Return: 1 ou 0
 */
int _premier(int n, int x)
{
	if (n % x == 0)
	{
		if (n == x)
			return (1);
		else
			return (0);
	}
	return (0 + _premier(n, x + 1));
}
/**
 * is_prime_number - print recursion string
 * @n:number
 * Return: valeur
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (_premier(n, 2));
}
