#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��׼������-stdin
//��׼�����-stdout
//��׼������-stderr
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	fputc('r', stdout);
//	//��-ˮ��
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	int ch = fgetc(stdin);
//	printf("%c\n", ch);
//
//	//��-ˮ��
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	//дһ��
//	fputs("hello bit\n", pf);
//	fputs("hehe\n", pf);
//
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	//��һ��
//	char arr[100] = { 0 };
//	fgets(arr, 99, pf);
//	printf("%s", arr);
//
//	fgets(arr, 99, pf);
//	printf("%s", arr);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//struct S
//{
//	char name[20];
//	int age;
//};
////
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	struct S s = { "����", 20 };
//	fprintf(pf, "%s %d", s.name, s.age);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	struct S s = {0};
//	fscanf(pf, "%s %d", s.name, &(s.age));
//
//	printf("%s %d\n", s.name, s.age);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//struct S
//{
//	char arr[20];
//	int a;
//	double d;
//};

//
//int main()
//{
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//�����Ƶ�д�ļ�
//	struct S s = {"�Ǻ�", 20, 3.14};
//	fwrite(&s, sizeof(s), 1, pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//int main()
//{
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//�����ƵĶ��ļ�
//	struct S s = {0};
//	int ret = fread(&s, sizeof(s), 1, pf);
//	printf("%s %d %lf\n", s.arr, s.a, s.d);
//	printf("ret = %d\n", ret);
//	ret = fread(&s, sizeof(s), 1, pf);
//	printf("ret = %d\n", ret);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//struct S
//{
//	char arr[10];
//	int i;
//	double d;
//};
//
//int main()
//{
//	struct S s = { "zhangsan", 20, 3.14 };
//	struct S s2 = { 0 };
//	//sprintf
//	char buf[100] = { 0 };
//	sprintf(buf, "%s %d %lf", s.arr, s.i, s.d);
//	//buf
//	printf("%s\n", buf);//1
//	sscanf(buf, "%s %d %lf", s2.arr, &(s2.i), &(s2.d));
//	printf("%s %d %lf\n", s2.arr, s2.i, s2.d);//2
//	return 0;
//}

//scanf   ��Ӧ���ڱ�׼�������ĸ�ʽ�����������
//prinf   ��Ӧ���ڱ�׼������ĸ�ʽ����������
//fscanf  ��Ӧ���������������ĸ�ʽ�����������
//fprintf ��Ӧ��������������ĸ�ʽ����������
//sscanf  �Ǵ��ַ����ж�ȡ��ʽ��������
//sprinf  �ǰѸ�ʽ��������������ַ�����

//
// ���ŷ� - 18-20 29
//
//
//int main()
//{
//	//ABCDEF
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//		return 1;
//	//��
//	int ch = fgetc(pf);//A
//	printf("%c\n", ch);
//	fseek(pf, -1, SEEK_END);
//	ch = fgetc(pf);//F
//	printf("%c\n", ch);
//	int ret = ftell(pf);
//	printf("%d\n", ret);//
//	rewind(pf);
//	ch = fgetc(pf);//A
//	printf("%c\n", ch);
//	//�ر�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


extern int Add(int x, int y);

int main()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("%d\n", c);

	return 0;
}

//Add
//main
//
//IDE ���ɿ�������
//�༭��+������+������
//


