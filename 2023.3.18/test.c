//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
////��0~100000֮�����е�ˮ�ɻ��������
////ˮ�ɻ��� ָ һ��nλ�������λ���ֵ�n�η�֮��ǡ�õ��ڸ���������153=1^3+5^3+3^3
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