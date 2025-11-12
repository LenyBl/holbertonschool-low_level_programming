#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - alloue de la memoire pour un tableau de nmemb elements de size octets chacun
 * et initialise toute la memoire a zero
 *
 * @nmemb: le nombre d'elements
 * @size: la taille de chaque element en octets
 *
 * Return: un pointeur vers la memoire allouee, ou NULL en cas d'echec
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *grid;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	grid = malloc(nmemb * size);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		grid[i] = 0;

	return (grid);
}