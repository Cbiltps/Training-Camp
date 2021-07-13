#include<stdio.h>


int main()
{
	//函数-getchar-获取一个字符，输入一个字符
	//函数-putchar-打印/输出一个字符
	int ch = 0;
	while(ch = getchar())
	{
		putchar(ch + 32);
		getchar();//读取\n
	}
	return 0;
}