#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main(void)- this prints if a random integer is positive, negative or zero
 * a program that creates a random integer and checks if it is positive, negative or zero.
 * Return: returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d The number is negative\n", n);
	} else if (n > 0)
	{
		printf("%d The number is positive\n", n);
	} else 
	{
		printf("%d The number is zero\n", n);
	}
	return (0);
}
