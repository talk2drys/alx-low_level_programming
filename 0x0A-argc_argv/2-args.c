#include <stdio.h>

#define UNUSED_ARGV char *argv[] __attribute__((unused))

/**
 * main - print all received argument in new line
 * @argc: number of arguments
 * @argv: array of string argument
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int index = 0;

	while (index < argc)
	{
		printf("%s\n", argv[index]);
		index = index + 1;
	}

	return (0);
}
