#include "main.h"

/**
 * flip_bits - return number
 * @n: frist number
 * @m: sec number
 * Return: number of bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;
	unsigned int count = 0;

while (xorval)
{
if (xorval & 1ul)
count++;
xorval = xorval >> 1;
}
return (count);
}
