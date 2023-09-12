#include "main.h"
/**
 * print _islower
 *
 * return value of '_islower'
*/

int _islower(int c)

char lowercase[] = "abcdefghijklmnopqrstuvwxyz"

int i=0;

while ( i < 26)
{

if (lowercase[i] == c) 
{       	
return (1);
}
i++;
}
 
return (0);
_putchar('\n');
}

