#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

void print_star()
{
	printf("**********************\n");
}

void print_message()
{
	printf("   How do you do !    \n");
}

int main()
{
	print_star();
	print_star();

	print_message();

	print_star();
	print_star();

	return 0;
}

//int main()
//{
//	printf("**********************\n");
//	printf("   How do you do !    \n");
//	printf("**********************\n");
//	return 0;
//}






//��Ŀ���ƣ�
//�ַ�����ת���
//��Ŀ���ݣ�
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	//arr2�Ƿ�Ϊarr1��ת��õ��ģ�
//	int i = 0;
//	int len = strlen(arr1);
//	for (i = 0; i < len; i++)
//	{
//		//��ת1���ַ�
//		char tmp = arr1[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr1[j] = arr1[j + 1];
//		}
//		arr1[len - 1] = tmp;
//		//����ת֮����ַ�����arr2�Ƚ��Ƿ����
//		if (strcmp(arr1, arr2) == 0)
//		{
//			printf("arr2��arr1��ת������\n");
//			break;
//		}
//	}
//	if (i == len)
//	{
//		printf("arr2����arr1��ת������\n");
//	}
//	return 0;
//}


//�ַ�����ת����-�������������
//��Ŀ���ƣ�
//�ַ�������
//��Ŀ���ݣ�
//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
#include <stdio.h>
#include <string.h>
//
//int main()
//{
//
//	//����2��
//	char arr[20] = "abcdef";
//	int k = 4;
//	int len = strlen(arr);
//	int left = 0;
//	int right = k - 1;
//	//������ߵ��ַ�
//	while (left<right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	//�����ұߵ��ַ�
//	left = k;
//	right = len - 1;
//	while (left<right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	//���������ַ���
//	left = 0;
//	right = len - 1;
//	while (left<right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s\n", arr);
//	//����1��
//	//char arr[20] = "abcdef";
//	//��ת�ַ�
//	//int k = 4;
//	//int i = 0;
//	//int len = strlen(arr);//6
//
//	//for (i = 0; i < k; i++)
//	//{
//	//	//����ת1���ַ�
//	//	char tmp = arr[0];
//	//	int j = 0;
//	//	for (j = 0; j < len - 1; j++)
//	//	{
//	//		arr[j] = arr[j + 1];
//	//	}
//	//	arr[len - 1] = tmp;
//	//}
//
//	//printf("%s\n", arr);
//
//	return 0;
//}




//��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
#include <stdio.h>

//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//��������Ԫ��
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//
//	while (left<right)
//	{
//		//��ǰ�����ż��
//		while ((left <= right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//�Ӻ���ǰ������
//		while ((left <= right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		//�����ҵ���������ż��
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//
//int main()
//{
//	//�������
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//1 2 3 4 5 6 7 8 9 10
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//����
//	int tmp[10] = { 0 };
//	//��������
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 == 1)
//		{
//			tmp[j] = arr[i];
//			j++;
//		}
//	}
//	//����ż��
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			tmp[j] = arr[i];
//			j++;
//		}
//	}
//	//����
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = tmp[i];
//	}
//	//��ӡ
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//
//

