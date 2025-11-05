#include <stdio.h>
#include <stdlib.h>
/**
 * main - additionne deux nombres entiers passés en arguments
 *
 * @argc: nombre d'arguments
 * @argv: tableau d'arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = argc;

	if (i < 3)
	{
		printf("Error\n");
		return (1);
	}

	int j;

	for (j = 1; j < i; j++)
	{
		char *arg = argv[j];

		int k;

		for (k = 0; arg[k] != '\0'; k++)
		{
			if (arg[k] < '0' || arg[k] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	int sum = 0;

	for (j = 1; j < i; j++)
	{
		sum += atoi(argv[j]);
	}
	printf("%d\n", sum);
	return (0);
}
