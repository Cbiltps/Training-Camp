#include <stdio.h>
//#include <math.h>

//int is_prime(int n)
//{
//	//�Գ���
//	//2��n-1
//	//2��sqrt(n)
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;//��������
//	}
//	return 1;//������
//}

int is_prime(int k)
{
	int j = 0;
	for (j = 2; j < k; j++)
	{
		if (k % j == 0)//�����Ϊ��������0
			return 0;
	}
	return 1;//��֮�򷵻�1
}

int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)//100��200֮�������
	{
		if (is_prime(i) == 1)//�ж�i�Ƿ�Ϊ����
		{
			printf("%d ", i);
		}
	}
	return 0;
}