#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void init_board(int arr[ROW][COL],int row,int col,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row ; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr[i][j] = set;
		}
	}
}
void display_board(int arr[ROW][COL], int row, int col)
{
		int i = 0;
		int j = 0;
		for (i = 0; i < row; i++)
		{
			printf("| %c | %c | %c |\n", arr[i][0], arr[i][1], arr[i][2]);
			printf("|---|---|---|\n");
		}
}
int full_judge(int arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (i = 0; j < col; j++)
		{
			if (arr[i][j] == 8)
				return 1;
		}
	}
	return 0;
}
void set_window(int arr[ROW][COL],int row,int col)
{
	//������ѭ���Ļ���ѭ����������ô���á�
	//format:
	int start = 0; 
	start = full_judge(arr,row,col);

	while(start)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (arr[x][y] == 8)
		{
			arr[x][y] = '0';
			break;
		}
		//else
		//goto format;
	}
}
void set_player(int arr[ROW][COL], int row, int col)
{
	int start = 0;
	start = full_judge(arr, row, col);
	while (start)
	{
		int m = 0;
		int n = 0;
		printf("��������������:>\n");
		scanf("%d %d", &m, &n);
		if (m < row && n < col)
		{
			if (arr[m][n] == 8)
			{
				arr[m][n] = '1';
				break;
			}
			else
			{
				printf("���������������ӣ�����������\n");
			}
		}
		else
			printf("�Ƿ����룬����������\n");
	}
}
int judge(int arr[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (arr[i][1] + arr[i][2] + arr[i][3] == 0)
		{
			//printf("����Ӯ\n");
			return 0;
		}
		else if (arr[i][1] + arr[i][2] + arr[i][3] == 3)
		{
			//printf("���Ӯ\n");
			return 1;
		}

	}
	for (i = 0; i < col; i++)
	{
		if (arr[1][i] + arr[2][i] + arr[3][i] == 0)
		{
			//printf("����Ӯ\n");
			return 0;
		}
		else if (arr[i][1] + arr[i][2] + arr[i][3] == 3)
		{
			//printf("���Ӯ\n");
			return 1;
		}
	}
	if (arr[0][0] + arr[1][1] + arr[2][2] == 0 || arr[0][2] + arr[1][1] + arr[2][0] == 0)
		/*printf("����Ӯ\n");*/
		return 0;
	else if (arr[0][0] + arr[1][1] + arr[2][2] == 3 || arr[0][2] + arr[1][1] + arr[2][0] == 3)
		/*printf("���Ӯ\n");*/
		return 1;
	/*else
		printf("ƽ��\n");*/
}
