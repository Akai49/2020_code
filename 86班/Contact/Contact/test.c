#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//
//1000���˵���Ϣ
//
//ÿ���˵���Ϣ������+�绰+����+�Ա�+��ַ
//���ӣ�ɾ�����޸ģ����ң�����
//

enum Option
{
	EXIT,//0
	ADD,//1
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	CLS,
	SAVE
};
void menu()
{
	printf("*****************************\n");
	printf("*** 1. add      2. del   ****\n");
	printf("*** 3. search   4. modify ***\n");
	printf("*** 5. show     6. sort   ***\n");
	printf("*** 0. exit     7. cls    ***\n");
	printf("*** 8. save               ***\n"); 
	printf("*****************************\n");
}

void test()
{
	int input = 0;
	//������ͨѶ¼
	Contact con = {0};
	InitContact(&con);//��ʼ��ͨѶ¼
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case EXIT:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
