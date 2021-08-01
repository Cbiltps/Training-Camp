#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

//switch语句练习，鹏哥作业反馈不太好，来练习一下
int main()
{
	int day = 0;
	printf("请输入一个数字");
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday\n");
		break;
	case 6:
	case 7:
		printf("weekend\n");
		break;
	default:
		printf("输入错误，请输入7以内的函数（包括7）！\n");
		break;
	}

	return 0;
}
//加油好好学习，冲啊！！！祥子不怕困难！