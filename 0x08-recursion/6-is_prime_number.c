#include "main.h"

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
/**
 * _premier - donne le nombre premier
 * @n:le nombre
 * @c:un autre nombre
 * Return: 1 ou 0
 */
int _premier(int n, int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + _premier(n, c + 1));
}
