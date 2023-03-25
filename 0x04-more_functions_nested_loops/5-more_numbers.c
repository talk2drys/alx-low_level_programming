#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 * Return: does not return anything
 */
void more_numbers(void)
{
	int line, digit;

	for (line = 0; line < 10; line++)
	{
		for (digit = 0; digit < 15; digit++)
		{
			if (digit >= 10)
			{
				_putchar((digit / 10) + '0');
			}
			_putchar(digit % 10 + '0');
		}
		_putchar('\n');
	}
}
