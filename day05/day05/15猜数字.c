#include<stdio.h>
#include<time.h>

int main()
{
	//加入随机数种子
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;//1-100
	int value;

	while (1)//for (; ;)
	{
		scanf("%d", &value);
		if (value>num)
		{
			printf("你输入的数太大了\n");
		}
		else if (value < num)
		{
			printf("你输入的数太小了\n");
		}
		else
		{
			printf("恭喜你！输入正确！\n");
			break;
		}
	}
	return 0;
}