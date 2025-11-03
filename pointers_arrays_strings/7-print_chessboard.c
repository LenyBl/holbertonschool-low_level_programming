#include "main.h"
/**
 * print_chessboard - affiche un échiquier
 * @a: tableau 2D représentant l'échiquier
 *
 * Return: rien
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for ( j = 0; a[i] != '\0'; j++)
		{
			printf(a[i][j]);
		}
	}
}