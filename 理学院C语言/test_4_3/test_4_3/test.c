#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
//
//int main()
//{
//	double a=0.0, b=0.0, c=0.0;
//	double disc = 0.0;
//	double p = 0.0;
//	double q = 0.0;
//	double x1 = 0.0;
//	double x2 = 0.0;
//
//	scanf("%lf%lf%lf", &a, &b, &c);
//	disc = b*b - 4*a*c;
//	if (disc < 0.0)
//	{
//		printf("����û��ʵ��\n");
//	}
//	else
//	{
//		p = (-b) / (2 * a);
//		q = sqrt(disc) / (2 * a);
//		x1 = p + q;
//		x2 = p - q;
//		printf("x1=%7.2lf x2=%7.2lf\n", x1, x2);
//	}
//
//	return  0;
//}
//
//int main()
//{
//	double a = 0.0;
//	double b = 0.0;
//	scanf("%lf%lf", &a, &b);
//
//	if (a > b)
//	{
//		//����
//		double tmp = 0.0;
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//
//	printf("%lf %lf\n", a, b);
//	return 0;
//}
//
//int main()
//{
//	double a = 0.0;
//	double b = 0.0;
//	double c = 0.0;
//	scanf("%lf%lf%lf", &a, &b, &c);
//	//��С�������3��ֵ
//	//a b �Ľ�Сֵ��a
//	if (a > b)
//	{
//		 double tmp = 0.0;
//		 tmp = a;
//		 a = b;
//		 b = tmp;
//	}
//	//a c �Ľ�Сֵ��a
//	if (a > c)
//	{
//		double tmp = 0.0;
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//
//	//b c
//	if (b > c)
//	{
//		double tmp = 0.0;
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	printf("%lf %lf %lf\n", a, b, c);
//	return 0;
//}
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("δ����\n");
//	}
//	else if (age >= 18 && age < 30)
//	{
//		printf("����\n");
//	}
//	else if (age >= 30 && age < 50)
//	{
//		printf("����\n");
//	}
//	else if (age >= 50 && age < 90)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("�ϲ���\n");
//	}
//
//	//if (age < 18)
//	//{
//	//	printf("δ����\n");
//	//}
//	//else
//	//{
//	//	printf("����\n");
//	//}
//
//
//	/*if (age < 18)
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}*/
//	//{} - �����
//
//	return 0;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//	//if (x > 0)
//	//	y = 1;
//	//else if (x == 0)
//	//	y = 0;
//	//else
//	//	y = -1;
//	//if (x > 0)
//	//	y = 1;
//	//else
//	//{
//	//	if (x == 0)
//	//		y = 0;
//	//	else
//	//		y = -1;
//	//}
//	//
//	//if (x >= 0)
//	//{
//	//	if (x > 0)
//	//		y = 1;
//	//	else
//	//		y = 0;
//	//}
//	//else
//	//{
//	//	y = -1;
//	//}
//	if (x > 0)
//		y = 1;
//
//	if (x == 0)
//		y = 0;
//	
//	if (x < 0)
//		y = -1;
//
//	printf("%d\n", y);
//	return 0;
//}
//
//int main()
//{
//	int a = 5;
//	int b = 0;
//	//int c = a && b;
//	//int c = a || b;
//	int c = !a;
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	//int d = (a++) && (b--) && (c > 2);
//
//	//int d = (a++) && (--b) && (c > 2);
//
//	int d = (a++) || (--b) || (c > 2);
//
//	printf("a=%d b=%d c=%d d=%d\n", a , b, c, d);
//
//	return 0;
//}

//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//	{
//		printf("%d ������\n", year);
//	}
//
//	/*if (year % 4 == 0)
//	{
//		if (year % 100 != 0)
//		{
//			printf("%d ������\n", year);
//		}
//	}
//	if (year % 400 == 0)
//	{
//		printf("%d ������\n", year);
//	}*/
//	return 0;
//}

//�߼��ͱ��� - ��������
//C99 - ���������б�������֧��
#include <stdbool.h>

int main()
{
	int a = 20;
	_Bool b = 3<5;//�� -true����-false
	bool b2 = 3 > 6;
	printf("%d\n", b2);
	
	return 0;
}