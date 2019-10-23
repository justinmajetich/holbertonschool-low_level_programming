#include "function_pointers.h"

/**
 * array_iterator - execute function for each array elem
 * @array: array to iterate through
 * @size: size of array
 * @action: pointer to function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	do {
		action(*array++);
	} while (size--);
}
