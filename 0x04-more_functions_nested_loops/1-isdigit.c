#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: number to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	int result = ((char)c >= '0' && (char)c <= '9');

	return (result);
}
