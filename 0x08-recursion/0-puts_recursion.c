#include "main.h"

/**
 * _puts_recursion- check the code
 * @s: pionter
 *
 * Return: Always void
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
}
else
{
putchar(*s);
_puts_recursion(s + 1);
}
}
