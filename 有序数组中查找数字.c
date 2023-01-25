#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int flag = 0;
//	int number = 0;
//	printf("请输入您要查找的数字：");
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
//		printf("找到了，下标是%d\n", i);
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}
////上面的代码非常挫，所以下面就可以这样写

//接下来就可以用 二分法 写代码
//普通方法有可能10次才可以找得到，二分法最多4次就可以找的到
//这种算法也叫 折半查找（二分查找），但是数据必须是有序的
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int reft = 0;
	int right = sz - 1;
	int mid = 0;
	int k = 0;//要查找的元素
	int flag = 0;//找不到
	printf("请输入您要查找的数字：");
	scanf("%d", &k);
	while (reft <= right)//即使是 reft==right 也有一个元素需要查找
	{
		mid = (reft + right) / 2;//每次二分查找都要求出中间元素的下标
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
			flag = 1;//找到了
			break;
		}
	}
	if (1 == flag)
	{
		printf("找到了，下标是%d\n", mid);
	}
	else
	{
		printf("没找到\n");
	}
	return 0;
}