#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	int len = strlen("abc");
//	return 0;
//}

#include <string.h>
#include <stdio.h>
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = "xxxxxxxxxx";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}


//int  main()
//{
//	char arr[] = "hello world";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//
//	return 0;
//}
//
//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//void test(void)
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	//test();
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	////������ʹ��
//	////TDD-������������
//	max = get_max(a, get_max(3, 4));
//	printf("%d\n", max);
//
//	return 0;
//}
//�β�-��ʽ����
//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//void Swap2(int* px, int* py)
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ: a=%d b=%d\n", a, b);
//	//��ʵ�δ��ݸ��βε�ʱ��
//	//�β���ʵ�ε�һ����ʱ����
//	//���βε��޸ģ�����Ӱ��ʵ��
//	Swap1(a, b);//��ֵ����
//	//ʵ��-ʵ�ʲ���
//	Swap2(&a, &b);//��ַ����
//
//	printf("������: a=%d b=%d\n", a, b);
//
//	return 0;
//}

//'a';//�ַ�
//'1';//
//"1";//�ַ���
//"12";//�ַ���
//"";

//int main()
//{
//	//�����ַ���
//	char * p = "abcdef";
//	//*p = 'w';
//	char arr[] = "abcdef";//
//	arr[0] = 'w';
//
//	return 0;
//}
//
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n%i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n",count);
//	return 0;
//}

//
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0) && (y % 100 != 0))
//	{
//		return 1;
//	}
//	else if (y % 400 == 0)
//	{
//		return 1;
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//int binary_search(int* arr, int k)

//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
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
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);//10
//
//	//���鴫�δ�����������Ԫ�صĵ�ַ
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}
//
//void Add(int* p)
//{
//	//(*p)++;
//	*p++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}
//
//


//int main()
//{
//	int len = strlen("abc");
//	printf("%d\n", len);
//
//	printf("%d\n", strlen("abc"));
//
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//
//	return 0;
//}
#include "add.h"

#pragma comment(lib, "add.lib")

int main()
{
	int a = 20;
	int b = 20;

	int ret = Add(a, b);

	printf("ret = %d\n", ret);

	return 0;
}

