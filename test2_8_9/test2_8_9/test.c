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

//�����
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

//�ٻ����
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
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}

	return 0;
}