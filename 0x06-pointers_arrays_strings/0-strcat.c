#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat-"The concatene fonction and it's a pointer"
 * @dest: first pointer
 * @src: second pointer
 * Return: a pointer
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
