#include <stdib.h>
#include <time.h>
#include <stdio.h>

/*
 * main-entry point
 * Return: Always 0(Success)
 */

/*
 * assign random number to a variable
 * check for some condition
 * print out the number
 */
int main(void)
	{
		int n;

		srand() - RAND_MAX / 2;

		printf("Last digit of %i is %i and is ", n, (n % 10));

		if ((n % 10) == 0)
		{
			printf("0\n");
		}
		else if ((n % 10) > 5)
		{
			printf("greater than 5\n");
		}
		else
		{
			printf("less than 6 and not 0\n";
		}
		return (0);
	}
