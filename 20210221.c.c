#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
	{
		printf("hehe\n");
	}
	return 0;
}
int main()
{
	int i = 0;
	int j = 0;
	for (i = 0, j = 0; j = 0; i++, j++)//0次循环--原因 j = 0；赋值操作，不进循环
		j++;
	return 0;
}

//do...while 循环打印数字1-10
int main()
{	
	int i = 1;
	do
	{
		printf("%d ", i);
		i++;
	} 
	while (i <= 10);
	return 0;
}

//练习题--计算n的阶乘
int main()
{
	int ret = 0;
	int n = 0;
	int i = 1;
	scanf("%d", &n);
	for (ret = 1; ret <= n; ret++)
	{
		i = i*ret;
	}
	printf("%d\n",i);

	return 0;
}

//练习--计算1!+2!+3!+...+10!
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret = 1;
		for (i = 1; i <= n; i++)
		{
			ret = ret * i;
		}
		sum = sum + ret;
	}
	printf("%d ", sum);
	return 0;
}

//优化版
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}
	printf("%d\n", sum);
	return 0;
}


int main()//写一个代码，在arr有序数组中找到7
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("找到了,下标是%d\n", i);
		}

	}
	if (i == sz)
	{
		printf("找不到");
	}
	return 0;
}

int main()//用二分查找法查找数组中的元素
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	int left = 0;//左下标
	int right = sz - 1;//右下标
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}

//编写代码，演示多个字符从两端移动，向中间汇聚

//编写代码--演示两端字符向中间靠拢
int main()
{
	char arr1[] = "welcome to my home!!!";
	char arr2[] = "#####################";
	int left = 0;
	int right = strlen(arr1) - 1;//头文件--<string.h>
	while (left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//休息一秒--头文件<windows.h>
		system("cls");//清空屏幕--头文件<stdlib.h>
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}

//编写代码实现，模拟用户登录情形，且只能输入三次密码

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码;>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//strcmp--字符串比较函数--<string.h>
		{
			printf("登陆成功！");
			break;
		}
		else
		{
			printf("密码错误，请重新输入");
		}
	}if (i == 3)
	{
		printf("三次密码错误，即将退出");
	}
	return 0;
}