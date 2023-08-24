#include "main.h"
#include <stdio.h>

/**
 * _strcat- check the code
 * @dest: pointer
 * @src: pointer
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
int dest_len = strlen(dest);
int src_len = strlen(src);

dest += dest_len;

for (int i = 0; i < src_len; i++)
{
*dest++ = src[i];
}
dest = '\0';
return (dest);
}
