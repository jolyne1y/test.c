#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//int main()
//{
//	printf("hello\n");
//	goto again;//goto语句 ；可以随意跳转到指定位置--通常不建议使用，容易打乱代码的正常执行顺序
//	printf("nihao\n");//容易出bug--打乱代码的正常逻辑
//again:
//	printf("jolyne\n");
//	return 0;
//}

//int main()  //shutdown -s -t 60---关机命令
//{
//	char input[20] = { 0 };//简易的定时关机程序
//	system("shutdown -s -t 180");//system函数--头文件<stdlib.h>
//again:
//	printf("注意！你的电脑将在3分钟后关机，如果输入：我是大帅比，则取消关机\n请输入:>");
//	scanf("%s", input);
//	if (strcmp(input, "我是大帅比") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//int main()//关机程序--while循环
//{
//	char input[20] = {0};
//	system("shutdown -s -t 180");
//	while (1)
//	{
//		printf("注意！你的电脑将在3分钟后关机，如果输入：我是大帅比，则取消关机\n请输入:>");
//		scanf("%s", input);
//		if (strcmp(input, "我是大帅比") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}

// int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);//引用函数-算出两数相加
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "jolyne";
//	char arr2[20] = "#########";//jolyne\0--\0作为字符串的结束标志，意味着遇到\0，字符串之后的内容便不再打印
//	strcpy(arr2, arr1);//字符串拷贝—将后者的内容拷贝到前者的空间里去  头文件<string.h>
//	printf("%s\n", arr2);
//	return 0;
//}

//memset
//memory-内存  set-设置

//int main()
//{
//	char arr[] = "hello jolyne";
//	memset(arr,'*', 5);
//	printf("%s\n", arr);//***** jolyne
//	return 0;
//}

//int get_MAX(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	int a = 3;
//	int b = 10;
//	int max = get_MAX(a, b); //初识自定义函数
//	printf("max=%d\n", max);
//	max = get_MAX(50, 100);
//	printf("max=%d\n", max);//定义好函数之后直接调用
//	return 0;
//}

//写一个函数可以交换整型变量的内容
//int main()//常规写法
//{
//	int a = 10;
//	int b = 20;
//	int cmd = 0;
//	printf("a=%d b=%d\n", a, b);//交换前
//	cmd = a;
//	a = b;
//	b = cmd;
//	printf("a=%d b=%d\n", a, b);//交换后
//	return 0;
//}
//
//void swap1(int x, int y)//x y 为swap1的形参--形参是实参的一份临时拷贝，对形参的修改不会改变实参
//{
//	int cmd = 0;
//	cmd = x;//--传值调用 （函数的形参和实参分别拥有不同的内存块，对形参的修改不会影响实参
//	x = y;
//	y = cmd;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);//交换前
//	swap1(a, b);
//	printf("a=%d b=%d\n", a, b);//无法交换--原因在于创建的x,y与a,b没有任何关系 双方无联系
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是指针变量
//	*pa = 20;//解引用操作
//	printf("%d\n", a);
//	return 0;
//
//}

//void swap2(int* pa, int* pb)//pa pb为swap2的实参
//{
//	int cmd = 0;
//	cmd = *pa;
//	*pa = *pb;
//	*pb = cmd;
//}
//int main()//传址调用--让函数和函数外边二点变量建立起真正的练习，函数内部可以直接操作函数外部的变量
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);//交换前
//	swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);//
//	return 0;
//}

//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)//练习--打印100-200之间的所有素数
//	{
//		if (n%j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()//函数的传值调用
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int is_leap_year(int x)
//{
//	if ((x % 4 && x % 100) == 0 || (x % 400 == 0))//练习--打印1000-2000之间的闰年
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//			printf("%d ", year);
//	}
//	return 0;
//}
//int binary_serach(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret= binary_serach(arr,k,sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}

//void Add(int* p)
//{
//	(*p)++;//++操作优先级高于取地址 因此要整体++需括号
//}
//int main()
//{
//	int num = 0;//每调用一次函数，num自增1
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	ret = strlen("jolyne");
//	printf("%d\n", ret);//1
//	printf("%d\n", strlen("jolyne"));//2--链式访问
//	return 0;
//}
int main()//链式访问
{
	printf("%d", printf("%d", printf("%d", 43)));//43 2 1
	return 0;
}