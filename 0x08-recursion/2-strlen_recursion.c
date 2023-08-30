#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion- check the code
 * @s: pointer
 *
 * Return: Always l
 */
int _strlen_recursion(char *s)
{
	int l = 0;

if (*s > '\0')
{
	l += _strlen_recursion(s + 1) + 1;
}
return (l);
}
