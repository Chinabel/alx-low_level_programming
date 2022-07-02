#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - assign random number to a variable
 * Return: Always 0 (success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is %s\n", n, is ("positive"));
}
else if (n < 0)
{
printf("%d is %s\n", n, is ("negative"));
}
else
}
printf("%d is %s\n", n, is ("zero"));
}

return (0);
}
