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

//上面是普通函数，下面是递归版本
void reverse_string(char* str)
{

}

int main()
{
	//数组名是首元素的地址
	//首元素就是char类型
	char arr[20] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}