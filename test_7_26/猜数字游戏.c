#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//猜数游戏
//1. 电脑随机生成一个区间之间的数字
//2. 玩家猜数字
//   如果猜对了，就提示：猜对了
//   如果猜错了，就提示：猜大了，或者猜小了，直到猜正确
//3. 反复玩
void meau();//菜单
void game();//猜数

//时间戳 time.h  unsigned int time(&p)
//随机数 stdlib.h   rand() 根据随机数种子生成随机数
//                  srand(long long int)  随机数种子设置
//因为时间戳是不断变化的，所以可以以时间戳设置随机数种子
//但是不能频繁调用strand(),因为频繁调用生成的随机数并不是很随机

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//随机数种子
	do
	{
		meau();
		printf("是否开始猜数字游戏（数字范围为1-100），请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("无效输入，请输入数字0或1");
			break;
		}
	} while (input);
	return 0;
}
void meau()
{
	printf("*********************************\n");
	printf("*********************************\n");
	printf("***********1 开始游戏************\n");
	printf("***********0 退出游戏************\n");
	printf("*********************************\n");
	printf("*********************************\n");
}
void game()
{
	int guess = 0;//用户猜数数据
	int cnt = 1;//统计用户猜中数字所花次数
	int ret = 0;//随机数

	ret = (2 * rand() % 10 + 1) * rand() % 100 + 1;//保证生成的数在1-100以内
	//printf("%d\n", ret);//开挂
	while (1)
	{
		printf("请开动你的小脑瓜，猜一个数字吧！->猜");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了！\n");
			cnt++;
		}
		else if (guess > ret)
		{
			printf("猜大了！\n");
			cnt++;
		}
		else
		{
			if (cnt == 1)
				printf("太厉害了！你猜%d次就猜中了！这就是传说中的一发入魂吗！\n", cnt);
			else if (cnt > 1 && cnt <= 3)
				printf("哎呦！不错哦！才猜%d次就猜中了！\n", cnt);
			else if (cnt > 3 && cnt <= 10)
				printf("还可以，一般般！你猜了%d次猜中了！\n", cnt);
			else
				printf("啧啧啧，你太拉了！猜了%d次才猜中！太一般了！\n", cnt);
			break;
		}
	}

}