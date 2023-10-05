#include <stdlib.h>
/**
 * malloc_checked - function allocates memory using malloc
 * @b: memory size to be allocated
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
		exit(98);
	return (a);
}
