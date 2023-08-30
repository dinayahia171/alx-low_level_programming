#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion- check the code
 * @n: input
 * square- square root
 * @v: square root
 * Return: Always int
 */
int square(int n, int v);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * square- square root
 * @v: square root
 * @n: input
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
