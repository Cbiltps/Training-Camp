#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    scanf("%d", &n);

    sum = n / 12;
    sum *= 4;
    sum += 2;
    printf("%d\n", sum);

    return 0;
}