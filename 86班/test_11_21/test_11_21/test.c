#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int i = 1;
//
//	while (i<=10)//���ʽ
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	//ѭ�������ĳ�ʼ��
//	int i = 1;
//
//	while (i <= 10)//�жϱ��ʽ
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//
//		i++;//ѭ�������ĵ���
//	}
//
//	return 0;
//}

//
//int main()
//{
//	//int ch = getchar();
//	//printf("%c\n", ch);
//	//EOF - end of file
//	//ABC\n
//	//int ch = 0;
//	//while ((ch = getchar()) != '\n')
//	//{
//	//	putchar(ch);
//	//	//printf("%c", ch);
//	//}
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//	printf("��ȷ��(Y/N):");
//	//��ջ�����
//	while (getchar() != '\n')
//	{
//		;
//	}
//
//	int ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}


//for ѭ��

//int  main()
//{
//	int i = 0;
//
//	for (i=1; i<=10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i); 
//	}
//
//	return 0;
//}
//

//int  main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//
//	return 0;
//}



//��C�����ȱ�ݡ�
//<C��ָ��>
//<Cר�ұ��>


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 9;
//	for (i = 0; i <10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//
//	return 0;
//}
//

//
//int main()
//{
//	2 + 3;
//	int a = 3;
//	printf("%d\n", a);//
//	a = 20;
//	//
//	//��ֵ����ֵ
//	//
//	int b = (a = 4);
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i<=10);
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//


//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	//1 2 6 = 9
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret*i;
//		}
//		sum = sum + ret;
//	}
//	
//	printf("%d\n", sum);
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	//1 2 6 = 9
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret*n;
//		sum = sum + ret;
//	}
//
//	printf("%d\n", sum);
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//}
//



//welcome to bit!!!!!
//###################
//w#################!
//we###############!!
//wel#############!!!
//...
//welcome to bit!!!!!
#include <windows.h>
//
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ�����
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//
//	return 0;
//}

//strlen - string length
//strcmp - string compare
//>0
//=0
//<0
//
//strcpy - string copy
//
//
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	//������ȷ�����룺��123456��
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		//�����ַ����Ƚ�-������==
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("������ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("������������˳�����\n");
//	}
//	return 0;
//}
//

#include <stdlib.h>
#include <time.h>


void menu()
{
	printf("*******************************\n");
	printf("*****  1. play    0. exit   ***\n");
	printf("*******************************\n");
}

//1970-1-1-0:0:0

//RAND_MAX = 32767

//time_t
//void game()
//{
//	int guess = 0;
//	//1. ����һ�������
//	int ret = rand()%100+1;
//	//printf("%d\n", ret);
//
//	//2. ������
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//int main()
//{
//
//flag:
//	printf("hehe\n");
//	goto flag;
//
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ����������:��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");//ȡ���ػ�
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//
//	while (1)
//	{
//		printf("��ע�⣬��ĵ�����1�����ڹػ����������:��������ȡ���ػ�\n");
//		scanf("%s", input);
//		if (strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");//ȡ���ػ�
//			break;
//		}
//	}
//	return 0;
//}

int main()
{

	return 0;
}