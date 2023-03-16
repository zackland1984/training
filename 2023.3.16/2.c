#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//输入两个整数
//返回32位二进制不同位数的个数
//返回相同位则更容易
//只需求出a^b中1的个数即可

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