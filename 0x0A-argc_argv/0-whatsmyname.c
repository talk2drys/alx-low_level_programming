#include <stdio.h>

#define UNUSED_ARGC int argc __attribute__((unused))

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments as string
 *
 * Return: 0 (success)
 */
int main(UNUSED_ARGC, char **argv)
{
	/** first element in the array argv is the name of first element*/
	printf("%s\n", argv[0]);
	return (0);
}
