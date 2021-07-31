#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int arr[50] = { 0 };

    int i = 0;
    while (n)
    {
        arr[i] = n % 6;
        i++;
        n = n / 6;
    }

    for (i--; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }

    return 0;
}