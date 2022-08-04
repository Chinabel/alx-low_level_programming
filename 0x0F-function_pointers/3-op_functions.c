#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - add two integers
 * @a:num1
 * @b:num2
 * Return: the sum of the two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - substract two integers
 * @a:num1
 * @b:num2
 * Return: the difference between the two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiply two integers
 * @a:num1
 * @b:num2
 * Return: the product of the two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - divide two integers
 * @a:num1
 * @b:num2
 * Return: the quotient of two integers
 */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 * op_mod - modulate a to b
 * @a:num1
 * @b:num2
 * Return: the modulus of the two integers
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
