#include "main.h"
#include <stdio.h>

/**
 * rev_string- check the code
 * @s: input
 *
 * Return: nothing
 */
void rev_string(char *s)
{
int i, x;
char temp;

for (x = 0; s[x] != '\0'; ++x)
;
for (i = 0; i < x / 2; i++)
{
temp = s[i];
s[i] = s[x - 1 - i];
s[x - 1 - i] = temp;
}
}
