#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int temp = 0;
    int count = 0;

    printf("请输入两个数来比较他们二进制码不同位的个数：\n");
    scanf("%d %d", &num1, &num2);
    
    temp = num1 ^ num2;
    while (temp != 0)
    {
        count++;
        temp = temp & (temp - 1);
    }
    printf("二进制码不同位的个数为：%d\n", count);

    return 0;
}