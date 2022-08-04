#ifndef CALC_H
#define CALC_H

/**
 * op_add - add two integers
 * @a:num1
 * @b:num2
 * Return: a + b
 */

int op_add(int a, int b);

/**
 * op_sub - substract two integers
 * @a:num1
 * @b:num2
 * Return: a - b
 */

int op_sub(int a, int b);

/**
 * op_mul - multiply two integers
 * @a:num1
 * @b:num2
 * Return: a * b
 */

int op_mul(int a, int b);

/**
 * op_div - divide two integers
 * @a:num1
 * @b:num2
 * Return: a / b or error if b = 0
 */

int op_div(int a, int b);

/**
 * op_mod - modulate a to b
 * @a:num1
 * @b:num2
 * Return: a % b
 */

int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif
