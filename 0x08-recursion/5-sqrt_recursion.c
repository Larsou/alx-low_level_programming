int myhelp_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number input number
 * Return: result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (myhelp_sqrt_recursion(n, 0));
}
/**
 * myhelp_sqrt_recursion - finds the sqrt
 * @n: input number
 * @i: init zero for iteration
 * Return: result
 */
int myhelp_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (myhelp_sqrt_recursion(n, i + 1));
}
