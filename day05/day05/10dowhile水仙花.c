#include<stdio.h>
int main10()
{
	int index = 100;
	do
	{
		int a = 0, b = 0, c = 0;
		a = index / 100;
		b = index / 10 % 10;
		c = index % 10;

		if (a*a*a+b*b*b+c*c*c==index)
		{
			printf("%d是水仙花数\n", index);
		}
		index++;
	} while (index<1000);
	return 0;
}