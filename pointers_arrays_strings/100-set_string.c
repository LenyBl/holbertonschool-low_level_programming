#include "main.h"
#include <stdio.h>
/**
 * set_string - assigne la valeur d'un pointeur à un autre
 *
 * @s: double pointeur vers la chaîne à modifier
 * @to: pointeur vers la nouvelle chaîne
 *
 * Return: rien
 */
void set_string(char **s, char *to)
{
	*s = to;
}
