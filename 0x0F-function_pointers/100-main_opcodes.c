#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 *@argv: array of arguments
 *@argc: number of arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
char *f = (char *)main;
int n;

if (argc != 2)
	printf("Error\n");
exit(1);
n = atoi(argv[1]);
if (n < 0)
printf("Error\n");
exit(2);
while (n--)
printf("%02hhx%s", *f++, n ? " " : "\n");
return (0);
}

