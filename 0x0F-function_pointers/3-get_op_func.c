#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform an operation
 * @s: The operator as a string
 *
 * Return: A pointer to the corresponding function, or NULL if not found
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (s && s[0] == ops[i].ops[0] && !s[0])
			return (ops[i].f);
		i++
	}
	return (NULL);
}
