#include <stdio.h>

int main()
{
	int a = 1;
	char* p = (char*)&a;//ǿ������ת����char���ֽ�����1����ȡ��һ�����ж�
	if (*p == 1)
	{
		printf("��̨������С�ˣ�\n");
	}
	else
	{
		printf("��̨�����Ǵ�ˣ�\n");
	}

	return 0;
}