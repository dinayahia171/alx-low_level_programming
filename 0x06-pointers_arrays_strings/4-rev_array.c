#include "main.h"
#include <stdio.h>

/**
 * reverse_array- check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int i, x, temp;

for (i = 0, j = (n - 1); i < x; i++, x--)
{
temp = a[i];
a[i] = a[x];
a[x] = temp;
}
}
