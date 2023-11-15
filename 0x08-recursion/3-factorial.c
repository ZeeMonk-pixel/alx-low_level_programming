
/**
 * factorial(int n) - this calculates the factorial of a number recurssively
 * @n : integer to calculate its factorial
 * Return: Always 0.
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorail(n - 1));
}
