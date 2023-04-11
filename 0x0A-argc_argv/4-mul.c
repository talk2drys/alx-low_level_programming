#include <stdio.h>
#include <stdlib.h>

/**
 * main - Add two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;

	/**
	 * check if we are supplied with 2 argument third is the name of the
	 * binary
	 */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 == 0 || num2 == 0)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", num1 + num2);
	return (0);
}
