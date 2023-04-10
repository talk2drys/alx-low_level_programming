#include <stdio.h>

#define UNUSED_ARGV char *argv[] __attribute__((unused))

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @UNUSED_ARGV: not used
 *
 * Return: 0 (success)
 */
int main(int argc, UNUSED_ARGV)
{
	/** subtract 1 from total number of argument, 1 represent program name */
	printf("%d\n", argc - 1);
	return (0);
}
