#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����˵��
//һֻ���ܿ���һ���� 1 ��̨�׻�һ���� 2 ��̨��
//����:���ϵ�һ��̨��ֻ��һ������:ֱ���� 1 �����ɡ�
//��������̨��, ���������� : ÿ���� 1 ��, ������; 
//����һ���� 2 ��.��Ҫ���ϵ� n ��̨���ж��������� ?
//���������һ����쳲��������е�nλ��������
int forg(int a)
{
	if (1 == a)
	{
		return 1;
	}
	else if (2 == a)
	{
		return 2;
	}
	else
	{
		return forg(a - 1) + forg(a - 2);
	}


}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ways = forg(n);
	printf("waysnum=%d", ways);
	return 0;



}