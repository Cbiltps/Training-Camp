#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int array[10][10];//定义数组

	//对开头和结尾赋值
	for (i = 0; i < 10; i++)
	{
		array[i][i] = 1;//二维数组的最后一个数为1
		array[i][0] = 1;//二维数组的第一个数为1
	}

	//给中间赋值
	for (i = 2; i < 10; i++)//外层循环 行 
	{
		for (j = 1; j <= i - 1; j++)//内层循环 列 
		{
			array[i][j] = array[i - 1][j] + array[i - 1][j - 1];//给中间的数赋值
		}
	}

	//遍历输出
	for (i = 0; i < 10; i++)//外层循环 行 
	{
		for (j = 0; j <= i; j++)//内层循环 列 
		{
			printf("%6d", array[i][j]);//输出二维数组，宽度为6 
		}
		printf("\n");//换行 
	}

	return 0;
}