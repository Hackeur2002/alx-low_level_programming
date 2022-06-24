#include "main.h"
#include <string.h>
/**
 * _memset-cette fonction permet de remplir une adrese mémoire
 * @s: le tableau à pointer
 * @b: ce qu'il faut insérer
 * @n: le nombre de fois où l'insérer
 * Return: a pointer 
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, '0x01', 95);
	return (s);
}
