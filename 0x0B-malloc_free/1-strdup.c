#include "main.h"

/**
 * create_array - write a func that creates an array of char, and
 * init it with a specific char
 * @size: size of array
 * @c: input char
 * Return: NULL if size = 0 or ptr to the array or NULL if it fails
 **/
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0' ;  size++)
	;

	/*+1 on the size puts the end of string character*/
	| m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
		return (NULL);

	else
	{
		for (; i < size; i++)
			m[i] = str[i];
	}
	return (m);
}
