#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int temp = 0;
    int count = 0;

    printf("���������������Ƚ����Ƕ������벻ͬλ�ĸ�����\n");
    scanf("%d %d", &num1, &num2);
    
    temp = num1 ^ num2;
    while (temp != 0)
    {
        count++;
        temp = temp & (temp - 1);
    }
    printf("�������벻ͬλ�ĸ���Ϊ��%d\n", count);

    return 0;
}