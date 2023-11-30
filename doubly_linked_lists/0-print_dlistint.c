#include "lists.h"

/**
 * print_dlistin - that print all elements of a
 * dlistinit_t list
 *
 * @h:head of the list
 * Return: the numbers of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
