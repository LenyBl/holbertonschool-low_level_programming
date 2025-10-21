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
int hour = 0;
int minute = 0;
while (hour < 24 && minute < 60)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
minute++
if (minute == 59)
{
hour++;
}
_putchar('\n');
}
}
