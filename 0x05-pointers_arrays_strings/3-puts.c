#include "main.h"

/**
 * _puts- check the code
 *@str: string parameter
 * Return: nothing
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str + 0);
str++;
}
putchar('\n');
}
