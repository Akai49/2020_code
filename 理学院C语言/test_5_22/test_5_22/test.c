#define _CRT_SECURE_NO_WARNINGS 1


//int main()
//{
//	char ch = 'w';
//	char * pc = &ch;//
//	//float f = 3.14f;//
//	int a = 10;//a�Ǵ������ڴ��ϵ�
//	//a = 20;//ֱ�ӷ���
//
//	int * p = &a;//&- ȡ��ַ������
//	//��ŵ�ַ�ı���
//	//���ָ��ı��� - ָ�����
//	//ָ�������������ŵ�ַ��
//	float f = 3.14f;
//	float* pf = &f;
//
//	return 0;
//}
#include <stdio.h>


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	printf("%d\n", a);
//	*pa = 20;//�����ò��� - ��ӷ��ʲ�����
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int a = 10, b = 20;
//	int *p1;
//	int *p2;
//	int *p1, *p2;//p1,p2����ָ��
//	int *p1, p2;//p1��ָ�룬p2������
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//	printf("%d\n", sizeof(pa));
//	//int *pa = &a;
//	//0x0012ff40
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int* pa = &a;//��ָ�����pa���и�ֵ
//	printf("%d\n", *pa);//����ָ�����ָ��ı���
//	printf("%x\n", pa);//
//	printf("%p\n", pa);//%p���Ǵ�ӡ��ַ
//
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int*pa = &a;
//	int*pb = &b;
//	if (a < b)
//	{
//		int* p;//��ʱ����
//		p = pa;
//		pa = pb;
//		pb = p;
//	}
//	printf("%d %d\n", *pa, *pb);//��-->С
//	return 0;
//}

//����2�����α���

//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//void Swap2(int* pa, int*pb)
//{
//	int tmp = 0;
//	tmp = *pa;//tmp = a;
//	*pa = *pb;//a = b;
//	*pb = tmp;//b = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��a = %d b = %d\n", a, b);
//	//����
//	Swap2(&a, &b);
//
//	printf("������a = %d b = %d\n", a, b);
//
//	return 0;
//}
//
//
//void Swap2(int* pa, int*pb)
//{
//	int*p;
//	p = pa;
//	pa = pb;
//	pb = p;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��a = %d b = %d\n", a, b);
//	//����
//	Swap2(&a, &b);
//
//	printf("������a = %d b = %d\n", a, b);
//
//	return 0;
//}


void Swap2(int* pa, int*pb)
{
	int tmp = 0;
	tmp = *pa;//tmp = a;
	*pa = *pb;//a = b;
	*pb = tmp;//b = tmp;
}

void Exchange(int* p1, int*p2, int* p3)
{
	if (*p1 < *p2)//a<b
	{
		Swap2(p1, p2);
	}
	if (*p1 < *p3)//a<c
	{
		Swap2(p1, p3);
	}
	if (*p2 < *p3)//b<c
	{
		Swap2(p2, p3);
	}
}

int main(){
	int a = 0, b = 0, c = 0;
	scanf("%d%d%d", &a, &b, &c);

	Exchange(&a, &b, &c);

	printf("%d %d %d\n", a, b, c);//a�з����ֵ��c�з���Сֵ
	return 0;
}