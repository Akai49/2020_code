#define _CRT_SECURE_NO_WARNINGS 1

int main()
{
	//C�����е�һ���ؼ���
	//sizeof(����) - �������ʹ������������ٿռ�Ĵ�С
	//sizeof ����Ĵ�С����λ���ֽ�

	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));//4/8
	//��׼�涨��sizeof(long)>=sizeof(int)
	printf("%d\n", sizeof(long long));//8
	//��׼�涨��sizeof(long long) >= sizeof(long)

	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));

	return 0;
}

//VS��������Ϊ����ȫ�ĺ���
//scanf
//strcpy
//strcat
//

//
//scanf  - ����
//printf - ���

//#include <stdio.h>
//
//int main()
//{
//	int num = 0;//����һ�����α�����num���Ҹ�ֵ0
//	scanf("%d", &num);  //����һ������
//	//%d - ������������
//	printf("%d\n", num); //���һ������
//
//	return 0;
//}
//

//д������
//����C���Դ�����˵
//һ��C���Դ����б������һ��main����-������
//main�������й̶�д����

//����
//stdio
//std-��׼
//i - input 
//o - output
//��׼�������

//#include <stdio.h>
	
//int main()
//{
//	//print function
//	//��ӡ   ����
//	//��hello bit��ӡ����Ļ�� - ������� - 
//	//�⺯�� - C���������ṩ�ĺ��� - ����ͷ�ļ�
//
//	printf("hello bit\n");
//	return 0;
//}
//


//д���Ѿ���ʱ��-����������д����
//void main()
//{
//
//}



//�������ϵ�F10    fn+F10
//main���� - �ǳ�������
//�����Ǵ�main�����ĵ�һ�п�ʼִ�е�
//

//

//int main()
//{
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//
//	return 0;
//}
//


