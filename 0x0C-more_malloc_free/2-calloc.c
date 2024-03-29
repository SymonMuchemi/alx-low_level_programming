#include "main.h"
/**
 * _calloc(nmemb, size) -  allocates memory to an array
 * @nmemb: number of array elements
 * @size: size in bytes of each array element
 * Return: nothing
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *mem_location;
	unsigned char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem_location = malloc(nmemb * size);
	if (mem_location == NULL)
		return (NULL);

	ptr = (unsigned char *)mem_location;

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (mem_location);
}
