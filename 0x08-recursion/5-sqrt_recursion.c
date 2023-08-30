#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion- check the code
 * @n: input
 * square- square root
 * @v: square root
 * Return: Always int
 */
int _sqrt_recursion(int n);
int square(int n, int v)
{
return (square(n, 1));
}
/**
 * square- square root
 * @v: square root
 * Return: square 
 */
int square(int n, int v)
{
if (v * v == n)
return (v);
else if (v * v < n)
return (square(n, v + 1));
}
}
