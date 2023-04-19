#include "3-calc.h"
/**
 * main - check the code
 * @argc: number
 * @argv: arg
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int (*mostafa_func)(int, int), a, b;

	if (argc != 4)
		printf("Error\n"), exit(98);

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	mostafa_func = get_op_func(argv[2]);
	if (!mostafa_func)
		printf("Error\n"), exit(99);

	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);

	printf("%d\n", mostafa_func(a,b));
	return (0);
}
