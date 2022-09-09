#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - entry point of program
 * Return: 0 Success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	{
		printf("%d %s\n",n,"is positive");
	}
	else if (n < 0)
	{
		printf("%d %s\n",n,"is negative");
	}
	else
	{
		printf("%d %s\n",n,"is zero");
	}

	return (0);
}
