#include "main.h"
#include <string.h>
/**
 * _memcpy-cette fonction permet de copier une adrese mémoire
 * @dest: le tableau dans lequel on copie
 * @src: ce qu'il faut copier (le tableau)
 * @n: le nombre d'octet à copier
 * Return: a pointer sur dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
