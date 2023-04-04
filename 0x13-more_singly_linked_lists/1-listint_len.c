#include "lists.h"

/**
 * listint_len - a function that returns the number of elements.
 *
 * @h: pointer to the first node
 *
 * Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
        size_t elements = 0;

        while (h)
        {
                /*count no of elements in increments */
                elements++;

                /*go to next node*/
                h = h->next;
        }

        return (elements);
}

