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
	printf("is positive\n");
}
else if (n == 0)
{
	printf("is zero\n");
}
else
{
	printf("is negative\n");
}
return (0);
}
