#include "main.h"
#include <stdbool.h>

/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	_Bool ret = ((char)c >= 'A' && (char)c <= 'Z');

	return ((int)ret);
}
