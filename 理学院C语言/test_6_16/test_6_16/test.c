#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	//���ļ� test.txt
//	//д�ļ� test.bak
//	FILE* pfread = fopen("test.txt", "r");
//	if (pfread == NULL)
//	{
//		printf("���ļ�test.txtʧ��\n");
//		return 1;
//	}
//	FILE* pfwrite = fopen("test.bak", "w");
//	if (pfwrite == NULL)
//	{
//		printf("���ļ�test.bakʧ��\n");
//		//�ر���һ���򿪵��ļ�
//		fclose(pfread);
//		return 1;
//	}
//	//��д�ļ�����-����Ч��
//	//fgetc();//��ȡ�ļ���ʱ����������ļ�ĩβ���߶�ȡʧ�ܻ᷵��EOF
//	int ch = 0;
//	while ((ch = fgetc(pfread)) != EOF) 
//	{
//		fputc(ch, pfwrite);
//	}
//	//�ر��ļ�
//	fclose(pfread);
//	pfread = NULL;
//	fclose(pfwrite);
//	pfwrite = NULL;
//	return 0;
//}

//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("���ļ�ʧ��\n");
//		return 1;
//	}
//
//	//�����д
//	//��λ�ļ�ָ��
//	fseek(pf, 4, SEEK_CUR);
//	printf("%d\n", ftell(pf));
//	//��ȡ
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//o
//	fseek(pf, 1, SEEK_SET);
//	ch = fgetc(pf);
//	printf("%c\n", ch);//e
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct Stu s = {0};
//	//��ȡ�ļ�test.dat�е����ݣ���s��
//	FILE* pf = fopen("test.dat", "rb");
//	if (pf == NULL)
//	{
//		printf("���ļ�ʧ��\n");
//		return 1;
//	}
//	//�����Ƶķ�ʽ������
//	fread(&s,  sizeof(struct Stu), 1, pf);
//
//	printf("%s %d %f\n", s.name, s.age, s.score);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct Stu s = { "����",29,99.0f };
//	//дs�����ݵ��ļ���
//	FILE* pf = fopen("test.dat", "wb");
//	if (pf == NULL)
//	{
//		printf("���ļ�ʧ��\n");
//		return 1;
//	}
//	//�����Ƶķ�ʽд����
//	fwrite(&s, sizeof(struct Stu), 1, pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//
//int main()
//{
//	struct Stu s = {0};
//	
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		printf("���ļ�ʧ��\n");
//		return 1;
//	}
//	//������
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//	
//	printf("%s %d %f\n", s.name, s.age, s.score);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//int main()
//{
//	struct Stu s = { "����", 20, 99.5f };
//	//дs�����ݵ��ļ���
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		printf("���ļ�ʧ��\n");
//		return 1;
//	}
//	//д����
//	//����һ���ĸ�ʽд�ļ�-��ʽ������ʽ
//	fprintf(pf, "%s %d %f", s.name, s.age, s.score);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//fgets - ��һ������
//fputs - дһ������
//
//int main()
//{
//	char buf[100] = { 0 };
//	FILE*pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("���ļ�ʧ��\n");
//		return 1;
//	}
//
//	//���ļ�
//	fgets(buf, 100, pf);
//	printf("%s", buf);
//	fgets(buf, 100, pf);
//	printf("%s", buf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//
//int main()
//{
//	FILE*pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("���ļ�ʧ��\n");
//		return 1;
//	}
//
//	//д�ļ�
//	fputs("hello world\n", pf);
//	fputs("hello bit\n", pf);
//
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//fgetc ��һ���ַ�
//fputc дһ���ַ�
//
//int main()
//{
//	FILE*pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("���ļ�ʧ��\n");
//		return 1;
//	}
//	
//	//���ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("�ļ���ʧ��\n");
//		return 1;
//	}
//	//д����
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		fputc('b', pf);
//		fputc('i', pf);
//		fputc('t', pf);
//	}
//
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//





