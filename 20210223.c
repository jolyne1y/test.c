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

//int main()//����1-100֮���ж��ٸ���9������
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

//int main()//����1/1-1/2+1/3-1/4+...+1/99-1/100
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag* 1.0/ i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);//��ӡ��������%lf
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int max = arr[0];//�����±��0��ʼ
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

//int main()//��ӡ�˷��ھ���
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i,j, i*j);//%2d��ʾ�Ҷ��룬%-2d��ʾ�����
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
	 ret = rand()%100+1;//���ɵ�����Ϊ1-100-- rand����
	 while (1)
	 {
		 printf("�������:>");
		 scanf("%d ", &guess);
		 if (guess > ret)
		 {
			 printf("�´���\n");
		 }
		 else if (guess < ret)
		 {
			 printf("��С��\n");
		 }
		 else
		 {
			 printf("��ϲ�����ˣ�\n");
			 break;
		 }
	 }
}
//RAND_MAX-���ɵ��������0-32767��rand�������ɵ����ֵ ͷ�ļ�<stdlib.h>
int main()//��������Ϸ
{
	int input = 0;
	srand((unsigned int)time(NULL));//NULL:��ָ��
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d ", &input);
		switch (input)
		{
		case 1:
			game();//��Ϸ����
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}