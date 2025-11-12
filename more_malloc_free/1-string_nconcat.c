#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - fonction qui concatène deux chaînes de caractères
 *
 * @s1: première chaîne de caractères
 * @s2: deuxième chaîne de caractères
 * @n: nombre maximum de bytes à concaténer de s2
 *
 * Return: pointeur vers la nouvelle chaîne de caractères
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int i, j, count;
	char *str_nconcat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = 0;
	j = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	if (n < j)
		j = n;

	str_nconcat = malloc((i + j) + 1);

	if (str_nconcat == NULL)
		return (NULL);

	for (count = 0; count < i; count++)
	{
		str_nconcat[count] = s1[count];
	}

	for (count = 0; count < j; count++)
	{
		str_nconcat[count + i] = s2[count];
	}

	str_nconcat[i + j] = '\0';

	return (str_nconcat);
}
