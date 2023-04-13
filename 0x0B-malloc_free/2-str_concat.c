#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first source of string
 * @s2: second source of string
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *buffer;

	/*if NULL is entered for either of the input treat is as empty string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* we need to calculate to length of the array */
	size_t len_s1 = strlen(s1);
	size_t len_s2 = strlen(s1);

	/* create new buffer to old entire string + terminating character */
	buffer = malloc(((len_s1 + len_s1) + 1) * sizeof(char));
	if (buffer == NULL)
		return (NULL);

	/* copy content to new buffer */
	strncpy(buffer, s1, len_s1);
	strncpy(buffer + len_s2, s2, len_s2);
	strncpy(buffer + len_s1 + len_s2, "\0",
			1); /* append terminating character */

	return (buffer);
}
