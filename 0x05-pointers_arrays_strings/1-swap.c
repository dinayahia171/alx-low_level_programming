#include "main.h"
#include <stdio.h>

/**
 * swap_int- check the code
 * @a: input
 * @b: input
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
