#include "main.h"
#include<stdlib.h>
/**
 * strtow - function that splits a string into words.
 * @str: a string 
 * Return: a pointer to an array of strings (words)
 */

char **strtow(char *str)
{
char *str;
int separator_count = 0;
int i;
while (str[i] != '\0') {
        if (str[i] == ' ') {
            separator_count++;
        }
        i++;
    }

    str = malloc(sizeof(char) * (separator_count + 2));
    if (str == NULL || str[0] == '\0')
    return(NULL);
}
