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
void reverse_string(char* str)
{

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