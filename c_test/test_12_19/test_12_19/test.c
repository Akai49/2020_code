#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		//����
//		for (i = 0; i<n; i++)
//		{
//			//ÿһ�еĴ�ӡ
//			int j = 0;
//			for (j = 0; j<n; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//


#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		//����
//		for (i = 0; i<n; i++)
//		{
//			//��ӡһ��
//			int j = 0;
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


#include <stdio.h>


int main()
{
	int n = 0;
	while (~scanf("%d", &n))
	{
		//����
		int i = 0;
		for (i = 0; i<n; i++)
		{
			//��ӡһ��
			//�ո�
			int j = 0;
			for (j = 0; j<n; j++)
			{
				if (i + j<n - 1)
					printf("  ");
				else
					printf("* ");
			}

			printf("\n");
		}
	}
	return 0;
}
