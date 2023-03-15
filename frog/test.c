#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//题意说明
//一只青蛙可以一次跳 1 级台阶或一次跳 2 级台阶
//例如:跳上第一级台阶只有一种跳法:直接跳 1 级即可。
//跳上两级台阶, 有两种跳法 : 每次跳 1 级, 跳两次; 
//或者一次跳 2 级.问要跳上第 n 级台阶有多少种跳法 ?
//这个问题是一个求斐波那契数列第n位数的问题
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