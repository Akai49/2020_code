#define _CRT_SECURE_NO_WARNINGS 1

//void test(int arr[10])
//{}
//void test2(int* p)
//{}
//void test3(int* arr[20])
//{}
//void test4(int** p)
//{}
//
//int main()
//{
//	int arr[10] = {0};
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr);
//	test3(arr2);
//	test4(arr2);
//
//	return 0;
//}
//
//void test1(int arr[3][5])
//{}
//
//void test2(int arr[][5])
//{}
//
//void test3(int arr[][5])
//{}
//
//void test4(int* p)//err
//{}
//void test5(int** p)//err
//{}
//void test6(int(*p)[5])//ok
//{}
//
//void test7(int* p)
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test1(arr);
//	test2(arr);
//	test3(arr);
//	test4(arr);
//	test5(arr);//��һ�еĵ�ַ-һά����ĵ�ַ
//	test6(arr);
//	test7(arr);
//
//	return 0;
//}
//
//void test(int* q)
//{}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	//test(p);//p��һ��ָ��
//	int a = 10;
//	test(p);
//	test(arr);
//	test(&a);
//
//	return 0;
//}


#include <stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
////int my_strlen(const char* str)
////{}
//
//int main()
//{
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	//int (*pf)(int x, int y) = &Add;//pf�Ǻ���ָ�����
//	int(*pf)(int x, int y) = Add;//pf�Ǻ���ָ�����
//	//int (*p2)(const char*) = my_strlen;
//	
//	//ͨ��pfֱ�ӵ��ú���Add
//	int ret = pf(2, 3);
//	//int ret = Add(2, 3);
//	printf("%d\n", ret);
//
//	return 0;
//}
//




//
//typedef unsigned int u_int;
//
//typedef void(*pf_t)(int);
//
//int main()
//{
//	//
//	//����һ�κ�������
//	//����0��ַ�����޲����޷���ֵ�ĺ���
//	//
//	//(*(void(*)())0)();
//	//void(*   signal(int, void(*)(int))    )(int);
//
//	pf_t signal(int, pf_t);
//
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	int (*p1)(int, int) = Add;
//	int (*p2)(int, int) = Sub;
//	//��ź���ָ�������
//	//����ָ������
//	int(*pArr[4])(int, int) = {Add, Sub};//pArr���Ǻ���ָ������
//
//	//int arr[10];
//	return 0;
//}


//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("*************************\n");
//	printf("***** 1.add    2.sub  ***\n");
//	printf("***** 3.mul    4.div  ***\n");
//	printf("*****      0.exit     ***\n");
//	printf("*************************\n");
//}
//
//void calc(int (*p)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("������2��������:>");
//	scanf("%d%d", &x, &y);
//	ret = p(x, y);
//	printf("ret = %d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//	
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("*************************\n");
//	printf("***** 1.add    2.sub  ***\n");
//	printf("***** 3.mul    4.div  ***\n");
//	printf("*****      0.exit     ***\n");
//	printf("*************************\n");
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//
//	//ת�Ʊ�-��C��ָ�롷
//	int(*pfArr[5])(int, int) = {0, Add, Sub, Mul, Div};
//
//	do
//	{
//		int ret = 0;
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("������2��������:>");
//			scanf("%d%d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//	} while (input);
//	return 0;
//}
////
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int (*pf)(int, int) = Add;//����ָ��
//	int(*pfArr[4])(int, int);//����ָ�������
//	int(* (*ppfArr)[4])(int, int) = &pfArr;//ָ����ָ�������ָ��
//
//	return 0;
//}
//



//int arr[10];
////p��һ��ָ�����������ָ��
//int (*p)[10] = &arr;
//
//
//int* arr[10];
////p��һ��ָ������ָ�������ָ��
//int* (*p)[10] = &arr;






#include <stdio.h>

//int main()
//{
//	//clang -C99
//	int n = 0;
//	//C99-�䳤����
//	//��̬�ڴ濪��
//	scanf("%d", &n);
//	int arr[n];
//
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		arr[i] = i;
//	}
//	printf("%d\n", arr[5]);
//	return 0;
//}
//


void bubble_sort(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
//qsort();

//void qsort(
//	void *base, 
//	size_t num, 
//	size_t width, 
//	int(*cmp)(const void *e1, const void *e2)
//	);

//�Լ�ʵ��-�Ƚ�2������

#include <stdlib.h>

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e2 - *(int*)e1;
}

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void test1()
{
	int arr[] = { 3, 1, 5, 2, 7, 4, 8, 6, 9, 0 };

	int sz = sizeof(arr) / sizeof(arr[0]);
	//bubble_sort(arr, sz);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print(arr, sz);
}

struct Stu
{
	char name[20];
	int age;
};

int cmp_stu_by_name(const void* e1, const void*e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

int cmp_stu_by_age(const void* e1, const void*e2)
{
	return (((struct Stu*)e1)->age-((struct Stu*)e2)->age);
}

void test2()
{
	struct Stu arr[3] = { {"zhangsan", 20}, {"lisi", 30}, {"wangwu", 8} };
	qsort(arr, 3, sizeof(arr[0]), cmp_stu_by_name);
}
void test3()
{
	struct Stu arr[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 8 } };
	qsort(arr, 3, sizeof(arr[0]), cmp_stu_by_age);
}
int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}








