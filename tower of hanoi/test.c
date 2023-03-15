//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//
//////计算汉诺塔的最优步数
//////汉诺塔最优步数为 2^n-1 n为塔的层数
////int main()
////{
////	int num = 0;
////	scanf("%d", &num);
////	printf("完成汉诺塔需要步数%d\n",(int)pow(2,num)-1);
////	return 0;
////}
//
////递归实现汉诺塔最优步数
//int tower(int num)
//{
//	if (1 == num)
//		return 1;
//	else
//		return 2 * tower(num - 1) + 1;
//
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = tower(num);
//	printf("完成%d层汉诺塔需要%d步\n", num, ret);
//	return 0;
//
//}