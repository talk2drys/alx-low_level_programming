#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * except 2 and 4, followed by a new line
 */
void print_most_numbers(void)
{
	int charcater;

	for (charcater = 48; charcater < 58; charcater++)
	{
		if (charcater != 50 && charcater != 52)
		{
			_putchar(charcater);
		}
	}

	_putchar('\n');
}
