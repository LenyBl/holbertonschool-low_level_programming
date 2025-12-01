#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: 0 success
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while ()
	{
		if (h == NULL)
			printf("No data");
		else 
			printf("%i", h->n);
		count++;
		h->next;
	}
	
	return (0);
}
