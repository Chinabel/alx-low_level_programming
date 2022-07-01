#include <stdio.h>
/**
 * main - print the size of various types on my computer
 * Return: Always 0 (success)
 */
int main(void)
{
 char charType;
 int intType;
 long int longIntType;
 long long int longLongIntType;
 float floatType;

 printf("Size of a char: %zu bytes\n", sizeof(charType));
 printf("Size of an int: %zu bytes\n", sizeof(intType));
 printf("Size of a long int: %zu bytes\n", sizeof(longIntType));
 printf("Size of a long long int: %zu bytes\n", sizeof(longLongIntType));
 printf("Size of a float: %zu bytes\n", sizeof(floatType));

 return (0);
}
