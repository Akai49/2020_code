#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr[10][10] = { 0 };
//	scanf("%d%d", &n, &m);
//	//�����������
//	int i = 0;
//	int j = 0;
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int k = 0;//�����Ĵ���
//	scanf("%d", &k);//1\n
//	int r = 0;
//	for (r = 0; r<k; r++)
//	{
//		//һ�ε�ת��
//		char t = 0;
//		int a = 0;
//		int b = 0;
//		//getchar();//�����ϴ��������µ�\n
//		scanf(" %c %d %d", &t, &a, &b);//r 2 3   c 1 2
//		if (t == 'r')
//		{
//			//�еĽ���
//			i = 0;
//			for (i = 0; i<m; i++)
//			{
//				//arr[a-1][i]
//				//arr[b-a][i]
//				int tmp = arr[a - 1][i];
//				arr[a - 1][i] = arr[b - 1][i];
//				arr[b - 1][i] = tmp;
//			}
//		}
//		else
//		{
//			//�еĽ���
//			for (i = 0; i<n; i++)
//			{
//				//arr[i][a-1]
//				//arr[i][b-a]
//				int tmp = arr[i][a - 1];
//				arr[i][a - 1] = arr[i][b - 1];
//				arr[i][b - 1] = tmp;
//			}
//		}
//	}
//	//��ӡת��֮��ľ���
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<m; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//
//

#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int arr[50] = { 0 };
//	int i = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		arr[i++] = n % 6;
//		n /= 6;
//	}
//	for (i--; i >= 0; i--)
//	{
//		printf("%d", arr[i]);
//	}
//
//	return 0;
//}

#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	//��max�����Լ��
//	int max = n>m ? m : n;
//	//��min����С������
//	int min = n>m ? n : m;
//	while (1)
//	{
//		if (m%max == 0 && n%max == 0)
//		{
//			break;
//		}
//		max--;
//	}
//
//	while (1)
//	{
//		if (min%m == 0 && min%n == 0)
//		{
//			break;
//		}
//		min++;
//	}
//	printf("%d\n", max + min);
//
//	return 0;
//}
//

//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int k = 0;
//	scanf("%d%d", &n, &m);
//	int a = n;
//	int b = m;
//	while (k = a%b)
//	{
//		a = b;
//		b = k;
//	}
//	printf("%d\n", k + m*n / k);
//
//	return 0;
//}


#include <stdio.h>
#include <math.h>

int main()
{
	int n = 0;
	int sum = 0;
	scanf("%d", &n);
	int i = 0;
	while (n)
	{
		int m = n % 10;
		if (m % 2 == 1)
			m = 1;
		else
			m = 0;
		sum += m*pow(10, i);
		i++;

		n /= 10;
	}
	printf("%d\n", sum);
	return 0;
}