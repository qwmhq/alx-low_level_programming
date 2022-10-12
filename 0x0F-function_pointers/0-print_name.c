#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - print a name using a custom function
 * @name: name to print
 * @f: function to use in printing name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
