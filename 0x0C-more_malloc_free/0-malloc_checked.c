#include "main.h"
/**
 * malloc_checked( b) - allocates memory using malloc()
 * @b: memory size
 * Return: pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *mem_location = malloc(b);

	if (mem_location == NULL)
		exit(98);

	return mem_location;
}
