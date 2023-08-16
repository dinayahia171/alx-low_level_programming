#include "main.h"

/**
 * times_table- prints the 9 time table
 *
 * Return: Always 0.
 */
void times_table(void)
{
int i, num, x;

for (i = 0; i <= 9; i++)
{
_putchar(48);
for (num = 1; num <= 9; num++)
{
_putchar(',');
_putchar(' ');
x = i * num;
if (x <= 9)
_putchar(' ');
else
_putchar((x / 10) + 48);
_putchar((x % 10) + 48);
}
_putchar('\n');
}
}
