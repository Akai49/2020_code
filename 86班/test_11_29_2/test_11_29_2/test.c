#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int main()
//{
//	//int arr[10];
//	//int arr2[3][4];
//	//char arr3[5][2];
//	int arr[][4] = { { 1, 2 }, { 3, 4 }, { 5 } };
//	//int arr[3][4] = { 0 };
//	//arr[1][2] = 6;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//
//
//int main()
//{
//	int arr[][4] = { { 1, 2 }, { 3, 4 }, { 5 } };
//	int i = 0;
//	int j = 0;
//	int* p = &arr[0][0];
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	/*for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n",i,j, &arr[i][j]);
//		}
//	}*/
//
//	return 0;
//}
//void bubble_sort(int* arr)
//
//void print_arr(int *arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ������Ĺ���
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j <sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//����
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//
//int main()
//{
//	//1 2 3 4 5 6 7 8 9 10
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	//����-����
//	//���鴫�δ��ݵ��������һ��Ԫ�صĵ�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}
//

//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5};
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//
//	printf("%p\n", &arr);//����ĵ�ַ
//	printf("%p\n", &arr+1);//����ĵ�ַ
//
//	printf("%p\n", arr);//��Ԫ�صĵ�ַ
//	printf("%p\n", arr+1);//��Ԫ�صĵ�ַ
//
//	//�������Ǳ�ʾ������Ԫ�صĵ�ַ
//	//������2�����⣺
//	//��1��sizeof(������)-��������ʾ������飬sizeof(������)�����Ҳ����������Ĵ�С
//	//��2��&����������������ʾ������飬&��������ʾ��������ĵ�ַ
//	//
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr[0]);
//	//printf("%d\n", *arr);
//
//	return 0;
//}
//
//
//
//
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = n; i >= 0; i--)
//		{
//			int j = 0;
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		for (i = 1; i <= n; i++)
//		{
//			int j = 0;
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

#include <stdio.h>

int main()
{
	int n = 0;
	int arr[50] = { 0 };
	int m = 0;//Ҫ���������
	//��������
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &m);
	//����
	for (i = n - 1; i >= 0; i--)
	{
		if (arr[i]> m)
		{
			arr[i + 1] = arr[i];
		}
		else
		{
			arr[i + 1] = m;
			break;
		}
	}
	if (i == 0)
	{
		arr[i] = m;
	}
	//��ӡ
	for (i = 0; i<n + 1; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}

