#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void print(int n)
//{
//	int j = 0;
//	if (n > 9)
//	{
//		print(n/10);//--�����ݹ�-�����е��ú���
//	}
//	printf("%d ", n%10);//
//}
//
//int main()//��ϰ--���һ��������ʹ������1234ʱ ���1 2 3 4
//{
//	unsigned int i = 0;
//	scanf("%d", &i);
//	print(i);
//	return 0;
//}

//int yede_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')//ע����������-ȡ��ַ����Ҫ��*
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
//	//�Զ���strlen���� ģ��ʵ�ָú�������
//	int len = yede_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}

//int yede_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + yede_strlen(str + 1);//�Ժ����ݹ�ķ�ʽʵ�� �������м����
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
//		return i*fac2(i - 1);//�����ݹ�
//}
//
//int main()
//{
//	int i = 0;
//	int ret = 0;//��n�Ľ׳�
//	scanf("%d", &i);
//	//ret = fac1(i);//ʵ�ַ�ʽ--ѭ��
//	ret = fac2(i);
//	printf("%d\n", ret);
//	return 0;
//}

//int fib1(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);//�ݹ���������--Ч�ʵ� ������
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
int main()//--������n��쳲�������
{
	int n = 0;
	int ret = 0;
	scanf("%d",&n);//TDD--������������
	//ret = fib1(n);
	ret = fib2(n);
	printf("ret=%d\n", ret);
	return 0;
}