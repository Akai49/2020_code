#define _CRT_SECURE_NO_WARNINGS 1

//ȫ�ֱ���
//������g_val�����������չ
//�ǵ�g_valֻ����add.c�ڲ�ʹ��

//static int g_val = 2020;


//ȫ�ֱ���
//int g_val = 2020;

//extern int a;
//extern int b;
//

//
//int Add()
//{
//	return a + b;
//}


//�ڲ�����
//Add����ֻ�����Լ����ڵ�add.c�ļ��ڲ�ʹ��
//
//static int Add(int a, int b)
//{
//	return a + b;
//}

//�ⲿ����
//int Add(int a, int b)
//{
//	return a + b;
//}
void Input(char arr[])
{
	gets(arr);
}

void DelChar(char arr[], char ch)
{
	int i = 0;
	int j = 0;
	while (arr[i] != '\0')
	{
		if (arr[i] != ch)
		{
			arr[j++] = arr[i];
		}
		i++;
	}
	arr[j] = '\0';
}