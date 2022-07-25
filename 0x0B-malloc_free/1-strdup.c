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
	char *c
	int i;
	int j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	c = (char *)malloc(sizeof(char) * (i + 1));
	if (c == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		c[j] = str[j];
	return (c);
}
