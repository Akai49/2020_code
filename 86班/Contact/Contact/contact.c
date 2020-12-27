#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void InitContact(Contact** ppc)
{
	*ppc = (Contact* )malloc(sizeof(Contact)+DEFAULT_SZ*sizeof(PeoInfo));
	if (*ppc == NULL)
	{
		return;
	}
	(*ppc)->sz = 0;
	(*ppc)->capacity = DEFAULT_SZ;
	memset((*ppc)->data, 0, (*ppc)->capacity*sizeof(PeoInfo));
	//���ļ��е���Ϣ���ص�ͨѶ¼��
	LoadContact(ppc);
}
//
//void AddContact(Contact* pc)
//{
//	if (pc->sz == MAX)
//	{
//		printf("ͨѶ¼����\n");
//	}
//	else
//	{
//		printf("����������:>");
//		scanf("%s", pc->data[pc->sz].name);
//		printf("����������:>");
//		scanf("%d", &(pc->data[pc->sz].age));
//		printf("�������Ա�:>");
//		scanf("%s", pc->data[pc->sz].sex);
//		printf("������绰:>");
//		scanf("%s", pc->data[pc->sz].tele);
//		printf("�������ַ:>");
//		scanf("%s", pc->data[pc->sz].addr);
//		//
//		pc->sz++;
//		printf("���ӳɹ�\n");
//	}
//}


void CheckCapacity(Contact** pc)
{
	if ((*pc)->sz == (*pc)->capacity)
	{
		//��������
		Contact* ptr = (Contact*)realloc((*pc), sizeof(Contact)+
			((*pc)->capacity + 2)*sizeof(PeoInfo));
		if (ptr == NULL)
		{
			return;
		}
		else
		{
			(*pc) = ptr;
			(*pc)->capacity += 2;
			printf("���ݳɹ�\n");
		}
	}
	
}
void AddContact(Contact** ppc)
{
	CheckCapacity(ppc);
	printf("����������:>");
	scanf("%s", (*ppc)->data[(*ppc)->sz].name);
	printf("����������:>");
	scanf("%d", &((*ppc)->data[(*ppc)->sz].age));
	printf("�������Ա�:>");
	scanf("%s", (*ppc)->data[(*ppc)->sz].sex);
	printf("������绰:>");
	scanf("%s", (*ppc)->data[(*ppc)->sz].tele);
	printf("�������ַ:>");
	scanf("%s", (*ppc)->data[(*ppc)->sz].addr);
	//
	(*ppc)->sz++;
	printf("���ӳɹ�\n");
}



void ShowContact(const Contact* pc)
{
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-15s\n", 
		"name", "age", "sex", "tele", "addr");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-15s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

int FindPeoByName(Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;//�Ҳ���
}


void DelContact(Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ�����ɾ��\n");
	}
	else
	{
		//ɾ��
		char name[MAX_NAME] = {0};
		//1. ����
		printf("������Ҫɾ���˵�����:>");
		scanf("%s", name);
		int pos = FindPeoByName(pc, name);
		if (-1 == pos)
		{
			printf("ɾ�����˲�����\n");
		}
		else
		{
			//2. ɾ��
			int j = 0;
			for (j = pos; j < pc->sz-1; j++)
			{
				pc->data[j] = pc->data[j + 1];
			}
			pc->sz--;
			printf("ɾ���ɹ�\n");
		}
	}
}

void DestoryContact(Contact** ppc)
{
	free(*ppc);
	*ppc = NULL;
}


//����ͨѶ¼��Ϣ���ļ�
void SaveContact(Contact* pc)
{
	FILE* pf = fopen("contact.dat", "wb");
	if (pf == NULL)
	{
		perror("open file for writting");
		return;
	}
	//д�ļ�
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite(pc->data+i, sizeof(PeoInfo), 1, pf);
	}
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
}

//�����ļ��е���Ϣ��ͨѶ¼
void LoadContact(Contact** ppc)
{
	FILE* pf = fopen("contact.dat", "rb");
	if (pf == NULL)
	{
		perror("open file for reading");
		return;
	}
	//���ļ�
	PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(PeoInfo), 1, pf))
	{
		CheckCapacity(ppc);
		(*ppc)->data[(*ppc)->sz] = tmp;
		(*ppc)->sz++;
	}
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
}

