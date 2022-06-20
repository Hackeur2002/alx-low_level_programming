#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy-"The copy a chaine"
 * @dest: first pointer
 * @src: second pointer
 * @n: the number
 * Return: a pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
