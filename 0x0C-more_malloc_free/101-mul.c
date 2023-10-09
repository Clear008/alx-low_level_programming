#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _isdigit(char *c)
{
    int i;
    for (i = 0; c[i] != '\0'; i++)
    {
        if (c[i] < '0' || c[i] > '9')
        {
            return 0;
        }
    }
    return 1;
}

char *custom_multiply(char *num1, char *num2)
{
    int len1, len2, result_len, i, j, k, carry, digit1, digit2, product, start;
    char *result;

    len1 = 0;
    len2 = 0;
    result_len = 0;

    for (i = 0; num1[i] != '\0'; i++)
    {
        len1++;
    }

    for (i = 0; num2[i] != '\0'; i++)
    {
        len2++;
    }

    result_len = len1 + len2 + 1;
    result = (char *)calloc(result_len + 1, sizeof(char)); /* +1 for the null terminator */

    if (!result)
    {
        perror("Memory allocation failed");
        exit(1);
    }

    /* Initialize the result with '\0' */
    for (i = 0; i < result_len; i++)
    {
        result[i] = '0';
    }
    result[result_len] = '\0'; /* Null-terminate the result */

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        digit1 = num1[i] - '0';

        for (j = len2 - 1, k = i + len2; j >= 0; j--, k--)
        {
            digit2 = num2[j] - '0';
            product = (result[k] - '0') + (digit1 * digit2) + carry;
            result[k] = (product % 10) + '0';
            carry = product / 10;
        }

        result[i + len2] += carry;
    }

    start = 0;
    while (start < result_len && result[start] == '0')
    {
        start++;
    }

    if (start == result_len)
    {
        result[0] = '0';
        result[1] = '\0';
    }
    else
    {
        memmove(result, result + start, result_len - start + 1);
    }

    return result;
}

int main(int argc, char *argv[])
{
    char *num1, *num2, *result;

    if (argc != 3)
    {
        printf("Error\n");
        return 98;
    }

    num1 = argv[1];
    num2 = argv[2];

    if (!_isdigit(num1) || !_isdigit(num2))
    {
        printf("Error\n");
        return 98;
    }

    result = custom_multiply(num1, num2);

    printf("%s\n", result);

    free(result);

    return 0;
}

