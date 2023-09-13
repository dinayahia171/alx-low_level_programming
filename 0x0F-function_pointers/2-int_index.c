#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index- check if a number is equal to 98
 * @array: the integer to check
 * @size: array size
 * @cmp: inter
 *
 *
 * Return: the int index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (array && size && cmp)
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
return (-1);
}
