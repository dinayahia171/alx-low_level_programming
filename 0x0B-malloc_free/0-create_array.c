#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array- print program
 * @size: int
 * @c: list
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
char *n = malloc(size);

if (size == 0 || n == 0)
return (0);

while (size--)
n[size] = c;
return (n);
}
