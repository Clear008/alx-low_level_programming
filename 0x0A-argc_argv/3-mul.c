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
int i, mul = 1;

if (argc == 1)
{
	printf("Error\n");
return (1);
}

if (argc > 1)

for (i = 1 ; i < argc; i++)

mul *= atoi(argv[i]);
printf("%d\n", mul);

return (0);
}

