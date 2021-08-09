#include <stdio.h>

int main()
{
	int a = 1;
	char* p = (char*)&a;//强制类型转换成char（字节数是1），取第一个数判断
	if (*p == 1)
	{
		printf("此台机器是小端！\n");
	}
	else
	{
		printf("此台机器是大端！\n");
	}

	return 0;
}