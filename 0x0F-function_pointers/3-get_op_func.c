#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func -  selects the correct function that performs an operation
 * @s: the operator passed as an argument to the program
 * Return: pointer to a function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int n = 0;

	while (ops[n].op != NULL && *(ops[n].op) != *s)
		n++;
	return (ops[n].f);
}
