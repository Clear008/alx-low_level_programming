#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - check the code
 *@argv: array of arguments
 *@argc: number of arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int num1, num2;
char *op;
if (argc != 4)
{
printf("Error\n");
return (98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
op = (argv[2]);

if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
{
printf("Error\n");
return (98);
}

if ((*op == '/' || *op == '%') && (*argv[3] == '0'))
{
printf("Error\n");
return (100);
}

printf("%d\n", get_op_func(op)(num1, num2));
return (0);
}
