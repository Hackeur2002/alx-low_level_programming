#include "main.h"
#include <string.h>
/**
 * _strpbrk-cette fonction permet de rechercher une occurence
 * @s: le tableau dans lequel on recherche
 * @accept: ce qu'il faut rechercher
 * Return: a pointer sur dest
 */
char *_strpbrk(char *s, char *accept)
{
	char retour;

	retour = strpbrk(s, accept);
	return (retour);
}
