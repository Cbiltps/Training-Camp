#include<stdio.h>

int main()
{
	int n = 0;
	scanf_s("%d", &n);
	while (n)
	{
		printf("%d", n % 10);
		n = n / 10;
	} 
}