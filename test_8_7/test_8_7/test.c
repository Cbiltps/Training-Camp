#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int array[10][10];//��������

	//�Կ�ͷ�ͽ�β��ֵ
	for (i = 0; i < 10; i++)
	{
		array[i][i] = 1;//��ά��������һ����Ϊ1
		array[i][0] = 1;//��ά����ĵ�һ����Ϊ1
	}

	//���м丳ֵ
	for (i = 2; i < 10; i++)//���ѭ�� �� 
	{
		for (j = 1; j <= i - 1; j++)//�ڲ�ѭ�� �� 
		{
			array[i][j] = array[i - 1][j] + array[i - 1][j - 1];//���м������ֵ
		}
	}

	//�������
	for (i = 0; i < 10; i++)//���ѭ�� �� 
	{
		for (j = 0; j <= i; j++)//�ڲ�ѭ�� �� 
		{
			printf("%6d", array[i][j]);//�����ά���飬���Ϊ6 
		}
		printf("\n");//���� 
	}

	return 0;
}