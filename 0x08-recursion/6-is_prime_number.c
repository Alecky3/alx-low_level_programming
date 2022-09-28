#include "main.h"

/**
 * is_prime_number - finds whether input parameter is prime
 * @n: the number to check if it's prime
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	static int i = 2;

	if (n <= 2)
		return ((n == 2) ? (1) : (0));
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	i++;
	return (is_prime_number(n));

}
