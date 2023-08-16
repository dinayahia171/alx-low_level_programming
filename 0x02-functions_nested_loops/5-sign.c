#include "main.h"




/**
 * print_sign - function print =if n is graeter than zero
 *
 * Return: Always 1 if + , 0 if 0 and -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
else if (n == 0)
	{
_putchar(48);
return (0);
		}
	else
	{
		_putchar(45);
		return (-1);
	}
}
