#include <stdio.h>
#include "lists.h"

/**
 * list_len - return the number of element linked
 * @h: pointer to the list
 * Return: number of element in h
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
