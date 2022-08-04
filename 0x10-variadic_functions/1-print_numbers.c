#include "variable_functions.h"

/**
 * print_numbers - print numbers followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: a variable of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numstr;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(numstr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numstr, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numstr);
}
