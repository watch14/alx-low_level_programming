#include "main.h"


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
