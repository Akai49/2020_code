#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

extern void Input();
extern void DelChar(char arr[], char ch);

int main()
{
	char ch = 0;
	char arr[200] = { 0 };
	Input(arr);
	printf("����Ҫɾ�����ַ�:>");
	scanf("%c", &ch);
	DelChar(arr, ch);
	printf("%s\n", arr);
	return 0;
}

//�������ⲿ����
//extern int Add(int a, int b);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}


//
//void test1()
//{
//	extern int a;
//	printf("%d\n", a);
//}
//
//void test2()
//{
//	extern int a;
//	printf("%d\n", a);
//}
//int main()
//{
//	test1();
//	test2();
//	return 0;
//}
//int a = 0;//����������

//extern int a; //����������
//
//int main()
//{
//	return 0;
//}
//
//int a = 0;

//�����ⲿ����
//extern int g_val;
//
//int main()
//{
//	printf("g_val = %d\n", g_val);
//	
//	return 0;
//}


//int a = 10;
//int b = 20;
//
//extern int Add();
//
//int main()
//{
//	//printf("g_val = %d\n", g_val);
//	int ret = Add();
//	printf("%d\n", ret);
//
//	return 0;
//}

//
//extern int a, b, c;
//
//int Max()
//{
//	int max = a;
//	if (max < b)
//	{
//		max = b;
//	}
//	if (max < c)
//	{
//		max = c;
//	}
//	return max;
//}
//
//int  main()
//{
//	scanf("%d%d%d", &a, &b, &c);
//	int max = Max();
//	printf("max = %d\n", max);
//	return 0;
//}
//int a, b, c;

//ϣ����չһ��g_val��ʹ�÷�Χ-������

//�����ⲿ����
//extern int g_val;
//
//void test()
//{
//	printf("test::g_val = %d\n", g_val);
//}
//int main()
//{
//	printf("main::g_val = %d\n", g_val);
//	test();
//	return 0;
//}
//
//int g_val = 20;
//...

//int g_val = 20;
//
//void test()
//{
//	printf("test::g_val = %d\n", g_val);
//}
//int main()
//{
//	printf("main::g_val = %d\n", g_val);
//	test();
//	return 0;
//}

//�Ĵ�������
//int main()
//{
//	int a = 10;//a ���洢���ڴ棨ջ������
//	register int b = 10;//����Ĵ�������-�����b����ڼĴ�����
//	//���ظ�����ʹ�õı�����������Է��ڼĴ�����
//
//	return 0;
//}
//int Fac(int n)
//{
//	static int ret = 1;//�����ظ�����test���������е�ֵ
//	ret *= n;
//	return ret;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		int ret = Fac(i);//��i�Ľ׳�
//		printf("%d\n", ret);
//	}
//	return 0;
//}

//
//int g_a;
//
//void test()
//{
//	static int a;//��̬�ֲ�����-Ĭ�ϳ�ʼ��0
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	//printf("%d\n", g_a);
//	//int num;//Ĭ�������ֵ
//	//printf("num = %d\n", num);
//	/*int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		test();
//	}*/
//	return 0;
//}

//int main()
//{
//	int a = 10;//�ֲ����� - �Զ�������auto��
//	printf("a = %d\n", a);
//
//	return 0;
//}