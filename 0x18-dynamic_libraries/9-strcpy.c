#include "main.h"
/**
 *_strcpy - opies the string pointed to by src,
 *including the terminating null byte (\0), to the buffer pointed to by dest
 *@dest: a string
 *@src: a string
 *Return: value the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
