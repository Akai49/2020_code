#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	//ҵ����
//	//C++ע��
//	/*C����ע��
//	int a = 10;
//	int b = 20;
//	*/
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	printf("�������,��Ҫ�ú�ѧϰ��\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	printf("�������\n");
//
//	while (line<=20000)
//	{
//		printf("�ô���:%d\n", line);
//		line++;
//	}
//	if (line > 20000)
//	{
//		printf("��offer\n");
//	}
//
//	return 0;
//}

//f(x, y) = x+y;
//
//int Add(int m, int n)
//{
//	int ret = m + n;
//	return ret;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	scanf("%d%d", &x, &y);
//	//sum = x + y;
//	sum = Add(x, y);
//	printf("sum = %d\n", sum);
//	//sum = a + b;
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
//
//int d;
//
//int main()
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//����
//	//int arr[10];
//	/*arr[4] = 40;
//	printf("%d\n", arr[4]);*/
//	/*int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}*/
//	//float farr[4] = {1.0,2.0,3.0,4.0};
//	//int d;
//	printf("%d\n", d);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 3;
//	int c = a%b;
//
//	//double c = a / 3.0;
//	printf("%d\n", c);
//	return 0;
//}
//
//int main()
//{
//	int a = 20;
//	//������λ
//	//4���ֽ� = 32bitλ
//	//00000000000000000000000000010100
//	//00000000000000000000000000001010 = 10
//	//
//	//00000000000000000000000000001111
//	//
//	//8421
//	int b = a >> 1;
//
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//int c = a&b;//& - ����2���ƣ�λ��
//	//int c = a^b;//^ - ��������λ���
//	int c = a | b;//| - ��������λ��
//	//011
//	//101
//	//111
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;//��ʼ��
//	a = 20;//��ֵ
//	//== 
//	a = a + 3;
//	a += 3;
//
//	a = a & 3;
//	a &= 3;
//
//	return 0;
//}


//int main()
//{
//	//int a = 3 + 5;
//	//��Ŀ������
//	int flag = 0;
//	printf("%d\n", flag);
//	printf("%d\n", !flag);
//
//	//0��ʾ�٣���0������
//	/*if (!flag)
//	{
//		printf("hehe\n");
//	}*/
//	return 0;
//}

//int main()
//{
//	int a = -10;
//	a = +10;
//	//&a;
//	return 0;
//}

//int main()
//{
//	int a = -10;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a);
//
//	printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof int);//err
//	return 0;
//}


//int main()
//{
//	//-1;
//	//10000000000000000000000000000001-ԭ��
//	//11111111111111111111111111111110-����
//	//11111111111111111111111111111111-����
//	//
//	int a = 0;
//	//000000000000000000000000000000000
//	//111111111111111111111111111111111
//	//111111111111111111111111111111110
//	//100000000000000000000000000000001
//	//
//	printf("%d\n", ~a);//-1
//	return 0;
//}

//
//int main()
//{
//	int i = 1;
//	int a = (++i) +(++i) + (++i);
//	printf("%d\n", a);
//
//	/*int i = 0;
//	for (i = 0; i < 10; ++i)
//	{
//
//	}*/
//	/*int a = 10;
//	int b = --a;
//	printf("a=%d b=%d\n", a, b);*/
//	/*int a = 10;
//	int b = a--;
//	printf("a=%d b=%d\n", a, b);*/
//
//	//int b = ++a;//ǰ��++,��++����ʹ��
//	//printf("a=%d b=%d\n", a, b);
//
//	//int b = (a++);//����++����ʹ�ã���++
//	//printf("a=%d b=%d\n", a, b);//11 10
//	//printf("%d\n", a++);
//	//printf("%d\n", a);
//
//	return 0;
//}


//int main()
//{
//	int a = (int)3.14;
//	//int a = int(3.14);///err
//	printf("a=%d\n", a);
//
//	return 0;
//}
//

//int main()
//{
//	int a = 1 & 2;
//	//01
//	//10
//	//00
//	int b = 1 && 2;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//���������� = ��Ŀ������

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	if (a > b)
//		max = a;
//	else
//		max = b;
//
//	max = (a > b) ? (a) : (b);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 2;
//	int c = 3;
//	//      //a=4   b=-1       c=1        c=-3
//	int d = (a = 4, b = a - 5, c = b + 2, c -= 4);
//	//���ű��ʽҪ�����������μ��㣬�����������ʽ�Ľ����
//	//���һ�����ʽ�Ľ��
//	printf("%d\n", d);
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	char arr[10] = "abcdef";
//	arr[3] = 'w';//�±����ò�����
//	int ret = Add(2, 3);//�������ò�����
//
//	return 0;
//}


//int main()
//{
//	//int char;//err
//	//int _2b;//��ĸ+����+�»��ߣ����������ֿ�ͷ
//	int a = 0;
//
//	return 0;
//}

//�����ⲿ����
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//int main()
//{
//	register int a = 10;//�����������a���ڼĴ�����
//	signed int a = 10;
//	a = -10;
//	unsigned int b = -1;
//
//	return 0;
//}

//typedef unsigned int u_int;
//
//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 100;
//
//	return 0;
//}
//
//void test(void)
//{
//	printf("hehe\n");
//	return;
//
//	printf("haha\n");
//}
//
//int main()
//{
//	test();
//
//	return 0;
//}
//static ���ξֲ�����-�ı��˾ֲ���������������
//
//static ����ȫ�ֱ��� - �ı��˱������������ԣ������������->�ڲ��������ԣ�Ч����������ı仯��
//static ���κ��� - �ı�ĺ�������������-�������������->�ڲ��������ԣ�
//
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i<10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}

//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}
//
