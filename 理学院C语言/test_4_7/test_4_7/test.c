#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int b = -1;
//	int max = 0;
//
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//
//	max = a > b ? a : b;
//
//	printf("max = %d\n", max);
//
//	return 0;
//}
//
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//
//	/*if (ch >= 'A' && ch <= 'Z')
//		ch = ch + 32;
//	else
//		ch = ch;*/
//
//	//(ch >= 'A' && ch <= 'Z') ? (ch = ch + 32) : (ch = ch);
//	
//	ch = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : (ch);//
//	//@#$
//	printf("ch = %c\n", ch);
//
//	return 0;

//����else ����
//
//int main()
//{
//	int a = 0;
//	int b = 2;
//
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	}
//	
//	return 0;
//}
//
//

//int main()
//{
//	int a = 10;
//	int a=10;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//
//	}
//	for (i=0;i<10;i++)
//	{
//
//	}
//	return 0;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//
//	//if (x < 0)
//	//	y = -1;
//	//else if (x == 0)
//	//	y = 0;
//	//else
//	//	y = 1;
//
//	//if (x < 0)
//	//{
//	//	y = -1;
//	//}
//	//else //x>=0
//	//{
//	//	if (x == 0)
//	//		y = 0;
//	//	else
//	//		y = 1;
//	//}
//
//	//if (x <= 0)
//	//{
//	//	if (x == 0)
//	//		y = 0;
//	//	else
//	//		y = -1;
//	//}
//	//else
//	//{
//	//	y = 1;
//	//}
//
//	//if (x > 0)
//	//	y = 1;
//
//	//if (x == 0)
//	//	y = 0;
//	//
//	//if (x < 0)
//	//	y = -1;
//
//	printf("x=%d y=%d\n", x, y);
//	return 0;
//}

//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	default:
//		printf("�������\n");
//		break;
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	}
//
//	/*switch (day)
//	{
//	default:
//		printf("�������\n");
//		break;
//	case 1:
//		printf("����1\n");
//		printf("������\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//*/
//	//1-����1
//	//2-����2
//	//......
//	//if (day == 1)
//	//	printf("����1\n");
//	//else if (day == 2)
//	//	printf("����2\n");
//	//else if (day == 3)
//	//	printf("����3\n");
//	//else if (day == 4)
//	//	printf("����4\n");
//	//else if (day == 5)
//	//	printf("����5\n");
//	//else if (day == 6)
//	//	printf("����6\n");
//	//else if (day == 7)
//	//	printf("������\n");
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	ch = getchar();
//	switch (ch)
//	{
//	case 'A':
//	case 'a':
//		printf("aaaaaaa\n");
//		break;
//	case 'B':
//	case 'b':
//		printf("bbbbb\n");
//		break;
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	int leap = 0;
//	scanf("%d", &year);
//	if (year % 4 == 0)
//	{
//		if (year % 100 == 0)
//		{
//			if (year % 400 == 0)
//			{
//				leap = 1;
//			}
//			else
//			{
//				leap = 0;
//			}
//		}
//		else
//		{
//			leap = 1;
//		}
//	}
//	else
//	{
//		leap = 0;
//	}
//	if (leap == 1)
//		printf("%d ������\n", year);
//	else
//		printf("%d ��������\n", year);
//	return 0;
//}

#include <stdbool.h>
//
//int main()
//{
//	int year = 0;
//	_Bool leap = false;
//
//	scanf("%d", &year);
//	if (year % 4 == 0)
//	{
//		if (year % 100 == 0)
//		{
//			if (year % 400 == 0)
//			{
//				leap = true;
//			}
//			else
//			{
//				leap = false;
//			}
//		}
//		else
//		{
//			leap = true;
//		}
//	}
//	else
//	{
//		leap = false;
//	}
//	if (leap == true)
//		printf("%d ������\n", year);
//	else
//		printf("%d ��������\n", year);
//
//	return 0;
//}
//abs�����ֵ�ĺ���
#include <math.h>

int main()
{
	double a = 0.0;
	double b = 0.0;
	double c = 0.0;
	scanf("%lf%lf%lf", &a, &b, &c);
	//1e-6 == 1*10^-6

	if (fabs(a) <= 0.00000001)//0.0000000101001   0.0001
		printf("����һԪ���η���\n");
	else
	{
		double disc = b*b - 4 * a*c;
		if (fabs(disc) <= 0.00000001)
		{
			double x = (-b) / (2 * a);
			printf("��������ȵĸ���%lf %\lf\n", x, x);
		}
		else if (disc > 0.00000001)
		{
			double x1 = (-b + sqrt(disc)) / (2 * a);
			double x2 = (-b - sqrt(disc)) / (2 * a);
			printf("����������ȵ�ʵ����x1 = %lf x2=%lf\n", x1, x2);
		}
		else
		{
			printf("�����������\n");
		}
	}
	return 0;
}

//3.14
//0.125
//11.00110010101001010101001010001010101000010101000010101010101