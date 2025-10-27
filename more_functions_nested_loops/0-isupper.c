#include <stdio.h>
/**
 * _isupper - vérifie si le char est en majuscule ou minuscule
 * @c: Le character à vérifier
 *
 * Return: La valeur 1 si majuscule sinon 0
 */
int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c <= 'a' && c >= 'z')
	{
		return (0);
	}

	return (0);
}
