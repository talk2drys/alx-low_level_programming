#include "main.h"

/**
 * print_line - print straight line on the terminal
 * @n: number of times to print the character UNDERSCORE
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int count;

		for (count = 1; count <= n; count++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
