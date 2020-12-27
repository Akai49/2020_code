#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DEFAULT_SZ 3

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_ADDR 20
#define MAX_TELE 12

#define MAX 1000

//��������

//һ���˵���Ϣ
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//ͨѶ¼-��̬�汾
//typedef struct Contact
//{
//	int sz;//��¼��ǰͨѶ¼��Ԫ�صĸ���
//	PeoInfo data[MAX];//�洢�ռ�
//}Contact, * pContact;//* 

//ͨѶ¼-��̬�汾
typedef struct Contact
{
	int sz;//��¼��ǰͨѶ¼��Ԫ�صĸ���
	int capacity;//��¼��ͨѶ¼��ǰ���������
	PeoInfo data[];//�洢�ռ�
}Contact, *pContact;//* 

//����������

//��ʼ��ͨѶ¼
void InitContact(Contact** pc);

//����һ���˵���Ϣ
void AddContact(Contact** ppc);

//��ӡͨѶ¼
void ShowContact(const Contact* pc);

void DelContact(Contact* pc);
//����ͨѶ¼
void DestoryContact(Contact** ppc);

//����ͨѶ¼��Ϣ���ļ�
void SaveContact(Contact* pc);

//�����ļ��е���Ϣ��ͨѶ¼
void LoadContact(Contact** ppc);