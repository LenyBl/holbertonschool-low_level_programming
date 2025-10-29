#include "main.h"
/**
 * cap_string - met en majuscule les premières lettres de chaque mot
 *
 * @str: pointeur vers la chaîne à modifier
 *
 * Return: pointeur vers la chaîne modifiée
 */
char *cap_string(char *str)
{
	int i;

	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{

		if (i == 0 || strchr(separators, str[i - 1]) != NULL)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - ('a' - 'A');
			}
		}
	}

	return (str);
}
