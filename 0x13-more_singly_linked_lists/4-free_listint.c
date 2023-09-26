#include "lists.h"
/**
 * free_listint - adds a node to the bottom
 * @head: pointer
 * Return: pointer to new node
 */
void free_listint(listint_t *head)
{
listint_t *node;

while (head)
{
node = head;
head = head->next;
free(node);
}
}
