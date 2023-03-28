#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int index = 0;

	for (;;)
	{
		if (s[index] == '\0')
			break;
		index++;
	}
	return (index);
}
