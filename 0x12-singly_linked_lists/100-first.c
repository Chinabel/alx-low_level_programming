#include "lists.h"

/**
 * bmain - prints a line followed by a new line
 * before main function is executed
 * Return: 0 if success
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
