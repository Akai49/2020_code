#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char input[20] = {0};//�������
	system("shutdown -s -t 60");

again:
	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)//�Ƚ�һ��input��߷ŵ��ǲ��ǡ�������-�����ַ����ıȽϲ�����==������Ӧ��ʹ��strcmp
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}

//3^3 = 0
//011
//011
//000
//4^4=0
//a^a=0
//0^3=3
//000
//011
//011
//0^5=5
//000
//101
//101
//0^a=a

//
//�㷨
//�������ķ��������㷨
//
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 5, 3, 4, 7};
//	int i = 0;
//	int ret = 0;
//	//�����������е�Ԫ�������һ�𣬵õ��������ֻ����һ�ε�����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//11 - 121
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret^arr[i];
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}

//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4};
//	int i = 0;
//	//�������
//	//���������Ԫ�ظ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0;//����
//		//arr[i]
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//scanf("%d%d", &a, &b);//10 20
//	//^ - ���������ƣ�λ���
//	//��ͬΪ0������Ϊ1
//	//101
//	//110
//	//011
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}




//int main()
//{
//	//a int - 4�ֽ� - 4*8bit = 32bit
//	//INT_MAX;//2147483647
//	int a = 0;
//	int b = 0;
//
//	scanf("%d%d", &a, &b);//10 20
//
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}


//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);//10 20
//
//	printf("����ǰ��a=%d b=%d\n", a, b);
//
//	//����
//	c = a;
//	a = b;
//	b = c;
//
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}

//дC����
//main����-������-��������
//
//int main()
//{
//	//��ӡ����-�⺯��-��ͷ�ļ�-stdio.h
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//
//	return 0;
//}