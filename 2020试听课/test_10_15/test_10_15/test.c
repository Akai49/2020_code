#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdio.h>
#include<math.h>
int Sad(int i)
{
	int k = 0;
	int sum = 0;
	int j = 0;
	for (k = 0; k < 5; k++)
	{
		j += i * pow(10, k);
		sum += j;
	}
	return sum;
}
int main()
{
	int a = 0;
	int c = 0;
	printf("������aֵ��\n");
	scanf("%d", &a);
	c = Sad(a);
	printf("Sn=%d", c);
	return 0;
}
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//struct Node
//{
//	int number;//����
//	int id;//���
//	struct Node* next;
//};
//
//void init(struct Node** L)
//{
//	(*L) = (struct Node*)malloc(sizeof(struct Node));
//	(*L)->next = (*L);
//}
//void create(struct Node**L, int num)
//{
//	int i = 0, n = 0;
//	struct Node* p, *temp;
//	p = (*L);
//	for (i = 1; i <= num; i++)
//	{
//		temp = (struct Node*)malloc(sizeof(struct Node));
//		scanf("%d", &n);
//		temp->number = n;
//		temp->id = i;
//		p->next = temp;
//		p = temp;
//	}
//	p->next = *L;
//}
//void print(struct Node*L)
//{
//	struct Node* p;
//	p = L->next;
//	while (p != L)
//	{
//		printf(" %d   ����%d\n ", p->id, p->number);
//		p = p->next;
//	}
//}
//void joseph(int m, int n, struct Node**L)//mΪ������nΪ��ʼ������
//{
//	struct Node* p = (*L);
//	struct Node* deltemp = NULL;
//	int i = 1, j = 1;
//	for (i = 1; i < m; i++)
//	{
//		for (j = 1; j < n - 1; j++)//p��deltempǰ���һ��ָ��
//		{
//			p = p->next;
//		}
//		deltemp = p->next;//�ҵ�Ҫɾ���Ľ��
//		printf("��%d���˳���,������Ϊ%d\n", deltemp->id, deltemp->number);
//		n = deltemp->number;//��Ҫɾ�����������n
//		p->next = p->next->next;//ɾ��
//		free(deltemp);
//	}
//}
//int main()
//{
//	struct Node* L;
//	init(&L);
//	create(&L, 7);
//	print(L);
//	joseph(20, 7, &L);
//	return 0;
//}
//3^3=0
//5^5=0
//a^a=0
//0^3=3
//0^5=5
//0^a=a
//3^3^5 = 5
//3^5^3 = 5
//���֧�ֽ�����

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 ,7,5};
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("�����ǣ�%d\n", ret);
//
//	return 0;
//}


//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0;//������
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

//int main()
//{
//	int a = 0;//3
//	int b = 0;//5
//	scanf("%d%d", &a, &b);
//	//����
//	//^ - ���������ƣ�λ���
//	//��ͬΪ0������Ϊ1
//	printf("a=%d b=%d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;//3
//	int b = 0;//5
//	scanf("%d%d", &a, &b);
//	//����
//	printf("a=%d b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;//3
//	int b = 0;//5
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	//����
//	printf("a=%d b=%d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	//���-�⺯��
//	printf("hello world\n");
//
//	return 0;
//}