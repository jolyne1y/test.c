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
	for (i = 0, j = 0; j = 0; i++, j++)//0��ѭ��--ԭ�� j = 0����ֵ����������ѭ��
		j++;
	return 0;
}

//do...while ѭ����ӡ����1-10
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

//��ϰ��--����n�Ľ׳�
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

//��ϰ--����1!+2!+3!+...+10!
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

//�Ż���
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


int main()//дһ�����룬��arr�����������ҵ�7
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("�ҵ���,�±���%d\n", i);
		}

	}
	if (i == sz)
	{
		printf("�Ҳ���");
	}
	return 0;
}

int main()//�ö��ֲ��ҷ����������е�Ԫ��
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
	int left = 0;//���±�
	int right = sz - 1;//���±�
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
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}

//��д���룬��ʾ����ַ��������ƶ������м���

//��д����--��ʾ�����ַ����м俿£
int main()
{
	char arr1[] = "welcome to my home!!!";
	char arr2[] = "#####################";
	int left = 0;
	int right = strlen(arr1) - 1;//ͷ�ļ�--<string.h>
	while (left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//��Ϣһ��--ͷ�ļ�<windows.h>
		system("cls");//�����Ļ--ͷ�ļ�<stdlib.h>
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}

//��д����ʵ�֣�ģ���û���¼���Σ���ֻ��������������

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������;>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//strcmp--�ַ����ȽϺ���--<string.h>
		{
			printf("��½�ɹ���");
			break;
		}
		else
		{
			printf("�����������������");
		}
	}if (i == 3)
	{
		printf("����������󣬼����˳�");
	}
	return 0;
}