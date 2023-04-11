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
	int arg;
	int sum = 0;

	/**
	 * check if we are supplied with 2 argument third is the name of the
	 * binary
	 */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (arg = 1; arg < argc; arg++)
	{
		int num = atoi(argv[arg]);

		if (num == 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
