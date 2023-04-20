#include <stdlib.h>


/**
 * print_name - print name
 *
 * @name: name to print
 * @f: point to a function that print name using predifined parameter
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == (void *)0 || f == (void *)0)
	  return;
	f(name);
}

