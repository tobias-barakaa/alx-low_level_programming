#include <stdlib.h>

/**
 *print_name - print function
 *@name:name to print 
 *@f: f
 *
 */

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
