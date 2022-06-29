#include "main.h"
#include <string.h>
/**
 * _strchr-cette fonction permet de rechercher une occurence
 * @s: le tableau dans lequel on recherche
 * @c: ce qu'il faut rechercher
 * Return: a pointer sur dest
 */
char *_strchr(char *s, char c)
{
	char *p;

	p = strchr(s, c);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		return (p);
	}
}
