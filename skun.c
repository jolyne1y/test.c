#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;//��̬�ľֲ�����
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

//int main()//���������Ӵ�С���--ð������
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

//int main()//д�����ӡ1-100֮��3�ı���
//{
//	int a = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 3 == 0)//%Ϊȡģ������Ϊ0
//		{
//			printf("%d ", a);
//		}
//	}
//}

//int main()//--�������������Լ��
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

//int main()//��ӡ1000-2000������
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0&& i%100 != 0)//�жϷ���--1.�ܱ�4�����Ҳ��ܱ�100����
//			                                   // 2.�ܱ�400����
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

//int main()//��ӡ100-200֮�����������
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����--�жϹ���1.�Գ���
//			//����2-i-1������
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
//�Ż���1
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)//sqrt-�⺯��-��ƽ�� ͷ�ļ�Ϊ��<math.h>
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
//�Ż���2
int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)
	{
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)//sqrt-�⺯��-��ƽ�� ͷ�ļ�Ϊ��<math.h>
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