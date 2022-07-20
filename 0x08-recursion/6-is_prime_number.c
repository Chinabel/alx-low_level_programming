#include "main.h"

/**
 * find_multipliers - look for multipliers of n.
 * @n: base number.
 * @m: iterator number.
 * Return: 1 if n is prime, 0 otherwise.
 */

int find_multipliers(int n, int m)
{
if (m == n)
return (1);
if (n % m == 0)
return (0);
else
return (find_multipliers(n, m + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: the integer to use
 * Return: 0 else
 */

int is_prime_number(int n)
{
if (n <= 1)
return (0);

return(is_prime_number(n, n / 2);
}
