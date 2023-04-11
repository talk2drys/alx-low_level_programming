#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount.
 * of money.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int cents = 0;
	int number_coins = 0;

	/**
	 * we need exactly one argument
	 */
	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents == 0)
	{
		printf("Error\n");
		return (1);
	}

	/**
	 * we will start dividing from the largest cent to the smallest
	 * since we are looking for the minimum number of change.
	 */
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;

		number_coins += 1;
	}
	printf("%d\n", number_coins);
	return (0);
}
