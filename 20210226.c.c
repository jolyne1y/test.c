#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
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
//void swap1(int x, int y)//x y Ϊswap1���β�--�β���ʵ�ε�һ����ʱ���������βε��޸Ĳ���ı�ʵ��
//{
//	int cmd = 0;
//	cmd = x;//--��ֵ���� ���������βκ�ʵ�ηֱ�ӵ�в�ͬ���ڴ�飬���βε��޸Ĳ���Ӱ��ʵ��
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

//void swap2(int* pa, int* pb)//pa pbΪswap2��ʵ��
//{
//	int cmd = 0;
//	cmd = *pa;
//	*pa = *pb;
//	*pb = cmd;
//}
//int main()//��ַ����--�ú����ͺ�����߶��������������������ϰ�������ڲ�����ֱ�Ӳ��������ⲿ�ı���
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);//����ǰ
//	swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);//
//	return 0;
//}

//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)//��ϰ--��ӡ100-200֮�����������
//	{
//		if (n%j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()//�����Ĵ�ֵ����
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
//	if ((x % 4 && x % 100) == 0 || (x % 400 == 0))//��ϰ--��ӡ1000-2000֮�������
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
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}

//void Add(int* p)
//{
//	(*p)++;//++�������ȼ�����ȡ��ַ ���Ҫ����++������
//}
//int main()
//{
//	int num = 0;//ÿ����һ�κ�����num����1
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
//	printf("%d\n", strlen("jolyne"));//2--��ʽ����
//	return 0;
//}
int main()//��ʽ����
{
	printf("%d", printf("%d", printf("%d", 43)));//43 2 1
	return 0;
}