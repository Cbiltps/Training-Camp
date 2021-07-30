#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);

    int i = 0;
    int j = 0;

    int arr1[10][10];
    int arr2[10][10];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }


    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }


    int flag = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr1[i][j] != arr2[i][j])
                flag = 0;
        }
    }


    if (flag)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}