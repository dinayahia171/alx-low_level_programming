#include "lists.h"
/**
 * pop_listint - adds a node to the bottom
 * @head: pointer
 * Return: void
 */
int pop_listint(listint_t **head)
{
listint_t *node;
int n;

if (!head || !*head)
return (0);
node = (*head)->next;
n = (*head)->n;
free(*head);
*head = node;
return (n);
}
