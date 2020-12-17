#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};

int main()
{
	int n = 0;
	struct Node* list = NULL;
	struct Node* tail = NULL;
	//������
	int i = 0;
	scanf("%d", &n);
	for (i = 0; i<n; i++)
	{
		int data = 0;
		scanf("%d", &data);
		struct Node *n = (struct Node*)malloc(sizeof(struct Node));
		n->data = data;
		n->next = NULL;

		if (list == NULL)
		{
			list = n;
			tail = list;
		}
		else
		{
			tail->next = n;
			tail = tail->next;
		}
	}


	//ɾ�����
	int del = 0;
	scanf("%d", &del);
	struct Node *cur = list;
	struct Node *prev = NULL;
	while (cur)
	{
		//�ҵ���
		if (cur->data == del)
		{
			struct Node* pd = cur;
			//��һ�����
			if (cur == list)
			{
				list = list->next;
				cur = list;
			}
			else
			{
				prev->next = cur->next;
				cur = prev->next;
			}
			free(pd);
		}
		else//�Ҳ���
		{
			prev = cur;
			cur = cur->next;
		}
	}
	cur = list;
	while (cur)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}

	return 0;
}