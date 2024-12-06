#include<stdio.h>
int Sum(int a, int b)
{
	return a + b;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
int Div(int a, int b)
{
	return a / b;
}
int main()
{
	int (*p[4])(int, int) = { &Sum,&Sub,&Mul,&Div };
	int i;
	char t[4] = {'+','-','*','/'};
	for (i = 0; i < 4; i++)
	{
		printf("%d %c %d=%d\n", 2, t[i], 8, (*p[i])(2,8));
	}
}