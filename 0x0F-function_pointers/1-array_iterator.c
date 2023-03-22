#include <stddef.h>
/* defines size_t */

/**
 *array_iterator - function to iterate
 *@array: first arr
 *@size: size
 *@action: pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array != NULL && action != NULL)
for (i = 0; i < size; i++)
action(*(array + i));
}
