#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - a function that returns the number
 *  of elements in a linked list_t list
 * @h: input
 * Return: 0
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (NULL);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
