#include<stdio.h>


int main()
{
	//����-getchar-��ȡһ���ַ�������һ���ַ�
	//����-putchar-��ӡ/���һ���ַ�
	int ch = 0;
	while(ch = getchar())
	{
		putchar(ch + 32);
		getchar();//��ȡ\n
	}
	return 0;
}