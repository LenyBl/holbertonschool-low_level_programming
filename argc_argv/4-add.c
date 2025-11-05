#include <stdio.h>
#include <stdlib.h>

/**
 * main - additionne deux nombres entiers passés en arguments
 *
 * @argc: nombre d'arguments
 * @argv: tableau d'arguments
 *
 * Return: 0 si succès, 1 sinon
 */
int main(int argc, char *argv[])
{
	int j, k, sum = 0;
	char *arg;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	if (argv[1][0] == '\0' || argv[2][0] == '\0')
	{
		return (0);
	}

	for (j = 1; j < argc; j++)
	{
		arg = argv[j];
		for (k = 0; arg[k] != '\0'; k++)
		{
			if (arg[k] == '-' && k == 0)
				continue;
			if (arg[k] < '0' || arg[k] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(arg);
	}

	printf("%d\n", sum);
	return (0);
}
