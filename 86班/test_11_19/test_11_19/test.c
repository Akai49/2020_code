#define _CRT_SECURE_NO_WARNINGS 1

//
//newc++file.cpp
//notepad++
//

//#define ��ʶ������

#include <stdio.h>

//#define MAX 1000
//#define NUM 20
//
//
//int main()
//{
//	int m = MAX;
//	printf("%d\n", m);
//	return 0;
//}

//#define �����

//#define SUM(X,Y) ((X)+(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 10 * SUM(a, b);
//	int sum = 10 * ((a)+(b));
//	//int sum = 10 * a + b;
//	//int sum = a + b;//�滻
//	printf("%d\n", sum);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int * pa = &a;//ָ�����-��ŵ�ַ
//	*pa = 20;//* -- �����ò�������ӷ��ʲ�����
//
//	printf("%d\n", a);//20
//
//
//	//char ch = 'w';
//	//char * pc = &ch;
//
//	//printf("%p\n", &a);//& ȡ��ַ������
//	//printf("%d\n", sizeof(a));//4 ���ֽ�
//	return 0;
//}

//int main()
//{
//	double d = 3.14;
//  d = 0;
//
//	double* pd = &d;
//	*pd = 0;
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int*pa = &a;

//	char c = 'w';
//	char* pc = &c;
//
//	printf("%d\n", sizeof(pa));//4
//	printf("%d\n", sizeof(pc));//4
//
//	return 0;
//}

//
//struct Stu
//{
//	char name[20];
//	short age;
//	char sex[5];
//	char id[13];
//};
//
//int main()
//{
//	int a = 10;
//
//	struct Stu s = {"����", 20, "��", "20200101"};
//	struct Stu * ps = &s;
//	//�ṹ��ָ��->��Ա��
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//
//
//	/*printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);*/
//
//	//�ṹ��Ա���ʲ�����
//	//.
//	//�ṹ�����.��Ա��
//	//printf("%s %d %s %s\n", s.name, s.age, s.sex, s.id);
//
//	return 0;
//}
//

//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//void Swap(int* px, int *py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//дһ������������a��b
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}


//int main()
//{
//	//;//�����
//	int age = 10;
//	if (age == 18)
//	{
//		printf("����\n");
//		printf("������\n");
//	}
//	
//	return 0;
//}

//int main()
//{
//	int age = 20;
//	if (age >= 18)
//		printf("����\n");
//	else
//		printf("δ����\n");
//
//	return 0;
//}

//int main()
//{
//	/*int age = 60;
//	if (age < 18)
//		printf("δ����\n");
//	else if (age>=18 && age<30)
//		printf("����\n");
//	else if (age>=30 &&age<50)
//		printf("����\n");*/
//
//	int age = 60;
//	if (age < 18)
//		printf("δ����\n");
//	else
//	{
//		if (age >= 18 && age < 30)
//			printf("����\n");
//		else if (age >= 30 && age < 50)
//			printf("����\n");
//	}
//	return 0;
//}
//
//
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//		printf("haha\n");
//	
//
//	return 0;
//}

//�淶������
//

//<������C/C++���>



//int main()
//{
//	char first_name[20];
//	char FirstName[20];
//	int a = 10;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//	}
//	return 0;
//}

//int main()
//{
//
//	int num = 1;
//	if (5 == num)
//	{
//		printf("hehe\n");
//	}
//
//	/*int num = 1;
//	if (num = 5)
//	{
//		printf("hehe\n");
//	}*/
//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf("%d", &day);
//
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
//	
//	}
//
//	/*switch (day)
//	{
//	case 1:
//		printf("����1\n");
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
//	}*/
//	//if (1 == day)
//	//	printf("����1\n");
//	//else if (2 == day)
//	//	printf("����2\n");
//	//else if (3 == day)
//	//	printf("����3\n");
//	//...
//	return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{//switch����Ƕ��ʹ��
//		case 1:n++;
//		case 2:m++;n++;break;
//		}
//	case 4:
//		m++;break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}
//
