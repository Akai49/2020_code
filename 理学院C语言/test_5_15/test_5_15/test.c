#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
int a = 2018;//ȫ�ֱ���
void test1()
{
	printf("test1::%d\n", a);
	printf("test1::%d\n", b);
}

int b = 2020;//ȫ�ֱ���
void test2()
{
	printf("test2::%d\n", a);
	printf("test2::%d\n", b);
}

int main()
{
	test1();
	test2();

	return 0;
}

//
//int Add(int x, int y)
//{
//	int z = 0;//
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Add(a, b);
//
//	{
//		int c = 0;
//		printf("%d\n", c);
//	}
//	printf("%d\n", c);
//
//	return 0;
//}
//void test()
//{
//	int b = 20;
//	printf("b = %d\n", b);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 0;
//	return 0;
//}





//{}-�����
//�ڴ�����ڲ�����ı������Ǿֲ�����
//�ڴ�����ⲿ����ı�������ȫ�ֱ���
//
//int val = 100;//ȫ�ֱ���
//
//void test()
//{
//	int b = 20;
//	printf("b = %d\n", b);
//}
//
//int main()
//{
//	int a = 10;
//	{
//		int c = 0;//�ֲ�����
//
//	}
//	return 0;
//}

//void print(int arr[][5])
//{
//
//}

//void print(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//}
//
//int Max(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	int max = arr[0][0];
//
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//			}
//		}
//	}
//	return max;
//}
//
//int main()
//{
//	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
//	//print(arr, 3, 5);
//	int max = Max(arr, 3, 5);
//	printf("max = %d\n", max);
//
//	return 0;
//}

//дһ��ѡ������-��С����
//
//void Sort(int arr[], int n)
//{
//	int i = 0;
//	//ѡ������Ĵ���
//	for (i = 0; i < n - 1; i++)
//	{
//		//�����еĴ�����Ԫ������һ����С�ĺ��±�Ϊi��Ԫ�ؽ��н���
//		//��
//		int min = i;
//		int j = 0;
//		for (j = i; j < n; j++)
//		{
//			if (arr[j] < arr[min])
//				min = j;
//		}
//		//��
//		int tmp = arr[i];
//		arr[i] = arr[min];
//		arr[min] = tmp;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 2, 1, 4, 7, 5, 3, 6, 9, 0, 8 };
//	int arr2[5] = { 2, 1, 4, 7, 5 };
//	Sort(arr, 10);//�������飬10��Ԫ��
//	Sort(arr2, 5);//�������飬5��Ԫ��
//
//	return 0;
//}

//
//void test(int arr[], int n)
//{
//	printf("%p\n", arr);
//	arr[0] = 0;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%p\n", arr);
//	test(arr, 10);
//	return 0;
//}

//��������Ϊ��������
//void print(int arr[10])
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//int average(int arr[])
//{
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		sum += arr[i];
//	}
//	return sum / 10;
//}

//n�������Ԫ�ظ���
//int average(int arr[], int n)
//{
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum += arr[i];
//	}
//	return sum / n;
//}
//
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr2[5] = { 1, 2, 3, 4, 5};
//
//	int avg = average(arr, 10);
//	printf("%d\n", avg);
//
//	avg = average(arr2, 5);
//	printf("%d\n", avg);
//
//	//����������Ϊ����������
//	//print(arr);//���Ϊ������arr�����˴���
//	//��������������������Ԫ�صĵ�ַ
//	return 0;
//}


//void print(int n)
//{
//	printf("%d ", n);
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", arr[i]);//������Ԫ����Ϊ��������
//		print(arr[i]);
//	}
//	return 0;
//}
//
//void Move(char one, char three)
//{
//	printf("%c -->  %c\n", one, three);
//}
//
//void Hanoi(int n, char one, char two, char three)
//{
//	if (n == 1)
//	{
//		//ֱ���ƶ��������
//		Move(one, three);
//	}
//	else
//	{
//		//1. ��one �ϵ� n-1���ӽ�����three���ƶ���two
//		Hanoi(n-1, one, three, two);
//		//2. ��one�ϵ�1����Ų��three��
//		Move(one, three);
//		//3. ��two �ϵ�n-1���� ����one,�ƶ���three
//		Hanoi(n-1, two, one, three);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	printf("���������ӵ�����:>");
//	scanf("%d", &n);//3
//	printf("��%d�����ӵ��ƶ���������:>\n", n);
//	Hanoi(n, 'A', 'B', 'C');//��n�����Ӵ�A��Ų��C���ϣ�������B��
//	return 0;
//}