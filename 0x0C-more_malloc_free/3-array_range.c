#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range- check the code
 * @min: pointer
 * @max: pointer
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
int len, i;
int *ptr;

if (min > max)
return (NULL);
len = max - min + 1
ptr = malloc(sizeof(int) * len);
if (!ptr)
return (NULL);
for (i = 0; i < len; i++)
ptr[i] = min++;
return (ptr);
}
