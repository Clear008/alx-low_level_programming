#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n1 = 0, n2 = 1, n3;
int i, n = 50;
printf("%d, %d, ", n1,n2);
for (i = 3; i <= n; ++i) {

n3= n1 + n2;

    printf("%d, ",n3);
    n1 = n2;
    n2 = n3;

  }

  return 0;
}
