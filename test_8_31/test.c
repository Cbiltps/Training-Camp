#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

//switch�����ϰ��������ҵ������̫�ã�����ϰһ��
int main()
{
	int day = 0;
	printf("������һ������");
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
		printf("�������������7���ڵĺ���������7����\n");
		break;
	}

	return 0;
}
//���ͺú�ѧϰ���尡���������Ӳ������ѣ�