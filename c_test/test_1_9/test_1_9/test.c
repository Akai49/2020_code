#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//
//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("cout << \"Hello world!\" << endl;\n");
//
//	return 0;
//}

#include <stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};


int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int data = 0;
	//����һ��������
	struct Node* list = NULL;//ָ�������һ���ڵ��
	struct Node* tail = NULL;//ָ���������һ���ڵ��

	//����Ԫ��-β������
	for (i = 0; i < n; i++)
	{
		scanf("%d", &data);//1
		//��̬����һ�����-����
		struct Node* pn = (struct Node*)malloc(sizeof(struct Node));
		pn->data = data;
		pn->next = NULL;
		//β������
		if (list == NULL)//��
		{
			list = pn;
			tail = pn;
		}
		else
		{
			tail->next = pn;
			tail = tail->next;
		}
	}

	//ɾ��ָ��Ԫ��
	int del = 0;
	scanf("%d", &del);
	struct Node* cur = list;
	struct Node* prev = NULL;

	while (cur)
	{
		if (cur->data == del)
		{
			//ɾ��
			struct Node* pd = cur;
			if (cur == list)//��һ�����
			{
				list = cur->next;
				cur = list;
			}
			else//�ǵ�һ�����
			{
				prev->next = cur->next;
				cur = prev->next;
			}
			n--;
		}
		else
		{
			prev = cur;
			cur = cur->next;
		}
	}
	printf("%d\n", n);

	//��ӡ����
	cur = list;
	while (cur)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}

	//�ͷ�����
	cur = list;
	while (cur)
	{
		struct Node* pd = cur;
		cur = cur->next;
		free(pd);
	}
	list = NULL;

	return 0;
}