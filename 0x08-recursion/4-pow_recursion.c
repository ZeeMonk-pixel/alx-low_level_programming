
/**
 * _pow_recursion - takes two integers and raise the power o one to the other.
 *@x : base integer
 *@y : power integer
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
