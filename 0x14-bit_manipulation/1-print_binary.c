#include "main.h"
/**
 * print_binary - prints number
 * @n: the numbe
 * Return:void
 */
void print_binary(unsigned long int n)
{
int bit = sizeof(n) * 8, printed = 0;

while (bit)
{

if (n & 1l << --bit)
{
_putchar('1');
printed++;
}
else if (printed)
_putcher('0');
}
if (!printed)
_putchar('0');
}
