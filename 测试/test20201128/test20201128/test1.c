#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_ROW 3
#define MAX_COL 3
//ROW�ᣬCOL��
//1.�������̲���ʼ��
void init(char chessboard[MAX_ROW][MAX_COL])
{
	/*��������ÿ��Ԫ�ض���Ϊ�ո�*/
	for (int row = 0; row < MAX_ROW; row++)
	{
		for (int col = 0; col < MAX_COL; col++)
		{
			chessboard[row][col] = " ";
		}
	}
}
void printChessBoard(char chessboard[MAX_ROW][MAX_COL])
{
	/*�����̴�ӡ����*/
	printf("---------------");
	for (int row = 0; row < MAX_ROW; row++)
	{
		printf("| %c |%c | %c | \n", chessboard[row][0],
			chessboard[row][1], chessboard[row][2]);
		printf("---------------");
	}
}
void game()
{
	//1.�������̲���ʼ��
	char chessboard[MAX_ROW][MAX_COL] = { 0 };
	init(chessboard);
	//2.��ӡ����
	printChessBoard(chessboard);
}

//3.������ӣ�ͨ�������������ķ�ʽ�����ӣ�
//4.�ж�ʤ��
//5.�������ӣ�������ӣ�
//6.�ж�ʤ��
//7.����ص��ڶ�������ִ��
int menu()
{
	printf("========\n");
	printf("1.��ʼ��Ϸ\n");
	printf("0.������Ϸ\n");
	printf("========\n");
	printf("���������ѡ��:");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
int main()
{
	srand(time(0));
	/*�˴�ͨ���򵥵Ĳ˵�����ҽ�����ʼһ����Ϸ*/
	// ��ѭ����һ������ѭ����û��break������ѭ��
	while (1)
	{
		int choice = menu();
		if (choice == 1)
		{
			game();
		}
		else if (choice == 0);
		{
			printf("goodbye!\n");
			break;
		}
		system("pause");
		return 0;
	}

//#include <stdio.h>
//#include <stdlib.h>
//
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//
//int main()
//{
//	int n = 0;
//	struct Node* list = NULL;
//	struct Node* tail = NULL;
//	//������
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 0; i<n; i++)
//	{
//		int data = 0;
//		scanf("%d", &data);
//		struct Node *n = (struct Node*)malloc(sizeof(struct Node));
//		n->data = data;
//		n->next = NULL;
//
//		if (list == NULL)
//		{
//			list = n;
//			tail = list;
//		}
//		else
//		{
//			tail->next = n;
//			tail = tail->next;
//		}
//	}
//
//
//	//ɾ�����
//	int del = 0;
//	scanf("%d", &del);
//	struct Node *cur = list;
//	struct Node *prev = NULL;
//	while (cur)
//	{
//		//�ҵ���
//		if (cur->data == del)
//		{
//			struct Node* pd = cur;
//			//��һ�����
//			if (cur == list)
//			{
//				list = list->next;
//				cur = list;
//			}
//			else
//			{
//				prev->next = cur->next;
//				cur = prev->next;
//			}
//			free(pd);
//		}
//		else//�Ҳ���
//		{
//			prev = cur;
//			cur = cur->next;
//		}
//	}
//	cur = list;
//	while (cur)
//	{
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//
//	return 0;
//}