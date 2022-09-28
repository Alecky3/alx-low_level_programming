#include "main.h"

/**
 * is_prime_number - finds whether input parameter is prime
 * @n: the number to check if it's prime
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if(i==1)
    {
        return 1;
    }
    else if(n1 %i==0)
    {
         return 0;
    }
    else
       {
         i = i -1;
         is_prime_number(n);
      }

}
