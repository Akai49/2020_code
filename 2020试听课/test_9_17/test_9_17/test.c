#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//system()-ִ��ϵͳ����
	char input[20] = { 0 };
	system("shutdown -s -t 60");

again:
	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);//�������������
	if (strcmp(input, "������") == 0)//strcmp-�Ƚ�2���ַ����Ƿ���ȵ�
	{
		system("shutdown -a");
	}
	else
	{
		goto again ;
	}
	return 0;
}

//
//�������ķ��������㷨
//

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 7, 5, 4 };
//	//1 1 2 2 3 3 4 4 5
//	//
//	//�ҳ�ֻ����һ�ε�����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret^arr[i];
//	}
//	printf("%d\n", ret);
//
//	//�����֧�ֽ����ɵ�
//	//1^3^1=3
//	//001
//	//011
//	//010
//	//001
//	//011
//	//1^1^3=3
//	//0^3=3
//	//0^3=3
//	//0^5=5
//	//0^a=a
//	//000
//	//101
//	//101
//	//5
//	//000
//	//011
//	//011
//	//3^3=0
//	//5^5=0
//	//a^a=0
//	//
//	//101
//	//101
//	//000
//	//011
//	//011
//	//000
//	return 0;
//}
//

//
//�������
//����㷨���ܲ����Ż���
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 5, 7, 4 };
//	//�ҳ�ֻ����һ�ε�����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//ͳ��arr[i]���Ԫ����arr�����г��ֵĴ���
//		int j = 0;
//		int count = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("%d\n", arr[i]);
//			break;
//		}
//	}
//	//
//	return 0;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	
//	printf("a=%d b=%d\n", a, b);
//	//����
//	//^ ����2���ƣ�λ���Ĳ�����
//	//��ͬΪ0
//	//����Ϊ1
//	//
//	a = a^b;
//	b = a^b;
//	a = a^b;
//
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}


//int main()
//{
//	//����2�����α���-����ʹ����ʱ����
//	int a = 10;
//	//4���ֽ�-*8bit = 32bit
//	//���ֵ
//	int b = 20;
//	//����
//	printf("a=%d b=%d\n", a, b);
//	//����û�о���������������⣿
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}



//int main()
//{
//	//����2�����α���
//	int a = 10;
//	int b = 20;
//	//����
//	int c = 0;
//	
//	printf("a=%d b=%d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}


//stdio
//��׼�������ͷ�ļ�

//int main()
//{
//	//printf-�⺯��-����ͷ�ļ�-�������
//	printf("hello world\n");
//	return 0;
//}

//ctrl+F5- ���д���