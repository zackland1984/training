#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�������������Լ��
//int main()
//{
//	int x, y, i;
//	int max = 1;
//
//
//	scanf("%d %d", &x, &y);
//	int min;
//	min=x < y ?  x:  y;
//
//	//Ѱ�ҹ�Լ�� ��1,ÿ��Ѱ�ҵ������maxֵ��ѭ���л���и���
//	for (i = 1; i <=min; i++)
//	{
//		if (x % i == 0 && y % i == 0)
//		{
//			max = i;
//		}
//
//	}
//	printf("���Լ��Ϊ:%d \n", max);
// return 0;
//
//}շת�����

int main()
{
	int x=0,y=0;
	scanf("%d %d", &x, &y);
	int t=0;
	while (x % y)
	{
		t = x % y;
		x = y;
		y = t;
	}
	printf("���Լ��Ϊ:%d\n", y);
	return 0;
}
