#include <stdio.h>
/**
* main - Entry point
* Description: c program
* Return: always 0 (Success)
*/
int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
		putchar(digit);
		if (digit == 57)
			digit += 39;
		digit++;
	}
return (0);
}

