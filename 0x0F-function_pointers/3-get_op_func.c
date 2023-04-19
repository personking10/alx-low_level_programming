#include "3-calc.h"
/**
 * get_op_func - functionof pointer
 * @s: string
 * Return: function pointer of array
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
	int mos = 0;

	while (mos < 5)
{
	if (s && s[0] == ops[mos].op[0] && !s[1])
		return (ops[mos].f);
	mos++;
}
return (NULL);
}
