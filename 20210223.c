#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20)
//			break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//	}b = b - 5;
//	printf("%d\n", a);//8
//	return 0;
//}

//int main()//计算1-100之间有多少个带9的数字
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()//计算1/1-1/2+1/3-1/4+...+1/99-1/100
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag* 1.0/ i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);//打印浮点数用%lf
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int max = arr[0];//数组下标从0开始
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}

//int main()//打印乘法口诀表
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i,j, i*j);//%2d表示右对齐，%-2d表示左对齐
//		}
//		printf("\n");
//	}
//	return 0;

void menu()
{
	printf("*************************\n");
	printf("*****1.play  2,exit******\n");
	printf("*************************\n");
}
void game()
{
	int ret = 0;
	int guess = 0;
	 ret = rand()%100+1;//生成的数字为1-100-- rand函数
	 while (1)
	 {
		 printf("请猜数字:>");
		 scanf("%d ", &guess);
		 if (guess > ret)
		 {
			 printf("猜大了\n");
		 }
		 else if (guess < ret)
		 {
			 printf("猜小了\n");
		 }
		 else
		 {
			 printf("恭喜你答对了！\n");
			 break;
		 }
	 }
}
//RAND_MAX-生成的随机数（0-32767）rand函数生成的随机值 头文件<stdlib.h>
int main()//猜数字游戏
{
	int input = 0;
	srand((unsigned int)time(NULL));//NULL:空指针
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d ", &input);
		switch (input)
		{
		case 1:
			game();//游戏进行
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}