#include "main.h"

/**
 * squrareroot - Recursive helper function to find the square root of 'a'.
 * @a: The number for which to find the square root.
 * @b: The current value being tested for the square root.
 *
 * Return: The square root of 'a' if found, or -1 if 'a' does not have an
 * integer square root.
 */
int squrareroot(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (squrareroot(a, b + 1));
}
int _sqrt_recursion(int n)
{
	return (squrareroot(n, 1));
}
