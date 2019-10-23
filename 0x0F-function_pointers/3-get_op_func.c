#include "3-calc.h"

/**
 * get_op_func - select appropirate function for operator
 * @s: operator
 *
 * Return: pointer to function on Success, NULL on Fail
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

	int i;

	for (i = 0; ops[i].op != NULL; i++)
	{
		if (!strcmp(ops[i].op, s))
			return (ops[i].f);
	}
	return (NULL);
}
