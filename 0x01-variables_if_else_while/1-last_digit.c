#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - entry point of the program
 * Return: 0 Success
 */

int main(void)
{
	int n, lg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lg=n % 10;

       if (lg > 5 )
       {
	       printf("Last digit of %d is %d and is greater than 5", n, lg);
       }

       else if (n == 0){
	       printf("Last digit of %d is %d and is zero", n, lg);
       }
       else if (n < 6 && n != 0){
	       printf("Last digit of %d is %d and is less than 6 and not 0", n, lg);
       }

	
}
