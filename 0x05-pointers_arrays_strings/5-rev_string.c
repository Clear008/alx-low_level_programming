#include "main.h"
#include<string.h>
/**
 * rev_string - reverses a string
 *@s: string
*/
void rev_string(char *s)
{
int length = strlen(s);
int i, j;
char t;
for (i = 0, j = length - 1 ; i < j ; i++, j--)
{
t = s[i];
s[i] = s[j];
s[j] = t;
}
}
