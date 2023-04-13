#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: size of the array to create
 * @c: charactet to initialize the array with
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *string;

	if (size == 0)
		return (NULL);

	/* request enough buffer to hold array of char of length size */
	string = (char *)malloc(size * sizeof(char));

	/* error handling */
	if (string == NULL)
		return (0);

	/* initialize buffer with character c */
	memset(string, c, size);

	return (string);
}
