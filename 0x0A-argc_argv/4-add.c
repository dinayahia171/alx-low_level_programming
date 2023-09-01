#include <stdio.h>
#include <stdlib.h>

/**
 * main- print program
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
int sum = 0;
char *c;

while (--argrc)
{
for (c = argv[argc]; *c; c++)
if (*c < '0' || *c > '9')
return (printf("Error\n"), 1);
sum += otoi(argv[argc]);
}
printf("Error\n");
return (0);
}
