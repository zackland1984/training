#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void slect_9(int a)
{
	int count = 0;
	for (a = 1; a < 99; a++)
	{
		if (a % 10 == 9)
		{
			printf("%d\n", a);
			count++;
		}
		else if (a/10 == 9)
		{
			printf("%d\n", a);
			count++;
		}
	}
	printf("count=%d", count);
}
int main()
{
	int i = 0;
	slect_9(i);
	return 0;
}