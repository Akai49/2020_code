#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	char arr1[] = { 'a', 'b', 'c' };
//	char arr2[] = "abc";
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	//�ַ���
//	//һ���ַ���'\0' �ǽ�����־
//
//	return 0;
//}

#include <string.h>

//���Ȳ������Ƶ��ַ�����������
//strcat
//strcpy
//strcmp - �ַ����Ƚ�

//���������Ƶ��ַ�����������
//strncat
//strncpy
//strncmp

//int main()
//{
//	char arr1[20] = "XXXXXXXXX";
//	//char arr2[] = "abcdef";
//	char arr2[] = { 'a', 'b', 'c'};
//
//	//strcpy(arr1, arr2);//string copy
//	strncpy(arr1, arr2, 3);
//
//	printf("%s\n", arr1);
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abzdef";
//	char arr2[] = "abzdef";
//	//arr1 �� arr2����
//	//��C��������������������Ԫ�صĵ�ַ
//	//
//	//int ret = strcmp(arr1, arr2);
//	//printf("ret = %d\n", ret);
//	if (strcmp(arr1, arr2) > 0)
//	{
//		printf("arr1 == arr2\n");
//	}
//	return 0;
//}

//int main()
//{
//	//string length - ���ַ������ȵ�һ������
//	//char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };//.....
//
//	int len = strlen(arr2);//���ֵ
//
//	printf("%d\n", len);//?
//
//	return 0;
//}

//size_t ---> unsigned int
//
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "abcdef";
//
//	if (strlen(arr1) - strlen(arr2) > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	char arr[] = "AbCd";
//	//_strlwr(arr);//�ַ����еĴ�С��ĸת����Сд
//	_strupr(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}
//
//int main()
//{
//	char arr[1024] = { 0 };
//	gets(arr);//i am a student\0
//	int word = 0;//������ʶ�Ƿ������һ�����ʣ����word��1����ʾ�ǵ��ʣ�word��0����ʾ���ǵ���
//	int num = 0;//�����������ַ����е��ʵĸ���
//	int i = 0;
//	for (i = 0; arr[i] != '\0'; i++)
//	{
//		if (arr[i] == ' ')
//		{
//			word = 0;
//		}
//		else if (word == 0)
//		{
//			word = 1;
//			num++;
//		}
//	}
//	//printf("%s\n", arr);
//	printf("num = %d\n", num);
//
//	return 0;
//}
//
//int main()
//{
//	char arr[3][100] = {0};
//	int i = 0;
//	char max_string[100] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		gets(arr[i]);
//	}
//	//1. �õ�һ�к͵ڶ��бȽ��ҳ��ϴ��һ�У������max_string
//	if (strcmp(arr[0], arr[1])>0)
//	{
//		strcpy(max_string, arr[0]);
//	}
//	else
//	{
//		strcpy(max_string, arr[1]);
//	}
//	//2. ��max_string �͵����бȽϣ��ҳ��ϴ�Ĵ����max_string
//	if (strcmp(max_string, arr[2]) < 0)
//	{
//		strcpy(max_string, arr[2]);
//	}
//
//	printf("%s\n", max_string);
//
//	return 0;
//}

//��Ŀ���ƣ�
//����ˮ����
//��Ŀ���ݣ�
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���

//
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);//20
//
//	//total = money;
//	//empty =  money;
//	////�û�
//	//while (empty>=2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2+empty%2;
//	//}
//
//	if (money > 0)
//		total = money * 2 - 1;
//	else
//		total = 0;
//
//	printf("total = %d\n", total);
//
//	return 0;
//}