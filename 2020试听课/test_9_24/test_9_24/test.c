#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>//ststem
#include <string.h>//strcmp




//
//int main()
//{
//	char input[20] = { 0 };//�洢����
//	//�ػ�
//	//system() - ר������ִ��ϵͳ�����
//	system("shutdown -s -t 60");//�ػ�
//
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹؽ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);//%s - �ַ���
//	if (strcmp(input, "������") == 0)//�ж�input�зŵ��ǲ��ǡ������� - strcmp -string compare
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//3^3=0
//5^5=0
//a^a=0
//0^5=5
//0^3=3
//0^a=a
//3^5^3 = 5
//3^3^5 = 5
//��������㽻���ɵ�
//011
//101
//110
//011
//101
//000
//011
//011
//000
//101
//101

//101
//101
//000
//011
//011
//000
//int main()
//{
//	// 1 ^1 ^2 ^2 ^3 ^3 ^4 ^4 ^5 = 5
//	//
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 5,7,4 };
//	//�ҳ�����
//	//�������
//	int i = 0;
//	int ret = 0;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//���������Ԫ�ظ���
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret^arr[i];
//	}
//	printf("������%d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 7, 5, 4 };
//	//�ҳ�����
//	//�������
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//���������Ԫ�ظ���
//
//	for (i = 0; i <sz; i++)
//	{
//		//ͳ��arr[i]��arr�����г����˼���
//		int count = 0;//������
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("������%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	//����2�����α���
//	int a = 3;
//	int b = 5;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	
//	a = a^b;
//	b = a^b;
//	a = a^b;
//
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	//����2�����α���
//	int a = 3;
//	int b = 5;
//	//INT_MAX; 2147483647
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	//���������
//	//int - 4���ֽ� - 32bitλ -���ֵ
//
//	a = a + b;//a-��, b����ԭ��b
//	b = a - b;//b�õ�ԭ����a
//	a = a - b;//a�õ�����ԭ����b
//	
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}


//int main()
//{
//	//����2�����α���
//	int a = 3;
//	int b = 5;
//	int c = 0;//��ƿ
//
//	printf("����ǰ��a=%d b=%d\n", a, b);
//
//	c = a;//1
//	a = b;//2
//	b = c;//3
//
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	//��ӡ����-����ͷ�ļ���stdio.h
//	printf("hello world\n");
//
//	return 0;
//}