#include "main.h"
#include "string.h"
#include <unistd.h>

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int len = strlen(s);

	for (; len >= 0; len--)
	{
		write(1, &s[len - 1], 1);
	}

	write(1, &"\n", 1);
	write(1, &"\n", 1);
}
