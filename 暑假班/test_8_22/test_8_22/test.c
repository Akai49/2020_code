#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

#include <stdio.h>
int main(void){
	char ch[][5] = { 'I', 'O', 'I', 'H', 'F',
		'B','D','L','B','V',
		'N', 'C', 'P', 'L', 'K',
		'F', 'Y', 'O', 'Z', 'S',
		'D', 'O', 'X', 'C', 'V',
		'N', 'F' };
	                     //Z          Y          P          C
	printf("%c%c%c%c\n", ch[0][18], ch[4][-4], ch[1][7], 5[ch][-2]);
	return 0;
}
//
//int FirstNotRepeatingChar(char* str) {
//	if (strlen(str) == 0)
//		return -1;
//	int hash[256] = { 0 };
//	int i = 0;
//	while (str[i] != '\0'){
//		hash[str[i]]++;
//		++i;
//	}
//	i = 0;
//	while (str[i] != '\0'){
//		if (1 == hash[str[i]]){
//			return i;
//		}
//		i++;
//	}
//	return -1;
//}
//int main()
//{
//	int ret = FirstNotRepeatingChar("aadccb");
//	if (ret == -1)
//	{
//		printf("������ֻ����һ�ε��ַ�\n");
//	}
//	else
//	{
//		printf("��һ��ֻ����һ�ε��ַ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}
//
//int main()
//{
//	int score = 0;
//	scanf("%d", &score);
//	if (score >= 60)
//		printf("Pass\n");
//	else
//		printf("Fail\n");
//
//	return 0;
//}
//
//
//int main()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int i = 0;
//	int j = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz- i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	int ret = 0;
//	int i = 0;
//
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		ret ^= arr[i];
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//void Swap(int *p1, int* p2)
//{
//	int tmp = 0;
//	tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//int main()
//{
//	int score = 0;
//	scanf("%d", &score);
//	if (score >= 140)
//	{
//		printf("Genius\n");
//	}
//	return 0;
//}
//#include <math.h>
//#include <string.h>
//
//#define  MUL(X, Y)   ((X)*(Y))
//#define CIR(r)  r*r 
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int t;
//	t = CIR(a + b);
//	printf("%d\n", t);
//	return 0;
//}
//дһ�������ж�һ���ǲ�������
//�����귵��1
//�������귵��0

//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int is_leap_year(int y)
//{
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
//
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//�ж����겢��ӡ
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//
//	return 0;
//}


//дһ�����������ж�һ�����ǲ�������
//����������1
//������������0
//
//int is_prime(int n)
//{
//	int i = 0; 
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//			return 0;//��������
//	}
//
//	return 1;//������
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int max = get_max(1, 2);
//	//max = get_max(1, a);
//	//max = get_max(1+4, get_max(2,3));
//
//	return 0;
//}
////
//void Swap2(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//void Swap1(int a, int b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d%d", &x, &y);//10 20
//	//дһ��������x��y��ֵ���н���
//	printf("����ǰ��x=%d y=%d\n", x, y);//x=10 y=20
//	//��ֵ����
//	Swap1(x, y);
//	//��ַ����
//	Swap2(&x, &y);
//
//	printf("������x=%d y=%d\n", x, y);//x=20 y=10
//	//int a = 10;
//	//int *pa = &a;
//	//*pa = 20;
//	//printf("%d\n", a);
//	return 0;
//}



//bug
//��bug�Ĺ��̽У�����

//
//�β�-��ʽ����
//��ʵ�δ����βε�ʱ���β���ʵ�ε�һ����ʱ����
//���βε��޸Ĳ���Ӱ��ʵ��
//
//err
//void Swap1(int a, int b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}

//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d%d", &x, &y);//10 20
//	//дһ��������x��y��ֵ���н���
//	printf("����ǰ��x=%d y=%d\n", x, y);//x=10 y=20
//	//����
//	//ʵ��-ʵ�ʲ���
//	Swap1(x, y);
//	printf("������x=%d y=%d\n", x, y);//x=20 y=10
//
//	return 0;
//}

//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}

//void ��ʾ��������������κ�ֵ
//void test()//�����ǿ���û�в�����
//{
//	printf("test\n");
//}
//
//int main()
//{
//	test();
//
//	//дһ�������ҳ�2�����Ľϴ�ֵ
//	//int num1 = 0;
//	//int num2 = 0;
//
//	//scanf("%d%d", &num1, &num2);
//
//	////�Լ��������Զ��庯��
//	//int max = get_max(num1, num2);
//
//	//printf("max = %d\n", max);
//
//	return 0;
//}

//void * memset(void * ptr, int value, size_t num);
//
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//
//	return 0;
//}


//string copy - �ַ�������
//char * strcpy(char * destination, const char * source);

//int main()
//{
//	char arr1[] = "hello bit";
//	char arr2[20] = { 0 };
//	strcpy(arr2, arr1);//���ú���
//	printf("%s\n", arr2);
//
//	return 0;
//}

//f(x) = 2*x+1;


//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//	//
//	return 0;
//}

//дһ�����룺��ӡ100~200֮�������
//������ֻ�ܱ�1������������������

//
//����������N�־��硷
//

//
//�Գ���
//

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//������2->i-1�������Գ�
//		int flag = 1;//����i������
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//sqrt��һ���⺯������i��ƽ�� - math.h
//		{
//			if (i%j == 0)
//			{
//				flag = 0;//��ǲ�������
//				break;
//			}
//		}
//		//1��2
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//������2->i-1�������Գ�
//		int flag = 1;//����i������
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//sqrt��һ���⺯������i��ƽ�� - math.h
//		{
//			if (i%j == 0)
//			{
//				flag = 0;//��ǲ�������
//				break;
//			}
//		}
//		//1��2
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//������2->i-1�������Գ�
//		int flag = 1;//����i������
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				flag = 0;//��ǲ�������
//				break;
//			}
//		}
//		//1��2
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//������2->i-1�������Գ�
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		//1��2
//		if (j >= i)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}



//��ӡ1000�굽2000��֮�������
//�����жϵĹ���
//1. �ܱ�4�����Ҳ��ܱ�100����������
//2. �ܱ�400����Ҳ������


//
//int main()
//{
//	int year = 0;
//	int count = 0;//������
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�Ƿ�Ϊ���꣬������ʹ�ӡ
//		if (((year%4==0)&&(year%100!=0)) || (year%400==0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}*/
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}