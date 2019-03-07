#include<stdio.h>

int main01()
{
	int row;
	printf("ÇëÊäÈëÐÐÊý£º\n");
	scanf("%d", &row);

	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= row - i; j++)
		{
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}