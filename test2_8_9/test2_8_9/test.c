#include <stdio.h>

//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		return 1;
//	else
//		return 0;
//} 

//化简后
// 
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	/*if (*p == 1)
//		return 1;
//	else
//		return 0;*/
//	return *p;
//}

//再化简后
int check_sys()
{
	int a = 1;
	return *(char*)&a;
}

int main()
{
	int ret = check_sys();
	if (1 == ret)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}

	return 0;
}