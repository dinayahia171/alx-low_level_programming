#include <stdio.h>
/**
* main - Entry point
* Description: c program
* Return: always 0 (Success)
*/
int main(void)
{
int digit = 0;
while (digit <= 9)
{
	putchar(digit);
	digit++;
}
putchar('\n');
return (0);
}
