#include<stdio.h>
#include "my_math.h"

void MyAbs(int* p)
{
	if (*p < 0)
	{
		*p *= -1;
	}
}
int main()
{
	int x = -3, y = -2;
	int sum = Sum(-3, -2, MyAbs, NULL);
	int sub = Sub(-3, -2, MyAbs, MyAbs);
	printf("|%d| + %d=%d\n", x, y, sum);
	printf("|%d| - |%d|=%d\n", x, y, sub);

}