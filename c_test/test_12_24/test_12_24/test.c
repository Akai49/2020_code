#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		//��ӡ������
//		for (i = 0; i<n; i++)
//		{
//			//��ӡһ��
//			//�ȴ�ӡ�ո�
//			int j = 0;
//			for (j = 0; j<n - 1 - i; j++)
//			{
//				printf(" ");
//			}
//			//�ٴ�ӡ*+�ո�
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");//����
//		}
//	}
//	return 0;
//}


//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		//�� - n ��
//		int i = 0;
//		for (i = 0; i<n; i++)
//		{
//			//һ��
//			//�ո�
//			int j = 0;
//			for (j = 0; j<n - i; j++)
//			{
//				printf(" ");
//			}
//			//*+�ո�
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		//�� - n+1 ��
//		for (i = 0; i<n + 1; i++)
//		{
//			//�°벿�ֵ�һ�еĴ�ӡ
//			//�ո�
//			int j = 0;
//			for (j = 0; j<i; j++)
//			{
//				printf(" ");
//			}
//			//*+�ո�
//			for (j = 0; j<n + 1 - i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		//��-n��
//		int i = 0;
//		for (i = 0; i<n; i++)
//		{
//			//*+�ո�
//			int j = 0;
//			for (j = 0; j<n + 1 - i; j++)
//			{
//				printf("* ");
//			}
//			//�ո�
//			for (j = n + 1 - i; j<n + 1; j++)
//			{
//				printf(" ");
//			}
//			printf("\n");
//		}
//		//��-n+1��
//		for (i = 0; i<n + 1; i++)
//		{
//			//*+�ո�
//			int j = 0;
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			//�ո�
//			for (j = i + 1; j<n + 1; j++)
//			{
//				printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		//��-n��
//		int i = 0;
//		for (i = 0; i<n; i++)
//		{
//			int j = 0;
//			for (j = 0; j<n - i; j++)
//			{
//				printf("  ");
//			}
//			for (j = 0; j <= i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		//��-n+1��
//		for (i = 0; i<n + 1; i++)
//		{
//			//�ո�
//			int j = 0;
//			for (j = 0; j<i; j++)
//			{
//				printf("  ");
//			}
//			//*
//			for (j = 0; j<n + 1 - i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i<n; i++)
//		{
//			//��ӡһ��
//			//�ո� + * + �ո�
//			int j = 0;
//			for (j = 0; j<i; j++)
//			{
//				printf(" ");
//			}
//			printf("*");
//			for (j = 0; j<n - 1 - i; j++)
//			{
//				printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i<n; i++)
//		{
//			int j = 0;
//			for (j = 0; j<n; j++)
//			{
//				if (i == j)
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i<n; i++)
//		{
//			int j = 0;
//			for (j = 0; j<n; j++)
//			{
//				if (i + j == n - 1)
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i<n; i++)
//		{
//			int j = 0;
//			for (j = 0; j<n; j++)
//			{
//				if ((i == j) || (i + j == n - 1))
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i<n; i++)
//		{
//			int j = 0;
//			for (j = 0; j<n; j++)
//			{
//				if ((i == 0) || (i == n - 1) || (j == 0) || (j == n-1))
//					printf("* ");
//				else
//					printf("  ");
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
		int i = 0;
		for (i = 0; i<n; i++)
		{
			int j = 0;
			for (j = 0; j<n; j++)
			{
				if (0==j || i == j || i == n - 1)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}