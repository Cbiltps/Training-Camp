#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>

int main()
{
    int t = 0;
    scanf("%d", &t);
    int h = t / 3600;
    int m = (t % 3600) / 60;
    int s = (t % 3600) % 60;
    printf("%d %d %d\n", h, m, s);
}