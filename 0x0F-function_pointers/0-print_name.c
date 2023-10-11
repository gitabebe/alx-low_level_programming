#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: name
 * @f: A pointer to a function that prints a name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
