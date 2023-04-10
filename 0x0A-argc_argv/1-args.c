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
	/** first element in the array argv is the name of first element*/
	printf("%d\n", argc);
	return (0);
}
