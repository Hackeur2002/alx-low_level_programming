#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup-crée des tableaux dinamiquement et copie une chaine dupliqué dedans
 * @str: la chaine a duppliqué
 * Return: adresse de l'emplacement mémoire
 */
char *_strdup(char *str)
{
	char *t;
	
	if (str != NULL)
	{
		*t = strdup(str);
		return (t);
	}
	else
		return (NULL);
}
