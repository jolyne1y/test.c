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

//��ϰ--��forѭ����ӡ1-10
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
//			continue;//1 2 3 4 ��ѭ��
//		printf("%d ", i);
//		i++;
//	}
//	return 0;

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; 
//	int i = 0;
//	for (i = 0; i < 10; i++)//for���ͨ���������ǰ�պ󿪵���ʽ��д
//	{
//		printf("%d ", arr[i]);//10��ѭ��--10�δ�ӡ--10����
//	}
//	return 0;
//}

//for����������ʽ
//int main()
//{
//	for (;;)//forѭ���ĳ�ʼ�����������ж϶�����ʡ�ԣ�But if�жϲ��ֱ�ʡ�ԣ��ж�������Ϊ��
//	{
//		printf("hehe\n");//��ѭ��
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
//		for (; j < 10; j++)//ʡ��֮��jѭ��֮��û�г�ʼ��ֵ
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}