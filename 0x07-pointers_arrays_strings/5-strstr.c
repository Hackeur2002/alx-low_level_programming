#include "main.h"
#include <string.h>
/**
 * _strstr-cette fonction permet de rechercher une occurence
 * @haystack: le tableau dans lequel on recherche
 * @needle: ce qu'il faut rechercher
 * Return: a pointer sur dest
 */
char *_strstr(char *haystack, char *needle)
{
	char *retour;

	retour = strstr(haystack, needle);
	if (retour != NULL)
	{
		return (retour);
	}
	else
	{
		return (NULL);
	}
}
