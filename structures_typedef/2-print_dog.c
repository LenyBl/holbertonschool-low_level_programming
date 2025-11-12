#include <stdio.h>
#include "dog.h"
/**
 * print_dog - affiche les informations d'un chien.
 *
 * @d: pointeur vers la structure dog à afficher.
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("Dog is NULL\n");
		return;
	}

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
