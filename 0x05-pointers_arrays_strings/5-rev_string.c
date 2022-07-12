#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be used
 * Return: 0
 */

void rev_string(char *s)	
{
int i, max, half;
char strno, endno ;
	
i = 0;
while (s[i] != '\0')
{
i++;
}
max = i - 1;
half = max / 2;

while (half >= 0)
{
strno = s[max - half];
endno = s[half];
s[half] = strno;
s[max - half] = endno;
half--;
}
