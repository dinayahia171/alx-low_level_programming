#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* Description: c program
* Return: always 1 (Success)
*/

int main(void) 
{
  char *str = "that piece of art is useful - Dora Korpar, 2015-10-19\n";
  
  fwrite(str, sizeof(char), sizeof(str), stderr);

  return 1;
}
