/**
 * _isdigit - vérifie si l'entier est un chiffre
 * @i: l'entier à vérifier
 *
 * Return: La valeur 1 si c'est un chiffre sinon 0
 */
int _isdigit(int i)
{
	if (i >= '0' && i <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
