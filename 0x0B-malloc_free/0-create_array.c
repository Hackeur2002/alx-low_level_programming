#include "main.h"
#include <stdlib.h>
/**
 * create_array-crée des tableaux dinamiquement
 * @size: la taille
 * @c: le caratère
 * Return: a ponter to the array or NULL
 */
char *create_arry(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size == 0)
		return (NULL);

	t = malloc(sizeof(char) * size);

	if (t == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		t[i] = c;

	return (t);

}
