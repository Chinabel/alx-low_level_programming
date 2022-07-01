#include <stdio.h>
/**
 * main - print the size of various types on my computer
 * Return: Always 0 (success)
 */
int main(void)
{
 int char c;
 int int i;
 int long int li;
 int long long int lli;
 int float f;

 printf("Size of a char: %d byte(s)\n", sizeof (c));
 printf("Size of an int: %d byte(s)\n", sizeof (i));
 printf("Size of a long int: %d byte(s)\n", sizeof (li));
 printf("Size of a long long int: %d byte(s)\n", sizeof (lli);
 printf("Size of a float: %d byte(s)\n", sizeof (f));
 return (0)
}
