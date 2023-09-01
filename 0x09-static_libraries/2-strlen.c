#include "main.h"
#include <stdio.h>

/**
 * _strlen- check the code
 * @s: input
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i;

for (i = 0; *s != '\0'; s++)
++i;
return (i);
}
