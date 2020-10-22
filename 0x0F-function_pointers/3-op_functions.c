#include "3-calc.h"

/**
 *op_add - add two integer
 *@a: first integer
 *@b: second integer
 *Return add to success
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - sub two integer
 *@a: first integer
 *@b: second integer
 *Return: sub to success
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - add two integer
 *@a: first integer
 *@b: second integer
 *Return mul to success
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - add two integer
 *@a: first integer
 *@b: second integer
 *Return div to success
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		return (100);
	}
	return (a / b);
}
/**
 *op_add - add two integer
 *@a: first integer
 *@b: second integer
 *Return mod to success
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		return (100);
	}
	return (a % b);
}
