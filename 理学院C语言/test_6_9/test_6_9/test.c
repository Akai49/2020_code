#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

struct Stu
{
	//����
	char name[20];
	float score;
	//ָ��
	struct Stu* next;
};

int main()
{
	struct Stu* head = NULL;
	struct Stu* cur = NULL;
	struct Stu s1 = { "����", 95.5 };
	struct Stu s2 = { "����", 88.5 };
	struct Stu s3 = { "����", 90.0 };

	s1.next = &s2;
	s2.next = &s3;
	s3.next = NULL;
	head = &s1;
	cur = head;

	while (cur != NULL)
	{
		printf("%s %f\n", cur->name, cur->score);
		cur = cur->next;
	}

	return 0;
}
//
//struct Stu
//{
//	long num;
//	char name[20];
//	float score[3];
//	float avg;//ƽ���ɼ�
//};
//
//void Input(struct Stu* p)
//{
//	int i = 0;
//	//p[i] === *(p+i)
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d %s %f %f %f", &(p[i].num), p[i].name, &(p[i].score[0]), &(p[i].score[1]), &(p[i].score[2]));
//		p[i].avg = (p[i].score[0] + p[i].score[1] + p[i].score[2]) / 3;
//	}
//}
//
//struct Stu Max(struct Stu s[])
//{
//	int i = 0;
//	//�����±�Ϊ0��Ԫ����ƽ���ɼ���ߵ�ѧ��
//	int max = 0;
//	for (i = 1; i < 3; i++)
//	{
//		if (s[i].avg > s[max].avg)
//		{
//			max = i;
//		}
//	}
//	//max��߼�¼�ľ���ƽ���ɼ���ߵ�ѧ�����±�
//	return s[max];
//}
//
//
//void Print(struct Stu s)
//{
//	printf("%d %s %f %f %f\n", s.num, s.name, s.score[0], s.score[1], s.score[2]);
//}
//
//int main()
//{
//	struct Stu s[3];//����ѧ��
//	struct Stu* ps = s;
//	Input(ps);//����3��ѧ������Ϣ
//	struct Stu tmp = Max(s);
//	Print(tmp);
//	return 0;
//}
//
//int main()
//{
//	struct Person
//	{
//		char name[20];
//		int count;//Ʊ��
//	};
//	char name[20] = {0};
//	struct Person p[3] = { { "zhangsan", 0 }, {"lisi", 0}, {"wangwu", 0} };	
//	struct Person* ps = p;
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s %d\n", ps->name, ps->count);
//		ps++
//	}
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct Stu s = {"����", 20};
//	//printf("%p\n", &s);
//	struct Stu* ps = &s;//�ṹ��ĵ�ַ/�ṹ���ָ��
//	//printf("%s %d\n", (*ps).name, (*ps).age);
//	printf("%s %d\n", ps->name, ps->age);
//
//	//ps ��һ���ṹ���ָ�����
//	return 0;
//}
//
//struct Person
//{
//	char name[20];
//	int count;//Ʊ��
//};
//
//int main()
//{
//	char name[20] = {0};
//	struct Person p[3] = { { "zhangsan", 0 }, {"lisi", 0}, {"wangwu", 0} };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("�����뱻ͶƱ�˵�����:>");
//		scanf("%s", name);
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			if (0 == strcmp(p[j].name, name))
//			{
//				p[j].count++;
//			}
//		}
//	}
//	printf("ͳ�ƽ��:\n");
//	int j = 0;
//	for (j = 0; j < 3; j++)
//	{
//		printf("%s %d\n", p[j].name, p[j].count);
//	}
//
//	return 0;
//}
//int main()
//{
//	struct Stu
//	{
//		char name[20];
//		long num;
//		float score;
//	}  s[3];//�ṹ������
//
//	struct Stu s2[10];
//
//	return 0;
//}
//
//int main()
//{
//	struct Stu
//	{
//		char name[20];
//		long num;
//		float score;
//	}s1, s2;
//	printf("��������ѧ������Ϣ:>\n");
//
//	scanf("%s %d %f", s1.name, &(s1.num), &(s1.score));
//	scanf("%s %d %f", s2.name, &(s2.num), &(s2.score));
//
//	//�ȽϺʹ�ӡ
//	if (s1.score > s2.score)
//	{
//		printf("%s %d %f\n", s1.name, s1.num, s1.score);
//	}
//	else if (s1.score < s2.score)
//	{
//		printf("%s %d %f\n", s2.name, s2.num, s2.score);
//	}
//	else
//	{
//		printf("%s %d %f\n", s1.name, s1.num, s1.score);
//		printf("%s %d %f\n", s2.name, s2.num, s2.score);
//	}
//	return 0;
//}
//
//int main()
//{
//	//struct Student
//	//{
//	//	long int num;
//	//	char name[20];
//	//	char sex;
//	//	char addr[30];
//	//}s = {20190101, "����", 'm', "����"};
//
//	//C99��׼
//	//struct Date
//	//{
//	//	int year;
//	//	int month;
//	//	int day;
//	//};
//
//	//struct Student
//	//{
//	//	long int num;
//	//	char name[20];
//	//	char sex;
//	//	char addr[30];
//	//	struct Date birthday;//����
//	//}s = {.name="����",  .num=20190202, .sex = 'm', .addr = "beijing"};
//
//	//struct Date
//	//{
//	//	int year;
//	//	int month;
//	//	int day;
//	//};
//
//	//struct Student
//	//{
//	//	long int num;
//	//	char name[20];
//	//	char sex;
//	//	char addr[30];
//	//	struct Date birthday;//����
//	//}s = { 20190202, "�绨", 'f', "μ��", {1988, 12, 15} };
//
//	//printf("%s %c %d %s %d-%d-%d\n", s.name, s.sex, s.num, s.addr, 
//	//	s.birthday.year, s.birthday.month, s.birthday.day);
//
//
//	struct Date
//	{
//		int year;
//		int month;
//		int day;
//	};
//
//	struct Student
//	{
//		long int num;
//		char name[20];
//		char sex;
//		char addr[30];
//		struct Date birthday;//����
//	}s = {0};
//
//	struct Student tmp = s;
//
//	printf("%p\n", &tmp);
//	printf("%p\n", &(tmp.sex));
//
//
//	//printf("%s %c %d %s %d-%d-%d\n", tmp.name, tmp.sex, tmp.num, tmp.addr,
//	//	tmp.birthday.year, tmp.birthday.month, tmp.birthday.day);
//
//
//	return 0;
//}

//3-�����ṹ��
//struct
//{
//	char name[20];
//	int age;
//	float score;
//} s1, s2;
//
//int main()
//{
//
//	return 0;
//}
//2
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//} s1,s2;
//
//int main()
//{
//	int age = 20;
//	s1.age = 200;
//	return 0;
//}
//1
//�����ṹ������
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	//����ṹ�����
//	struct Stu s;
//	return 0;
//}