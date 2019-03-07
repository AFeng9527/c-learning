#include<stdio.h>
int main12()
{
	int i = 100;
	for (i; i < 1000; i++)
	{
		int a = 0, b = 0, c = 0;
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;

		if (a*a*a + b * b*b + c * c*c == i)
		{
			printf("%d是水仙花数\n", i);
		}
	}
	return 0;
}