#include<stdio.h>
//
//
//int solution(int n)
//{
//	////ֻ��������Ч
//	//int count = 0;
//	//while (n)
//	//{
//	//	if (n % 2 == 1)
//	//	{
//	//		count++;
//	//	}
//	//	n /= 2;
//	//}
//	//return count;
//	
//	////���ƶ� &1
//	//int i = 0;
//	//int count = 0;
//	//for (i = 0; i < 32; i++)
//	//{ 
//	//	if (((n >> i) & 1) == 1)
//	//	{
//	//	    count++;
//	//	}
//	//
//
//	//}
//	//return count;
//	int i = 0;
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//	//n&(n-1)
//	//���ξ��൱��ȥ��һλ1
//	//1010 n
//	//1001 n-1
//	//1000 n
//	//0111 n-1
//	//0000 n
//}
//solution �������ֵ�����е�ÿһλ�ﹲ�м���1



//�ж�һ�����ǲ���2��n�η�
//���n��2��n�η���ôn�ڶ�����ʾ����ֻ��һ��1
//n=16    10000
//n-1=15  01111
//n&(n-1) 00000 
//Is2pow(int n)
//{
//	if ((n & (n - 1) )== 0)
//	{
//		return 'y';
//	}
//	else
//	{
//		return 'n';
//	}
//}
//
//int main()
//{
//	int n = 16;
//	//int ret = solution(n);
//	char ret = Is2pow(n);
//	printf("%c\n", ret);
//	return 0;
//
//}



