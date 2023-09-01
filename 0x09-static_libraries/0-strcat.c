#include "main.h"
#include <stdio.h>

/**
 * _strcat- check the code
 * @dest: pointer
 * @src: pointer
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
int c, i;

c = 0;
while (dest[c])
c++;

for (i = 0; src[i]; i++)
dest[c++] = src[i];
return (dest);
}
