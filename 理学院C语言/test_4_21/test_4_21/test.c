#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	//int arr[4+6];
//	//int arr[10];
//	int n = 0;
//	scanf("%d", &n);//10
//	int arr[n];//C99
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//Linux - Centos 7.0
//gcc ������
//C99
//

//
//int main()
//{
//	int arr[10];
//	arr[5] = 6;
//
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	int arr[10];
//	//0-9
//	int i = 0;
//	//Խ�����
//	for (i = 0; i <10; i++)
//	{
//		arr[i] = i;
//	}
//
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//
//int main()
//{
//	//int a = 10;//��ʼ��
//	//int arr2[10];
//	//arr2[0] = 0;
//	//arr2[1] = 1;
//	////...
//	//��ȫ��ʼ��
//	//int arr[10] = {0,1,2,3,4,5,6,7,8,9};
//
//	//����ȫ��ʼ��
//	//int arr3[10] = {1,2,3};
//	//int arr4[10] = { 0 };
//	int arr5[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	return 0;
//}

//1 1 2 3 5 8 13 21 34 55 ...
//int main()
//{
//	int fib[20] = {1,1};//��ʾǰ20��쳲�������
//
//	int i = 0;
//	for (i = 0; i < 18; i++)
//	{
//		fib[i + 2] = fib[i + 1] + fib[i];
//	}
//
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", fib[i]);
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	//����ʹ��arr�����е�Ԫ�أ���С��������
//	//1 2 3 4 5 6 7 8 9 10
//	//��������-ð������
//	//ȷ��ð�����������
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		//һ��ð������Ĺ���
//		//ȷ��һ��ð������ȽϵĶ���
//		int j = 0;
//		for (j = 0; j < 9-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//
//int main()
//{
//	int arr[3][4];
//	float pay[3][6];
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//
//	return 0;
//}

int main()
{
	int arr[3][4];
	arr[3][4];//��4�У���5�е�Ԫ��-Խ�����
	int i = 0;
	//ȷ��-��
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			arr[i][j] = 5;
		}
	}

	//int i = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	int j = 0;
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
	//	}
	//}

	return 0;
}