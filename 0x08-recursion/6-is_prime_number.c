#include "main.h"

/**
 * _sqrt_recursion - print recursion string
 * @n:number
 * Return: valeur
 */
int _sqrt_recursion(int n)
{
	int a;

	a = n * n;
	if (n < 0)
	{
		return (-1);
	}
	else if (n ==0)
		return (0);
	else if (a != n)
	{
		return (1 * _sqrt_recursion(n / 2));
	}
	else
		return (a);
}
