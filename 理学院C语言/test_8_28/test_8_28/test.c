#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>



void test()
{
	static int a = 1;
	a++;
	printf("%d ", a);
}

int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		test();
	}
	return 0;
}
//sizeof - ������
//�����ĳ������������͵Ĵ�С
//ֻ���Ŀռ��С������������
//void test(int arr[])
//{
//	printf("test:%d\n", sizeof(arr));
//}
//
//int main()
//{
//	int *p = (int*)malloc(100);
//	printf("%d\n", sizeof(p));
//	int a = 10;
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//
//	int arr[7] = { 0 };
//	printf("%d\n", sizeof(arr));//?
//	test(arr);
//	return 0;
//}
//strlen - �⺯��s
//���ַ�������
//����Ҫ֪��'\0'��λ��

//
//int main()
//{
//	//char arr[] = "hello";
//	char arr[] = { 'a', 'b', 'c' };
//
//	printf("%d\n", strlen(arr));//
//	printf("%d\n", sizeof(arr));//
//
//	return 0;
//}
//

//void test()
//{
//	printf("hello\n");
//}
//
//int main()
//{
//	test(1);
//	return 0;
//}

//����
//�β�-��ʽ����
//�β�Ҫ��ʵ�α�������һ��
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//ʵ��-ʵ�ʲ���
//	//����/����/���ʽ/����
//	print(arr, sz);
//
//	return 0;
//}

//��Ļ��������ʵ��
//#define //Ԥ����ָ��
//1. #define ���峣��
//2. #define �����

//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}

//#define MAX(X,Y)  ((X)>(Y)?(X):(Y))
//#define DOUBLE(X) ((X)+(X))

//#define SQUARE(X) ((X)*(X))

//
//int main()
//{
//	//int m = 3 * DOUBLE(5);
//	//int m = 3 * 5 + 5;
//	int m = SQUARE(1 + 2);
//	//int m = (1 + 2 * 1 + 2);
//	printf("m = %d\n", m);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int m = Max(a, b);
//	int m = MAX(a, b);
//	//int m = ((a) > (b) ? (a) : (b));
//	printf("m = %d\n", m);
//	return 0;
//}
//
//#define MAX 100
//
//int main()
//{
//	int a = MAX;
//	//MAX = 200;//ERR
//	printf("%d\n", a);
//	return 0;
//}


//�ṹ��
//ѧ��
//����+����
//
//struct Stu
//{
//	char name[30];
//	short age;
//}s2;
//
//int main()
//{
//	//struct Stu s1 = {"����", 25};
//	////s1.name = "����";//err
//	//strcpy(s1.name, "����");
//	//s1.age = 26;
//
//	//printf("%s\n", s1.name);
//	//printf("%d\n", s1.age);
//	struct Stu s1 = { "����", 25 };
//	struct Stu* ps = &s1;
//
//	//(*ps).age = 20;
//	//printf("%d\n", (*ps).age);
//	ps->age = 22;
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->name);
//
//	//.   �ṹ�����.��Ա��
//	//->  �ṹ��ָ��->��Ա��
//
//
//	return 0;
//}