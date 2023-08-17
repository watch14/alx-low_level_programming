#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of arguments passed to the function.
 * @...: The variable arguments.
 *
 * Return: The sum of the variable arguments.
 */

int sum_them_all(const unsigned int n, ...)
{
    va_list args;
    va_start(args, n);
    
    int sum = 0;
    unsigned int i;
    
    for (i = 0; i < n; i++)
    {
        int x = va_arg(args, int);
        sum += x;
    }
    
    va_end(args);
    return (sum);
}
