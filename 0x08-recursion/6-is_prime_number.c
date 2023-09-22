#include "main.h"
#include <stdio.h>

/**
 * is_prime_number- check the code
 * check_prime- code check prim numbers
 * check_prime- code check prim numbers
 * @n: input
 * @x: input
 * Return: 0 or 1
 */
int check_prime(int n, int x);
int is_prime_number(int n)
{
return (check_prime(n, 2));
}

/**
 * check_prime - check all the numbers < n if they can divided
 * @n: input
 * @x: input
 * check_prime- code check prim numbers
 * check_prime - function code
 * Return: 0 or 1
 */

int check_prime(int n, int x)
{
if (x >= n && n > 1)
return (1);
else if (n % x == 0 || n <= 1)
return (0);
else
return (check_prime(n, x + 1));
}
