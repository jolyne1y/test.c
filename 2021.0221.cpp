#include<stdio.h>

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//练习--用for循环打印1-10
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			//break;//1 2 3 4
//			continue;//1 2 3 4  6 7 8 9 10 
//		printf("%d\n", i);
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;//1 2 3 4 死循环
//		printf("%d ", i);
//		i++;
//	}
//	return 0;

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; 
//	int i = 0;
//	for (i = 0; i < 10; i++)//for语句通常建议采用前闭后开的形式书写
//	{
//		printf("%d ", arr[i]);//10次循环--10次打印--10次数
//	}
//	return 0;
//}

//for语句的其他形式
//int main()
//{
//	for (;;)//for循环的初始化、调整、判断都可以省略，But if判断部分被省略，判断条件恒为真
//	{
//		printf("hehe\n");//死循环
//	}
//	return 0;
//}

int main()
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{	
			printf("hehe\n");
		}
	}
	return 0;
}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)//省略之后j循环之后没有初始化值
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}