#include "main.h"
#include <string.h>
/**
 * alphabet_comper - it compare characters from left and right
 * @left: left side of a string
 * @right: right side of a string
 * Return: returns 1 if a string is a palindrome and 0 if not
 */
int alphabet_comper(char *left, char *right)
{
if (left >= right)
return (1);

if (*left != *right)
return (0);

return (alphabet_comper(left + 1, right - 1));

}

/**
 * is_palindrome - check if the string is palindrome
 * @s: a string
 * Return: returns 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
return (alphabet_comper(s, s + strlen(s) - 1));
}
