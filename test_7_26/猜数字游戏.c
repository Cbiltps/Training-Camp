#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//������Ϸ
//1. �����������һ������֮�������
//2. ��Ҳ�����
//   ����¶��ˣ�����ʾ���¶���
//   ����´��ˣ�����ʾ���´��ˣ����߲�С�ˣ�ֱ������ȷ
//3. ������
void meau();//�˵�
void game();//����

//ʱ��� time.h  unsigned int time(&p)
//����� stdlib.h   rand() ����������������������
//                  srand(long long int)  �������������
//��Ϊʱ����ǲ��ϱ仯�ģ����Կ�����ʱ����������������
//���ǲ���Ƶ������strand(),��ΪƵ���������ɵ�����������Ǻ����

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//���������
	do
	{
		meau();
		printf("�Ƿ�ʼ��������Ϸ�����ַ�ΧΪ1-100������ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("��Ч���룬����������0��1");
			break;
		}
	} while (input);
	return 0;
}
void meau()
{
	printf("*********************************\n");
	printf("*********************************\n");
	printf("***********1 ��ʼ��Ϸ************\n");
	printf("***********0 �˳���Ϸ************\n");
	printf("*********************************\n");
	printf("*********************************\n");
}
void game()
{
	int guess = 0;//�û���������
	int cnt = 1;//ͳ���û�����������������
	int ret = 0;//�����

	ret = (2 * rand() % 10 + 1) * rand() % 100 + 1;//��֤���ɵ�����1-100����
	//printf("%d\n", ret);//����
	while (1)
	{
		printf("�뿪�����С�Թϣ���һ�����ְɣ�->��");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С�ˣ�\n");
			cnt++;
		}
		else if (guess > ret)
		{
			printf("�´��ˣ�\n");
			cnt++;
		}
		else
		{
			if (cnt == 1)
				printf("̫�����ˣ����%d�ξͲ����ˣ�����Ǵ�˵�е�һ�������\n", cnt);
			else if (cnt > 1 && cnt <= 3)
				printf("���ϣ�����Ŷ���Ų�%d�ξͲ����ˣ�\n", cnt);
			else if (cnt > 3 && cnt <= 10)
				printf("�����ԣ�һ��㣡�����%d�β����ˣ�\n", cnt);
			else
				printf("����������̫���ˣ�����%d�βŲ��У�̫һ���ˣ�\n", cnt);
			break;
		}
	}

}