#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
//
//int main()
//{
//	float score1 = 0.0;
//	float score2 = 0.0;
//	float score3 = 0.0;
//	float score4 = 0.0;
//	float score5 = 0.0;
//	float average = 0.0;
//	int i = 0;
//	//����ɼ�
//	while (i < 50)
//	{
//		//����һ��ѧ���ĳɼ�
//		scanf("%f%f%f%f%f", &score1, &score2, &score3, &score4, &score5);
//		average = (score1 + score2 + score3 + score4 + score5) / 5;
//		printf("%7.2f\n", average);
//		i++;
//	}
//	
//
//	return 0;
//}

//int main()
//{
//	//while (���ʽ)
//	//	���;
//
//	while (1)
//	{
//		printf("hehe\n");
//		printf("haha\n");
//	}
//	
//	
//	return 0;
//}

//int main()
//{
//	int sum = 0;//
//	int i = 1;//�ֲ���������ʼ��Ĭ�������ֵ
//
//	while (i <= 3)
//	{
//		sum = sum + i;
//		i = i + 1;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d\n", i++);
//
//	} while (i <= 100);
//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	int sum = 0;
//
//	do
//	{
//		sum = sum + i;
//		i = i + 1;
//	} while (i <= 100);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
//
//int main()
//{
//	//int i = 1;
//	//int sum = 0;
//	//scanf("%d", &i);
//
//	//do
//	//{
//	//	sum = sum + i;
//	//	i = i + 1;
//	//} while (i <= 100);
//	//printf("sum = %d\n", sum);
//
//
//	int i = 1;
//	int sum = 0;
//	scanf("%d", &i);
//	while (i<=100)
//	{
//		sum = sum + i;
//		i = i + 1;
//	}
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
//
//
//int main()
//{
//	//int i = 1;//��ʼ��
//
//	//while (i <= 100)//�ж�
//	//{
//	//	printf("%d ", i);
//
//	//	i = i + 1;//ѭ�������ĵ���
//	//}
//
//	//int i = 1;
//
//	//for (; i <= 100; i++)
//	//{
//	//	printf("%d ", i);
//	//}
//
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			n++;
//			printf("%d:hehe\n", n);
//		}
//	}
//
//	return 0;
//}
//
//int main()
//{
//	//int i = 1;
//	//for (; i<=100; )
//	//{
//	//	printf("%d:hehe\n", i);
//	//	i++;
//	//}
//
//	/*for (;;)
//	{
//		printf("hehe\n");
//	}*/
//
//	//���ű��ʽ
//	//int a = 10;
//	//int b = 2;
//	//int c = 3;
//	//int d = (a=a+b, b=a-c, c=a+b+5);
//
//	//printf("%d\n", d);
//
//	//int i;
//	//int sum;
//
//	//for (sum=0,i=0; i <= 100; i++)
//	//{
//	//	sum = sum + i;
//	//}
//	//printf("%d\n", sum);
//
//	int i = 0;
//	int ch = 0;
//	//getchar - ��ȡһ���ַ�
//	for (; (ch = getchar()) != '\n'; )
//	{
//		putchar(ch);//��ӡһ���ַ�
//	}
//
//	return 0;
//}

//VS2019
int main()
{
	int i = 0;
	for (i = 0; i < 100; i++)
	{
		printf("%d ", i);
	}
	printf("\n\n");
	//C99 C++
	for (int i = 0; i < 100; i++)
	{
		printf("%d ", i);
	}
	return 0;
}
