#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	printf("hello\n");
//	goto again;//goto��� ������������ת��ָ��λ��--ͨ��������ʹ�ã����״��Ҵ��������ִ��˳��
//	printf("nihao\n");//���׳�bug--���Ҵ���������߼�
//again:
//	printf("jolyne\n");
//	return 0;
//}

//int main()  //shutdown -s -t 60---�ػ�����
//{
//	char input[20] = { 0 };//���׵Ķ�ʱ�ػ�����
//	system("shutdown -s -t 180");//system����--ͷ�ļ�<stdlib.h>
//again:
//	printf("ע�⣡��ĵ��Խ���3���Ӻ�ػ���������룺���Ǵ�˧�ȣ���ȡ���ػ�\n������:>");
//	scanf("%s", input);
//	if (strcmp(input, "���Ǵ�˧��") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//int main()//�ػ�����--whileѭ��
//{
//	char input[20] = {0};
//	system("shutdown -s -t 180");
//	while (1)
//	{
//		printf("ע�⣡��ĵ��Խ���3���Ӻ�ػ���������룺���Ǵ�˧�ȣ���ȡ���ػ�\n������:>");
//		scanf("%s", input);
//		if (strcmp(input, "���Ǵ�˧��") == 0)
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
//	int sum = add(a, b);//���ú���-����������
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "jolyne";
//	char arr2[20] = "#########";//jolyne\0--\0��Ϊ�ַ����Ľ�����־����ζ������\0���ַ���֮������ݱ㲻�ٴ�ӡ
//	strcpy(arr2, arr1);//�ַ��������������ߵ����ݿ�����ǰ�ߵĿռ���ȥ  ͷ�ļ�<string.h>
//	printf("%s\n", arr2);
//	return 0;
//}

//memset
//memory-�ڴ�  set-����

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
//	int max = get_MAX(a, b); //��ʶ�Զ��庯��
//	printf("max=%d\n", max);
//	max = get_MAX(50, 100);
//	printf("max=%d\n", max);//����ú���֮��ֱ�ӵ���
//	return 0;
//}

//дһ���������Խ������ͱ���������
//int main()//����д��
//{
//	int a = 10;
//	int b = 20;
//	int cmd = 0;
//	printf("a=%d b=%d\n", a, b);//����ǰ
//	cmd = a;
//	a = b;
//	b = cmd;
//	printf("a=%d b=%d\n", a, b);//������
//	return 0;
//}
//
//void swap1(int x, int y)
//{
//	int cmd = 0;
//	cmd = x;
//	x = y;
//	y = cmd;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);//����ǰ
//	swap1(a, b);
//	printf("a=%d b=%d\n", a, b);//�޷�����--ԭ�����ڴ�����x,y��a,bû���κι�ϵ ˫������ϵ
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��ָ�����
//	*pa = 20;//�����ò���
//	printf("%d\n", a);
//	return 0;
//
//}

void swap2(int* pa, int* pb)
{
	int cmd = 0;
	cmd = *pa;
	*pa = *pb;
	*pb = cmd;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d b=%d\n", a, b);//����ǰ
	swap2(&a, &b);
	printf("a=%d b=%d\n", a, b);//
	return 0;
}