#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat-"The concatene fonction and it's a pointer"
 * @dest: first pointer
 * @src: second pointer
 * @n: the number
 * Return: a pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
