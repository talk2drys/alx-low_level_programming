#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	const int STDOUT = 1;
	const int BUF_LENGTH = 1;
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		write(STDOUT, &str[index], BUF_LENGTH);
	}
	write(STDOUT, "\n", BUF_LENGTH);
}
