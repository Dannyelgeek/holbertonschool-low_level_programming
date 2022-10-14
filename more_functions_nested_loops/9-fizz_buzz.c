#include <stdio.h>

/**
* main - Fizz Buzz excersise.
* Return: 0 if exited correctly, non-zero otherwise.
*/

int main(void)
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
			if (c == 100)
			{
				printf("Buzz");
			}
			else
				printf("Buzz ");
		}
		else
		{
			printf("%i ", c);
		}
	}
	printf("\n");
	return (0);
}
