//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
////求0~100000之间所有的水仙化数并输出
////水仙花数 指 一个n位数，其各位数字的n次方之和恰好等于该数本身，如153=1^3+5^3+3^3
//
//int get_n(int i)
//{
//	int n = 0;
//	while (i)
//	{
//		i = i / 10;
//		n++;
//	}
//
//
//}
//int judege(int i,int n)
//{
//	int tmp = 0;
//	int sum = 0;
//	
//	for (int j = 0; j < n; j++)
//	{
//		tmp = i % 10;
//		i = i / 10;
//		sum += pow(tmp, n);
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		n=get_n(i);
//		int sum=judege(i, n);
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}