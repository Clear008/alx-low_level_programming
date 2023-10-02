#include<stdio.h>
#include <stdlib.h>
/**
 *main - check the code
 *@argv: array of command line argument
 *@argc: number of command line argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{

int cents[] = {25, 10, 5, 2, 1};
int i, change;
int sum = 0;
if (argc != 2)
{
	printf("Error\n");
return (1);
}

change = atoi(argv[1]);

for (i = 0 ; i < 5; i++)
{
if (change >= cents[i])
	{
sum += change / cents[i];
	change = change % cents[i];
if (change % cents[i] == 0)

	{
	break;

	}
	}
	}

	printf("%d\n", sum);

return (0);
}

