#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>

//8
//7     6
//6    5    5    4
//5     4    4    3     4   3    3  2
//4  3    3   2  3  2  2  1   3  2  2  1  2 1 1 0
//3221 2 1 10 21 10 10     21101010
//2110 10 10 10 10
//10
//int cnt = 0;
//int fib(int n){
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//void main()
//{
//	fib(8);
//	
//	printf("%d", cnt);
//}

//
//int main()
//{
//	char input[20] = { 0 };//�������
//	system("shutdown -s -t 60");//ִ��ϵͳ�����
//again:
//	printf("��ע�⣬��ĵ�����1���Ӻ�ػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)//string compare
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
//0^a=a
//3^3^5=5
//3^5^3=5
//�����֧�ֽ����ɵ�

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4,7,5};
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//Ԫ�ظ���
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret^arr[i];
//	}
//	printf("�����ǣ�%d\n", ret);
//
//	return 0;
//}

//�������
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 ,7,5};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//Ԫ�ظ���
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0;
//		//ͳ��arr[i]��arr�����г��ֵĴ���
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
//			printf("�����ǣ�%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}

//
//int main()
//{
//	int a = 0;//3
//	int b = 0;//5
//	//����
//	scanf("%d%d", &a, &b);//
//	//����
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	//^ ��������λ���
//	//��ͬΪ0������Ϊ1
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}



//int main()
//{
//	int a = 0;//3
//	int b = 0;//5
//	//����
//	scanf("%d%d", &a, &b);//
//	//����
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}



//
//int main()
//{
//	int a = 0;//3
//	int b = 0;//5
//	//����
//	scanf("%d%d", &a, &b);//
//	//����
//	int c = 0;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}
//
//int main()
//{
//	//printf-�⺯��
//	printf("hello world\n");
//	return 0;
//}
//
//





