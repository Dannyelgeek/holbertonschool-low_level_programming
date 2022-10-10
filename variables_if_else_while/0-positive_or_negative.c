#include <stdlib.h>
#include <time.h>
/**
* main - assign a random number to the variable n
* Return: 0 if extited properly, non-zero otherwise
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
{
	printf("%i is positive\n", n);
}
else if (n == 0)
{
	printf("%i is zero\n", n);
}
else
{
	printf("%i is negative\n", n);
}
return (0);
}
