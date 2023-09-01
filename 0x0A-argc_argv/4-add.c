#include <stdio.h>
#include <stdlib.h>
/**
 * main- print program
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char *argv[])
{
int sum = 0;

for (int i = 1; i < argc; i++)
{
for (int j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
if (argc == 1)
{
printf("0\n");
}
else
{
printf("%d\n", sum);
}
return (0);
}
