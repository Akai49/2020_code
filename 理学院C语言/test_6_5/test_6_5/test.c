#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//����ѧ������
//����
//����
//��ַ

//struct �ṹ��ؼ�
//����ѧ������

//struct Student
//{};

//������������
struct Date
{
	int year;
	int month;
	int day;
};

struct Stu
{
	char name[20];
	int age;
	char addr[30];
	struct Date birthday;
};

struct Book
{
	char id[20];
	char name[15];
	float price;
};

int main()
{
	struct Stu s;

	//int float double
	//ѧ��
	//��
	//int age;//
	//����һ��ѧ��������

	return 0;
}

//��̬�ڴ����
//��������
//�����ͷ�
//#include <stdlib.h>
//
//void check(int*p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (*(p + i) < 60)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//}
////<C��ָ��>
////<c������Ƚ���>
//
//int main()
//{
//	//��ųɼ�������
//	//5�����εĿռ�
//	int*p = (int*)malloc(5*sizeof(int));
//	if (p == NULL)
//	{
//		printf("�ռ俪��ʧ��\n");
//		return -1;
//	}
//	//����5��ѧ���ĳɼ�
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", p + i);
//	}
//	//����ҳ�60�����µĳɼ�
//	check(p, 5);
//	//�ͷ�
//	free(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	char c = 'w';
//	float f = 3.14f;
//
//	/*void* p = &a;
//	p + 1;
//	*p = 20;
//	p = &f;*/
//
//	//int*p = &a;
//	//*p = 20;
//	//p = &f;
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int* pi = &a;
//	char* pc = NULL;
//
//	void* pv;//������ָ��
//
//	return 0;
//}
//
//int main()
//{
//	//����һ��������40���ֽڵĿռ�
//	int*p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("����ʧ��\n");
//		return -1;
//	}
//	//��ӡ���ٺõĿռ�����
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//���ֿռ䲻��ʹ����
//	//������ռ��С
//	int*ptr = (int*)realloc(p, 15*sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	//��һ����ʧ����
//
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	//����10�����εĿռ�
//	int arr[10] = { 0 };//ջ�� 10*sizeof(int) = 40
//	//��̬����-����
//	int* p = (int*)malloc(40);//���������40���ֽڵĿռ�
//	//����ʧ�ܷ���NULLָ��
//	if (p == NULL)
//	{
//		printf("��̬�ڴ�����ʧ��\n");
//		return -1;
//	}
//	//ʹ�ö�̬����Ŀռ���
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//�ͷſռ�
//	free(p);
//
//	//��̬�ڴ濪��-�ڴ�й©
//
//	p = NULL;
//
//	return 0;
//}


//main�����Ĳ���
//�����в���

//int main()
//{
//	int a = 10;
//	int arr[10] = { 0 };
//
//	return 0;
//}

//envp
//��������
//
//int main(int argc, char* argv[], char*envp[])
//{
//	int i = 0;
//	while (envp[i] != NULL)
//	{
//		printf("%s\n", envp[i]);
//		i++;
//	}
//	return 0;
//}

//int main(int argc, char* argv[], char*envp[])
//{
//	int i = 0;
//	while (argv[i] != NULL)
//	{
//		printf("%s\n", argv[i]);
//		i++;
//	}
//	/*for (i = 0; i < argc; i++)
//	{
//		printf("%s\n", argv[i]);
//	}*/
//	getchar();
//	return 0;
//}

//main�������в�����
//������ʲô�أ�