#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
*op_add - calculates the sum of two numbers
*@a: num1
*@b: num2
*Return: a + b
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
*op_sub - calculates the subtraction of two numbers
*@a: num1
*@b: num2
*Return: a - b
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
*op_mul - calc multiplication of two numcers
*@a: num1
*@b: num2
*Return: a x b
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
*op_div - division of two numcers
*@a: num1
*@b: num2
*Return: a / b
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
*op_mod - remainder of two divisions
*@a: num1
*@b: num2
*Return: a mod 2
*/
int op_mod(int a, int b)
{
	return (a % b);
}
