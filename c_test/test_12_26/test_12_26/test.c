#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 1; i <= n; i++)
//		{
//			//��ӡһ��
//			int j = 0;
//			for (j = 1; j <= i; j++)
//			{
//				printf("%d ", j);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//

//
//int main()
//{
//	int n = 0;
//	//arr������
//	int arr[50] = { 0 };
//	int m = 0;//Ҫ�����Ԫ��
//
//	//0-
//	//����
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &m);
//	//����
//	for (i = n - 1; i >= -1; i--)
//	{
//		if (arr[i]>m)
//		{
//			arr[i + 1] = arr[i];
//		}
//		else
//		{
//			arr[i + 1] = m;
//			break;
//		}
//	}
//	/*if (i == -1)
//		arr[0] = m;*/
//	//���  
//	for (i = 0; i<n + 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//

//
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int arr[101] = { 0 };//1-100
//	//0 1 2 3 4 5 6 7 8 9 
//	//0 1 2 3 4
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		//0-n֮��������ŵ���������
//		for (i = 0; i<n; i++)
//		{
//			arr[i] = i;
//		}
//		//ɸѡ
//		for (i = 2; i <= n; i++)
//		{
//			int j = 0;
//			for (j = i + 1; j <= n; j++)
//			{
//				if (arr[j] % i == 0)
//					arr[j] = 0;
//			}
//		}
//		int count = 0;//����
//		for (i = 2; i <= n; i++)
//		{
//			if (arr[i] == 0)
//				count++;
//			else
//				printf("%d ", arr[i]);
//		}
//		printf("\n%d\n", count);
//	}
//	return 0;
//}




//�ж�i�Ƿ�Ϊ����
//�������������1
//  ������������0
//������ֻ�ܱ�1��i����������
//7 1 7
//��2->i-1 �Գ�i
//���������,i�Ͳ�������
//������е�2->i-1֮������鶼��������i��i��������
//�Գ���
//
#include <math.h>

int is_prime(int i)
{
	int j = 0;
	//m = a*b
	//16 = 2*8
	//16 = 4*4

	for (j = 2; j <= sqrt(i); j++)
	{
		if (i%j == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	//��ӡn�ڵ���������
	//1-n ֮��������������ʹ�ӡ
	int i = 0;
	for (i = 3; i <= n; i+=2)
	{
		//�ж�i�Ƿ�Ϊ����
		if (is_prime(i))
		{
			printf("%d ", i);
		}
	}
	return 0;
}