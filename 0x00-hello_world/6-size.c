#include <stdio.h>
/**
 * main - print the size of various types on my computer
 * Return: Always 0 (success)
 */
int main(void)
{
 char c;
 int i;
 long int li;
 long long int lli;
 float f;

 printf("Size of a char: %lu bytes\n", sizeof(c));
 printf("Size of an int: %lu bytes\n", sizeof(i));
 printf("Size of a long int: %lu bytes\n", sizeof(li));
 printf("Size of a long long int: %lu bytes\n", sizeof(lli));
 printf("Size of a float: %lu bytes\n", sizeof(f));

 return (0)
}
