#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

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

//ͨѶ¼
typedef struct Contact
{
	PeoInfo data[MAX];//�洢�ռ�
	int sz;//��¼��ǰͨѶ¼��Ԫ�صĸ���
}Contact, * pContact;//* 

//����������

//��ʼ��ͨѶ¼
void InitContact(Contact* pc);

//����һ���˵���Ϣ
void AddContact(Contact* pc);

//��ӡͨѶ¼
void ShowContact(const Contact* pc);

void DelContact(Contact* pc);



