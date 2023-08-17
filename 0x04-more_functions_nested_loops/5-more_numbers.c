#include "main.h"

/**
 * more_numbers- print 0 -14
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int i, raw, count;

for (row = 1; row <= 10; row++)
{
for (count = 0; count <= 14; count++)
{
i = count;
if (count > 9)
{
_putchar(1 + 18);
i = count % 10;
}
_putchar(i + 48);
}
_putchar('\n');
}
}
