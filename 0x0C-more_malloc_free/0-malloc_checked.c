#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates memory
 * @b: the size to allocate
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
	void *d;

	d = malloc(b);

	if (d == NULL)
		exit(98);
	return (d);
}
