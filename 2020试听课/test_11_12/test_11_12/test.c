#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//������-��������
//int main()
//{
//	//��ӡ����-�⺯��
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//
//
//	return 0;
//}



//int main()
//{
//	int a = 0;//3
//	int b = 0;//5
//	scanf("%d%d", &a, &b);
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
//	int a = 0;//3
//	int b = 0;//5
//	scanf("%d%d", &a, &b);
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

//
//int main()
//{
//	int a = 0;//3
//	int b = 0;//5
//	scanf("%d%d", &a, &b);
//	//����
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	//^ ��� - ����2���ƣ�λ���
//	//��ͬΪ0������Ϊ1
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}
//


//�������
//int main()
//{
//	int arr[] = { 8, 2, 3, 4, 5, 8, 2, 3, 4,7,5};
//	int sz = sizeof(arr) / sizeof(arr[0]);//���������Ԫ�ظ���
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0;
//		//ͳ��һ��arr[i]��arr�����г��ֵĴ���
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

//3^3=0
//a^a=0
//0^a=a
//3^3^5=5
//3^5^3=5
//����������֧�ֽ����ɵ�

//int main()
//{
//	int arr[] = { 8, 2, 3, 4, 5, 8, 2, 3, 4,7,5};
//	int sz = sizeof(arr) / sizeof(arr[0]);//���������Ԫ�ظ���
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("�����ǣ�%d\n", ret);
//	return 0;
//}

#include <string.h>
#include <stdlib.h>

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");//ִ��ϵͳ�����
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);//
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//
//
//
//
//

