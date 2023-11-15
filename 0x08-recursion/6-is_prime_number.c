
/**
 * is_divisible - check if a number is divisible by something
 * is_prime_number - check for a prime number
 * @n: prime int
 *@n: first int
 *@divisor: divisor
 * Return: Always 0.
 */

int is_divisible(int n, int divisor)
{
	if (divisor == 1)
	{
		return (0);
	}
	if (n % divisor == 0)
	{
		return 1;
	}
	return (is_divisible(n, divisor - 1));
}

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (!is_divisible(n, n - 1));
}
