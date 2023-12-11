#include "lists.h"

/**
 * add_dnodeint - that adds a new node at the beginning
 * of a dlistint_t list
 * @head: of the list
 * @n value of the element
 * Return: the adress of the new element
 */
dlistint_t *add_dnoideint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new->next = h;

	if (h != NULL)
		h->prev = new;

	*head = new;

	return (new);
}
