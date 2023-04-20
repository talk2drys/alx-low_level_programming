#include <stdlib.h>

/**
 * array_iterator - map function to element of array
 * @array: array to iterate over
 * @size: size of the array
 * @action: pointer to function call on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (array == NULL || action == NULL)
		exit(1);
	for (index = 0; index < size; index++)
		action(array[index]);
}
