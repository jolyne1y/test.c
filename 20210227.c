#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void print(int n)
//{
//	int j = 0;
//	if (n > 9)
//	{
//		print(n/10);//--函数递归-函数中调用函数
//	}
//	printf("%d ", n%10);//
//}
//
//int main()//练习--设计一个函数，使得输入1234时 输出1 2 3 4
//{
//	unsigned int i = 0;
//	scanf("%d", &i);
//	print(i);
//	return 0;
//}

//int yede_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')//注意限制条件-取地址变量要加*
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "jolyne";
//	//int len = strlen(arr);
//	//自定义strlen函数 模拟实现该函数功能
//	int len = yede_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}

//int yede_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + yede_strlen(str + 1);//以函数递归的方式实现 不创建中间变量
//	}
//	else
//		return 0;
//
//}
//int main()
//{
//	char arr[] = "jolyne";//
//	int len = yede_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;


//int fac1(int i)
//{
//	int n = 0;
//	int ret = 1;
//	for (n = 1; n <= i; n++)
//	{
//		ret *= n;
//	}
//	return ret;
//}
//int fac2(int i)
//{
//	if (i <= 1)
//		return 1;
//	else
//		return i*fac2(i - 1);//函数递归
//}
//
//int main()
//{
//	int i = 0;
//	int ret = 0;//求n的阶乘
//	scanf("%d", &i);
//	//ret = fac1(i);//实现方式--循环
//	ret = fac2(i);
//	printf("%d\n", ret);
//	return 0;
//}

//int fib1(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);//递归致命弱点--效率低 运行慢
//}

int fib2(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>2)
	{
		c = a + b;
		b = c;
		a = b;
		n--;
	}
	return c;
}
int main()//--描述第n个斐波那契数
{
	int n = 0;
	int ret = 0;
	scanf("%d",&n);//TDD--测试驱动开发
	//ret = fib1(n);
	ret = fib2(n);
	printf("ret=%d\n", ret);
	return 0;
}