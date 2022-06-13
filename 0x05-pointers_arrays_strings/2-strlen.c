#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen-"This pogram reset the variable with pointers"
 * @s: Le pointer
 * return: lenght of a pointer
 */

int _strlen(char *s)
{
	char c[] = *s;
	int compteur;

	compteur = strlen(c);
	return (compteur);
}
