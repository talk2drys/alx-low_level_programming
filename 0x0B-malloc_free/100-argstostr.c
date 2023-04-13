#include "main.h"
#include <stdlib.h>

/**
 *argstostr - concatenates all arguments of the program.
 *
 *@ac: argument count.
 *@av: pointer to array of argument
 *Return: (NULL) if ac == 0 or av == null, Pointer to new string.
 *(NULL) on fail.
 */
#include <stdlib.h>
#include <string.h>

char *argstostr(int ac, char **av)
{
	int current_position = 0;
	int total_length = 0;
	char *result;
	int i;

	if (ac == 0 || av == (NULL))
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}

	/* llocate memory for the concatenated string */
	result = (char *)malloc(sizeof(char) * (total_length + 1));
	if (result == (NULL))
		return (NULL);


	for (i = 0; i < ac; i++)
	{
		strcpy(result + current_position, av[i]);
		current_position += strlen(av[i]);
		result[current_position++] = '\n';
	}

	result[total_length] = '\0';

	return (result);
}
