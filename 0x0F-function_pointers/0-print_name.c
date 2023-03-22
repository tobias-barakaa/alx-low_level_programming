#include <stdlib.h>

/**
 *print_name - parameter function
 *@name: first parameter
 *@f:function f
 *
 */

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
