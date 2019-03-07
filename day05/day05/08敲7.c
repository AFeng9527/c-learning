#include<stdio.h>
int main08()
{
	int index = 0;

	while (index <= 100)
	{
		if (index % 7 == 0 || index % 10 == 7 || index / 10 == 7)
		{
			printf("%d\n", index);
		}
		index++;
	}
	return 0;
}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//int main()
//{
//	int index = 0;
//	while (index <= 100)
//	{
//		index++;
//		//条件： 1、带7  2、7的倍数  35
//		if (index % 7 == 0 || index % 10 == 7 || index / 10 == 7)
//		{
//			//跳出
//			continue;
//		}
//		printf("数字：%d\n", index);
//	}
//
//
//	system("pause");
//	return EXIT_SUCCESS;
//}