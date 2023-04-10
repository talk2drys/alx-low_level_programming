#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments as string
 *
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	/** first element in the array argv is the name of first element*/
	printf("%s\n", argv[0]);
	return (0);
}
