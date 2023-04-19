#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - prints the name of the file
 * @array: name to be printed
 * @action: pointer to name
 * @size: size
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array == NULL || action == NULL)
return;

for (i = 0; i < size ; i++)
{
action(array[i]);
}
}
