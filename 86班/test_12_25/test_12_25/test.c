#define _CRT_SECURE_NO_WARNINGS 1

//�����壨�����壩
#include <stdio.h>
//
//struct S
//{
//	char c;
//	int i;
//};
//
//union U
//{
//	char c;//1
//	int i; //4
//};
//
//int main()
//{
//	//struct S s;
//	union U u = {0};
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.i));
//		printf("%p\n", &(u.c));
//
//	return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	//����1-С��
//	//����0-���
//	return *(char*)&a;
//}
//
//int check_sys()
//{
//	union U
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//
//	return u.c;
//}
//
//int main()
//{
//	//��С��(�ֽ���)
//	//int a = 0x11223344;//
//	//�͵�ַ                  �ߵ�ַ
//	//44 33 22 11 - С��
//	//11 22 33 44 - ���
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//union Un
//{
//	char c[5];//5
//	int i;//4
//};

//union Un
//{
//	short c[7];//14
//	int i;//4
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//
//	return 0;
//}

#include <stdlib.h>

//��̬�ڴ濪��

//void test()
//{
//	//��̬����malloc
//	if (1)
//		return;
//	//�ͷ�-free
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int*p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//		//�ͷ�
//		free(p);
//		p = NULL;
//	}
//
//	return 0;
//}


//int main()
//{
//	int *p = (int*)calloc(INT_MAX, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//realloc
//
//int main()
//{
//	int*p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	//����-����
//	int*ptr = (int*)realloc(p, 80);
//
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	for (i = 10; i < 20; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//int main()
//{
//	int *p = (int*)malloc(20);
//	//��NULLָ��Ľ����ò���
//	*p = 20;
//	free(p);
//	p = NULL;
//	return 0;
//}
//
//int main()
//{
//	int *p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	//�Զ�̬�����ڴ��Խ�����
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	//�ͷŷǶ�̬���ٵĿռ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	int *p = (int*)malloc(40);
//	if (p == NULL)
//		return 1;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p++ = i;
//	}
//
//	//�ͷŶ�̬�ڴ濪�ٵ�һ����
//	free(p);//
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int *p = (int*)malloc(40);
//	if (p == NULL)
//		return 1;
//	
//	//��ͳһ�鶯̬���ٿռ�Ķ���ͷ�-err
//	free(p);//
//	p = NULL;
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	int *p = (int*)malloc(40);
//	if (p == NULL)
//		return 1;
//	int i = 0;
//	//ʹ��
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//	//���ͷ�
//	getchar();
//	return 0;
//}


//int main()
//{
//
//	while (1)
//	{
//		malloc(1000);
//	}
//	return 0;
//}


void GetMemory(char **p)
{
	*p = (char *)malloc(100);
}
void Test(void)
{
	char *str = NULL;
	GetMemory(&str);
	strcpy(str, "hello world");
	printf(str);
	free(str);
	str = NULL;
}
int main()
{
	Test();
	return 0;
}


