#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds two positive numbers.
 * @argc: number of arguments.
 * @argv: array of argc arguments.
 * Return: 0 if exited correctly.
*/

int main(int argc, char *argv[])
{
	int ind;
	unsigned int sum, result = 0;
	char *a;

	if (argc > 1)
	{
		for (ind = 1; ind < argc; ind++)
		{
			a = argv[ind];

			for (sum = 0; sum < strlen(a); sum++)
			{
				if (a[sum] < 48 || a[sum] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			result += atoi(a);

			a++;
		}	
		printf("%d\n", result);
	}

	else
	{
		printf("0\n");
	}

	return (0);
}

