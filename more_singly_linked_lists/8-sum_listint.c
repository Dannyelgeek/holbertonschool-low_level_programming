#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a list.
 * @head: pointer to the header of the list.
 * Return: sum if exited correctly.
*/

int sum_listint(listint_t *head)
{
    int sum = 0;

    while (head)
    {
        sum += head->n;
        head = head->next;
    }
    return (sum);
}
