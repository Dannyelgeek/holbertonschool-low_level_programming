#include <stdio.h>

/**
* main - draws a square the terminal.
* Return: 0 if exited correctly, non-zero otherwise.
*/

void main(void)
{
int c;

for (c = 1; c <= 100; c++)
{
	if ((c % 3) == 0 && (c % 5) == 0)
	{
		printf("FizzBuzz ");
	}
	else if ((c % 3) == 0)
	{
		printf("Fizz ");
	}
	else if ((c % 5) == 0)
	{
		printf("Buzz ");
	}
	else
	{
		printf("%i ", c);
	}
}
while (c == 100)
{
	printf("buzz\n");
}
	printf("\n");
}
