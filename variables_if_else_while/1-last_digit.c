#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print the last digit of the number stored in the variable n.
* Return: 0 if exited correctly, non-zero otherwise
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10  > 5)
	{
		printf("%i Last digit of", n) ("%i is", n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("%i Last digit of", n) ("%i is", n % 10);
	}
	else
	{
		printf("%i Last digit of", n) ("%i is", n % 10);
	return (0);
}
}
