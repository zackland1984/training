#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//求两个数的最大公约数
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
//	//寻找公约数 加1,每次寻找到更大的max值在循环中会进行覆盖
//	for (i = 1; i <=min; i++)
//	{
//		if (x % i == 0 && y % i == 0)
//		{
//			max = i;
//		}
//
//	}
//	printf("最大公约数为:%d \n", max);
// return 0;
//
//}辗转相除法

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
	printf("最大公约数为:%d\n", y);
	return 0;
}
