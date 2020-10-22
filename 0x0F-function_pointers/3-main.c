#include "3-calc.h"

/**
 *main - entry point
 *
 *Return: 0 always (success)
 */
int main(int argc, char *argv[])
{
	int calc, num1, num2;

	int (*ptr)(int,int);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	ptr = get_op_func(argv[2]);

	if(argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
ptr = get_op_func(argv[2]);

	if(ptr == NULL)
	{
		printf("Error");
		exit(99);
	}

	calc = ptr(num1, num2)

	printf("%d\n",calc);
	return (0);
}
