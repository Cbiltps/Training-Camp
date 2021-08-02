#include<stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    char str[100];

    gets(str);

    while (str[i] != '\0')
        i++;

    for (j = i - 1; j >= 0; j--)
        putchar(str[j]);

    return 0;
}