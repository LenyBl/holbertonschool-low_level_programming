#include "main.h"
/**
 * jack_bauer - Affiche chaque minute de la journée de Jack Bauer
 *
 * Description: Cette fonction affiche toutes les heures et minutes
 * d'une journée, en partant de 00:00 jusqu'à 23:59, chaque horaire
 * sur une nouvelle ligne.
 *
 * Return: rien
 */
void jack_bauer(void)
{
int hours = 0;
int minutes = 0;
while (hours < 24 && minutes < 60)
{
_putchar(hours);
_putchar(':');
_putchar(minutes);
hours++;
minutes++;
_putchar('\n');
}
}
