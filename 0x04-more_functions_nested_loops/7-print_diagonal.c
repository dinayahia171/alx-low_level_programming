#include "main.h"

/**
 * print_diagonal- print line
 * @n: input
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int i, x;

if (n <= 0)
_purchar('\n');
else
{
for (i = 1; i <= n; i++)
{
for (x = 1; x <= i; x++)
_purchar(' ');
_purchar(92);
_purchar('\n');
}
}
}
