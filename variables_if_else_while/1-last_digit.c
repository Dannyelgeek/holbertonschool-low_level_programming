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
		printf("%i Lasta digit of\n", n);
	}
	else if (n % 10 == 0)
	{
		printf("%i Lastb digit of\n", n);
	}
	else
	{
		printf("%i Lastc digit of\n", n);
}
return (0);
}
