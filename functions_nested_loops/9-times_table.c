#include "main.h"
/**
 * times_table - Affiche la table de multiplication de 9
 *
 * Description: Cette fonction affiche la table de 9
 * en format 10x10, de 0 à 9, avec les bons espacements.
 *
 * Return: rien
 */
void times_table(void)
{
int times = 0;
int number = 0;
int multiple = 0;
while (times < 10)
{
while (multiple < 10)
{
int resultat = number * multiple;
multiple++;
_putchar((resultat / 10) + '0');
_putchar(',');
_putchar(' ');
}
number++;
times++;
_putchar('\n');
}
}
}