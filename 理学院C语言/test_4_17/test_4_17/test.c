#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	while (i < 10)//0 1 2 3 4 5 6 7 8 9 10
//	{
//		printf("%d\n", i);
//		i++;
//	}
//
//	return 0;
//}

#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//i=123
//n = 0
//123/10 = 12 ->1 
//12/10  - 1  ->1
//1/10   - 0
#include <math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 1;//��ʾλ��
//		//�ж�i�Ƿ�Ϊˮ�ɻ���������ǣ���ӡ��������ǣ�����ӡ
//		//1. ����i��λ��-n
//		int tmp = i;
//		int sum = 0;
//		while (tmp / 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		//2. ����i��ÿһλ��n�η�֮�� - sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += (int)pow(tmp%10, n);//pow(a,b)�������a��b�η�
//			tmp /= 10;
//		}
//		//3. �Ƚ�sum �� i
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//
//С��Ϸ-��������Ϸ
//

//�����������һ������
//�����������
//a. �´��ˣ����Ը����㣬�´���
//b. ��С�ˣ����Ը����㣬��С��
//c. �¶��ˣ����Ը����㣬��ϲ�㣬�¶��ˣ�

#include <stdlib.h>
#include <time.h>
//
//void menu()
//{
//	printf("****************************\n");
//	printf("******   1. play     *******\n");
//	printf("******   0. exit     *******\n");
//	printf("****************************\n");
//}
//
////RAND_MAX == 32767
////%
////5%2 = 2 ... 1
////5/2 = 2 ... 1
//void game()
//{
//	//�����ֵĹ���
//	//1. �����������һ������(1-100)
//	//rand()
//	
//	int ret = rand()%100+1;//0-99 + 1 == 1-->100
//	int guess = 0;
//	//printf("%d\n", ret);
//	//2. ������
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess>ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	//�����������У�srand������һ�ξͿ�����
//	srand((unsigned int)time(NULL));//������������������
//
//	do
//	{
//		menu();
//		printf("������:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//���ú���
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}
//

int main()
{
	int a1 = 1;
	int a2 = 2;
	int a3 = 3;
	int n = 10;
	//....
	//��ʶ�������֣���ĸ/����/�»�����ɣ���������ĸ/�»��߿�ͷ
	int a[10];//����Ķ���
	//int 2b[20];//err
	int b[5+5];

	return 0;
}