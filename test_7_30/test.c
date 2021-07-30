#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>

int main()
{
    char ch = 0;
    while (scanf("%c", &ch) != EOF)
    {
        if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
        {
            printf("Vowel\n");
        }
        else
        {
            printf("Consonant\n");
        }
        getchar();//拿走其他字符，防止判断为Consonant
    }
    return 0;
}