#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h> 
int main()
{
	float a, b, n;
	char ch;
	printf("��������������������������");
	scanf("%d%d", &a, &b);
	getchar();
	printf("������������е�����������ţ�");
	scanf("%c", &ch);
	switch (ch)
	{
	case'+': n = a + b;
		break;
	case'-': n = a - b;
		break;
	case'*': n = a*b;
		break;
	case'/': n = a / b;
		break;
	default:printf("error");
	}
	printf("answer=%.2f", n);


}