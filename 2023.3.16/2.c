#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//������������
//����32λ�����Ʋ�ͬλ���ĸ���
//������ͬλ�������
//ֻ�����a^b��1�ĸ�������

int main()
{
	int a = 0;
	int b = 0;
	int i = 0;
	int count = 0;
	scanf("%d %d", &a, &b);
	for (i = 0; i < 32; i++)
	{
		if (((a >> i) & 1 )!= ((b >> i) & 1))
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;

}