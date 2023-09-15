#include "variadic_functions.h"

/**
 * print_numbers- check the code
 * @separator: string seperator
 * @n: number of arguments
 * @...: int
 *
 * Return: Always void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%d%s", va_arg(ap, int),
			       i ? (seperator ? seperator : "") : "\n");
va_end(ap);
}
