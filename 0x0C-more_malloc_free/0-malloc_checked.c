#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked- print program
 * @b: int
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	int *m malloc(b);

	if (m == 0)
		excit(98);
	return (m);
}
