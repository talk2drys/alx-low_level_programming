#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - duplicate string returning a pointer to a new buffer
 *
 * @str: string to duplicate
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *buffer;
	size_t len_str;

	if (str == NULL)
		return (NULL);

	/* we need to calculate to length of the array */
	len_str = strlen(str);

	/* create new buffer to old entire string + terminating character */
	buffer = malloc((len_str + 1) * sizeof(char));
	if (buffer == NULL)
		return (NULL);

	/* copy content to new buffer */
	strncpy(buffer, str, len_str);
	strncpy(buffer + len_str, "\0", 1); /* append terminating character */

	return (buffer);
}
