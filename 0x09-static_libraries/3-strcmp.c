#include "main.h"
#include <stdio.h>

/**
 * _strcmp- check the code
 * @s1: pionter
 * @s2:pionter
 *
 * Return: Always 1.
 */
int _strcmp(char *s1, char *s2)
{
int i;

while (*s1)
{
if (*s1 != *s2)
{
i =  ((int)*s1 - 48) - ((int)*s2 - 48);
break;
}
s1++;
s2++;
}
return (i);
}
