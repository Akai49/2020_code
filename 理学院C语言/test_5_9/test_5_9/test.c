#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//************************
//    How do you do!       
//************************

//
//int main()
//{
//	//��������
//	void print_star();
//	void print_message();
//
//	//��������
//	print_star();
//	print_message();
//	print_star();
//
//	return 0;
//}
//
//void print_star()
//{
//	printf("**************************\n");
//}
//void print_message()
//{
//	printf("     How do you do!        \n");
//}

//void - ��-��
//void Print(void)
//{
//	int a = 100;
//	int b = 200;
//
//	printf("%d\n", a + b);
//}
//
//int main()
//{
//	Print();//�����ĵ���
//
//	return 0;
//}
//
////����get_max����
////�β�-��ʽ����
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 1;
//	//int max = get_max(a, get_max(b, c));
//	//int max = get_max(get_max(a, b), c);
//	int max = get_max(a, b);
//
//	printf("%d\n", max);
//
//	//get_max(3, get_max(4, -4));
//	//int a = 10;
//	//int b = 20;
//	//int max = 0;
//	////ʵ��-ʵ�ʲ���
//	//max = get_max(a, b);//�����ĵ���
//
//	//printf("max = %d\n", max);
//
//	return 0;
//}



//����get_max����
//�β�-��ʽ����
//float get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	//ʵ�ο����ǳ��������������ʽ����������
//	//ֵ����
//	int max = get_max(a, b);
//
//	printf("%d\n", max);
//
//	return 0;
//}

//int main()
//{
//	int a = 3 + 4;//7
//	int b = get_max(3, 4);
//	return 0;
//}
//
void test()
{
	printf("hehe\n");
	if (1)
		return;
	printf("haha\n");
}
//int main()
//{
//	test();
//	return 0;
//}


//int Max(float x, float y)
//{
//	return ((x > y) ? x : y);
//}
//int main()
//{
//
//	int ret = Max(2.1, 3.4);
//	printf("%d\n", ret);
//
//	return 0;
//}

void print()
{
	printf("hehe\n");
}

int main()
{
	print();

	return 0;
}