#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int flag = 0;
//	int number = 0;
//	printf("��������Ҫ���ҵ����֣�");
//	scanf("%d", &number);
//	for (i = 1; i <= sz; i++)
//	{
//		if (number == arr[i])
//		{
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 1)
//	{
//		printf("�ҵ��ˣ��±���%d\n", i);
//	}
//	else
//	{
//		printf("û�ҵ�\n");
//	}
//	return 0;
//}
////����Ĵ���ǳ��죬��������Ϳ�������д

//�������Ϳ����� ���ַ� д����
//��ͨ�����п���10�βſ����ҵõ������ַ����4�ξͿ����ҵĵ�
//�����㷨Ҳ�� �۰���ң����ֲ��ң����������ݱ����������
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int reft = 0;
	int right = sz - 1;
	int mid = 0;
	int k = 0;//Ҫ���ҵ�Ԫ��
	int flag = 0;//�Ҳ���
	printf("��������Ҫ���ҵ����֣�");
	scanf("%d", &k);
	while (reft <= right)//��ʹ�� reft==right Ҳ��һ��Ԫ����Ҫ����
	{
		mid = (reft + right) / 2;//ÿ�ζ��ֲ��Ҷ�Ҫ����м�Ԫ�ص��±�
		if ((arr[mid] < k))
		{
			reft = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			flag = 1;//�ҵ���
			break;
		}
	}
	if (1 == flag)
	{
		printf("�ҵ��ˣ��±���%d\n", mid);
	}
	else
	{
		printf("û�ҵ�\n");
	}
	return 0;
}