#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	printf("************************\n");
//	printf("      Very Good         \n");
//	printf("************************\n");
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int max = 0;//����������ֵ
//	scanf("%d%d%d", &a, &b, &c);
//	max = a;//����a�����ֵ
//	if (b > max)
//	{
//		max = b;
//	}
//	if (c > max)
//	{
//		max = c;
//	}
//	printf("%d\n", max);
//
//	return 0;
//}

//��������a,b,c,Ҫ���մӴ�С��˳�����
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	//
//	if (a < b)
//	{
//		int tmp = 0;
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = 0;
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = 0;
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//
//	if (n % 3 == 0 && n % 5 == 0)
//	{
//		printf("ok\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//2-> i-1
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

#include<math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//2-> i-1
//		int flag = 1;
//		int j = 0;
//		//sqrt - �⺯�� - ��ƽ�� - math.h
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//2-> i-1
//		int flag = 1;
//		int j = 0;
//		//sqrt - �⺯�� - ��ƽ�� - math.h
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0; 
//	/*for (i = 1; i*3<=100; i++)
//	{
//		printf("%d ", i * 3);
//	}*/
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int min = 0;
//	scanf("%d%d", &m, &n);//24 18
//	//�ҳ�m,n�Ľ�Сֵ
//	if (m > n)
//		min = n;
//	else
//		min = m;
//	
//	while (1)
//	{
//		if (m%min == 0 && n%min == 0)
//		{
//			printf("���Լ��:%d\n", min);
//			break;
//		}
//		min--;
//	}
//
//	return 0;
//}


//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);//18 24
//	//շת�����
//
//	while (r = m%n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
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
//		//�ж�year�Ƿ�Ϊ����
//		//1. �ܱ�4���������Ҳ��ܱ�100����������
//		//2. �ܱ�400����������
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			count++;
//			printf("%d ", year);
//		}
//		else if (year % 400 == 0)
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//


//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}
//9 19 29 39 .. 99
//90 91 92 93 93 .. 99

//��Ѷ
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//4*1 ....

//int main()
//{
//	int i = 0;
//	//����
//	for (i = 1; i <= 9; i++)
//	{
//		//��ӡһ�е���Ϣ
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ����ӡ�����

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}


///��10 �����������ֵ

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int max = 0;
	//��������
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	max = arr[0];
	//�����ֵ
	for (i = 1; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	//��ӡ
	printf("max = %d\n", max);
	return 0;
}
