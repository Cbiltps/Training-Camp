#include<stdio.h>

int main()
{
    int x = 0;
    scanf_s("%d", &x);
    x > 0 ? printf("-1") : (x == 0 ? printf("0") : printf("1"));//运用两次三目运算符
    return 0;
}