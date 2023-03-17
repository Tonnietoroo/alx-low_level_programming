#include<stdio.h>
/*
 * assigns random number to variable
 * check whether number is positive or neative
 * prints result
 */
int main(void)
	{
		int n;

		if (n > 0)
			printf("%d is positive\n", n);
		else if (n < 0)
			printf("%d is negative\n", n);
		else
			printf("%d is zero\n", n);
		return (0);
	}
