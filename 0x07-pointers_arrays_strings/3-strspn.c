#include "main.h"
#include <string.h>
/**
 * _strspn-cette fonction permet de rechercher une occurence
 * @s: le tableau dans lequel on recherche
 * @accept: ce qu'il faut rechercher
 * Return: a pointer sur dest
 */
unsigned int *_strchr(char *s, char *accept)
{
	unsigned int retour;

	retour = strspn(s, accept);
	return (retour);
}
