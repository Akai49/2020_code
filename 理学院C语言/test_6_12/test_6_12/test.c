#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//����ָ��
//	//int (*)(int, int) ����ָ�������
//	//int (*pf)(int, int) = Add;//��ַ
//
//	typedef int(*pf_t)(int, int);//pf_t������ָ������
//	pf_t pf; //����ָ��
//	return 0;
//}
//int main()
//{
//	//int [10]
//	//int parr_t[10];//parr_t��������
//	typedef int parr_t[10];//parr_t �µ��������͵������� �ȼ��� �� int [10]
//	int arr[10];
//	parr_t arr2;//arr2Ҳ��һ�����飬����10��Ԫ�أ�ÿ��Ԫ����int
//
//	/*int arr[10] = {0};
//	int arr2[10] = { 0 };
//	int a = 10;*/
//	return 0;
//}

//typedef //���Ͷ���

//typedef unsigned int uint;
//
//typedef struct Stu
//{
//	char name[20];
//	int age;
//} Stu;
//
//int main()
//{
//	//�޷�������a
//	unsigned int a = 10;
//	uint b = 20;
//
//	struct Stu s;
//	Stu s2;
//
//	return 0;
//}

//ö��-- һһ�о�
//�Ա��У�Ů������
//���ڣ�1,2,3,4,5,6,7
//��ԭɫ��Red Green Blue
//
//
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//enum Weekday
//{
//	mon,
//	tue,
//	wed,
//	tru = 9,
//	fri,
//	sat,
//	sun
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	enum Sex s2 = FEMALE;
//	printf("%d %d %d %d %d %d %d\n", mon,tue,wed,tru,fri,sat,sun);
//	if (s == FEMALE)
//	{
//
//	}
//	return 0;
//}
//

//
//struct PeoInfo
//{
//	char name[20];
//	int num;
//	char sex;
//	char job;
//	//������
//	union
//	{
//		int class;
//		char position[15];
//	}category;//����
//};
//
//int main()
//{
//	struct PeoInfo p[2];//ѧ������ʦ
//	int i = 0;
//	for (i = 0; i < 2; i++)
//	{
//		printf("�����룺��ţ����֣��Ա�ְҵ:>");
//		scanf("%d %s %c %c", &(p[i].num), p[i].name, &(p[i].sex), &(p[i].job));
//		if (p[i].job == 's')
//		{
//			printf("������༶:>");
//			scanf("%d", &(p[i].category.class));
//		}
//		else if (p[i].job == 't')
//		{
//			printf("������ְ��:>");
//			scanf("%s", p[i].category.position);
//		}
//	}
//	//��ӡ����
//	for (i = 0; i < 2; i++)
//	{
//		if (p[i].job == 's')
//		{
//			printf("%10s\t%5d\t%3c\t%3c\t%5d\n", p[i].name, p[i].num, p[i].sex, p[i].job, p[i].category.class);
//		}
//		else if (p[i].job == 't')
//		{
//			printf("%10s\t%5d\t%3c\t%3c\t%5s\n", p[i].name, p[i].num, p[i].sex, p[i].job, p[i].category.position);
//		}
//	}
//
//	return 0;
//}
//

//
//struct S
//{
//	char c;
//	int i;
//};
//����������-������
//union U
//{
//	char c;//1
//	int i;//4
//};
//
//int main()
//{
//	union U u = {.i = 100};
//	
//	//u.c = 'w';
//	//u.i = 100;
//	//printf("%d\n", sizeof(u));
//	//printf("%p\n", &u);
//	//printf("%p\n", &(u.c));
//	//printf("%p\n", &(u.i));
//
//	return 0;
//}

//
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//
//
//void push_back(struct Node** ph, int d)
//{
//	//��̬����һ�����
//	struct Node* pnew = (struct Node*)malloc(sizeof(struct Node));
//	pnew->data = d;
//	pnew->next = NULL;
//	struct Node* tail = *ph;
//
//	if (*ph == NULL)
//	{
//		//������
//		*ph = pnew;
//	}
//	else
//	{
//		//�ǿ�����
//		while (tail->next)
//		{
//			tail = tail->next;
//		}
//		tail->next = pnew;
//	}
//}
//
//void show_list(struct Node* h)
//{
//	while (h)
//	{
//		printf("%d->", h->data);
//		h = h->next;
//	}
//	printf("over\n");
//}
//
//void destory_list(struct Node** ph)
//{
//	if (*ph == NULL)
//	{
//		//��������Ҫ�ͷ�
//	}
//	else
//	{
//		struct Node* cur = *ph;
//		struct Node* next = cur->next;
//		while (cur != NULL)
//		{
//			free(cur);
//			cur = next;
//			if (cur == NULL)
//			{
//				break;
//			}
//			next = cur->next;
//		}
//		*ph = NULL;
//	}
//}
//int main()
//{
//	//������洢0-9��10������
//	//��̬����
//	//����ͷָ��
//	struct Node* head = NULL;
//	//�������в���0-9��Ԫ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		push_back(&head, i);//β������һ��Ԫ��
//	}
//	show_list(head);
//	//�ͷ�
//	destory_list(&head);
//	show_list(head);
//
//	return 0;
//}
//
