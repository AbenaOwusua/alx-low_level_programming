#include <stdio.h>
void we_begin(void) __attribute__ ((constructor));

/**
 * we_begin - function prints sentence before main
 * Return: void
 */
void we_begin(void)
{
	printf("You're beat! and yet' you must allow,\n");
	printf("I bore my house upon my back!\n");
}
