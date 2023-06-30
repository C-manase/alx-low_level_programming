#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list
 * @h: a linked list
 *
 * Return: Number of elements in h
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
