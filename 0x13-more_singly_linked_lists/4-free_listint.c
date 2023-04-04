#include "lists.h"

/**
 * free_listint - frees list
 * @head: pointer to the first node of the list
 * Return: nothing
*/

void free_listint(listint_t *head)
{
        listint_t *current;

        /*iterate through each node in list*/
        while (head)
        {
                /*set head as the next node*/
                current = head->next;
                free(current);
				head = current;
        }
}

