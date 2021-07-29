#include <stdio.h>
#include <string.h>

//void reverse_string(char* str)
//{
//	int len = strlen(str);
//	int left = 0;//'a'
//	int right = len - 1;//'f'
//	
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}

//��������ͨ�����������ǵݹ�汾

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

void reverse_string(char str[])
{
	int len = my_strlen(str);
	char tmp = str[0];
	str[0] = str[len - 1];
	str[len - 1] = '\0';
	
	if (my_strlen(str + 1) >= 2)
		reverse_string(str + 1);
	str[len-1] = tmp;
}

int main()
{
	//����������Ԫ�صĵ�ַ
	//��Ԫ�ؾ���char����
	char arr[20] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}