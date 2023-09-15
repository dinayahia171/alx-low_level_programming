#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all- check the code
 * @n: number of arguments
 * @...: int sum
 *
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
int s = 0, i = n;
va_list ap;

if (!n)
return (0);
va_start(ap, n);
while (i--)
s += va_arg(ap, int);
va_end(ap);
return (s);
}
