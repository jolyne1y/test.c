#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;//静态的局部变量
//	c += 1;
//	b += 2;
//	return(a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)//8,10,12,14,16
//	{
//		printf("%d,", sum(a));
//	}
//	
//}
//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2)
//	{
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default:printf("hello");//hello
//		}
//	case 2:
//		printf("third");//hello third
//	}
//	return 0;
//}

//int main()//将三个数从大到小输出--冒泡排序法
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int cmd = a;
//		a = b;
//		b = cmd;
//	}
//	if (a < c)
//	{
//		int are = a;
//		a = c;
//		c = are;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//int main()//写代码打印1-100之间3的倍数
//{
//	int a = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 3 == 0)//%为取模，余数为0
//		{
//			printf("%d ", a);
//		}
//	}
//}

//int main()//--求两个数的最大公约数
//{
//	int a = 0;
//	int b = 0;
//	int r = 0;
//	scanf("%d%d", &a, &b);
//	while (r = a%b)
//	{
//		a = b;
//		b = r;
//	}
//	printf("%d\n", b);
//	return 0;
//}

//int main()//打印1000-2000的闰年
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0&& i%100 != 0)//判断方法--1.能被4整除且不能被100整除
//			                                   // 2.能被400整除
//		{
//			printf("%d ", i);
//			count++;
//		}
//		else if (i % 400 == 0)//-> if(((i%4==0)&&(i%100!=0))||(i%400==0))
//		{
//			printf("%d", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//int main()//打印100-200之间的所有素数
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数--判断规则：1.试除法
//			//产生2-i-1的数字
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//优化版1
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)//sqrt-库函数-开平方 头文件为：<math.h>
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//优化版2
int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)
	{
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)//sqrt-库函数-开平方 头文件为：<math.h>
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}