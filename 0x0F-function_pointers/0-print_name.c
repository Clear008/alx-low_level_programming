#include "function_pointers.h"
/**
 * print_name - function that prints a name.
 * @name: name to print
 *@f: a fonction pointer
 */
void print_name(char *name, void (*f)(char *))
{
if (f == 0 || name == 0)
	return;
f(name);
}
