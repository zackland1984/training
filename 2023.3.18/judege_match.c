#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int is_same(int * arr)//跳出数组里是否有重复值，有返回0，没有返回1
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			if (arr[i] == arr[j] && i != j)
//			{
//				return 0;
//			}
//		}
//	
//	}
//	return 1;
//
//}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if ((b == 2) + (a == 3) == 1 &&
							(b == 2) + (e == 4) == 1 &&
							(c == 1) + (d == 2) == 1 &&
							(c == 5) + (d == 3) == 1 &&
							(e == 4) + (a == 1) == 1
							)
						{
						/*	int i = 0;
							int arr[5] = { a,b,c,d,e };*/
							
							if (1 * 2 * 3 * 4 * 5 == a * b * c * d * e)//巧妙运用代数乘积为120避免重复
							{
								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
							}

						}
					}

				}
			}
		}
	}
	

	return 0;

}