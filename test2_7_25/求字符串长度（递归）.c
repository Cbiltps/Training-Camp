#include <stdio.h>

int my_strlen(char* s)
{
	if (*s != '\0')
	{
		return 1 + my_strlen(s + 1);
	}
	else
	{
		return 0;
	}
}

int main()
{
	char arr[] = "abcd";
	int str = my_strlen(arr);
	printf("%d", str);

	return 0;
}