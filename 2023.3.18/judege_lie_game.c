//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//
//void judege(int* ture, int* lie, int muder)
//{
//
//	muder != 1 ? (*ture)++ : (*lie)++;
//	muder == 3 ? (*ture)++ : (*lie)++;
//	muder == 4 ? (*ture)++ : (*lie)++;
//	muder != 4 ? (*ture)++ : (*lie)++;
//
//}
//int main()
//{
//	//猜嫌犯 
//	//A：不是我
//	//B:是C
//	//C:是D
//	//D：C在胡说
//	int muder = 1;
//	int ture = 0;
//	int lie = 0;
//	for (muder = 1; muder <= 4; muder++)
//	{
//		judege(&ture, &lie, muder);
//		if (ture == 3 && lie == 1)
//		{
//			switch (muder)
//			{
//			case 1:
//				printf("muder is A");
//				break;
//			case 2:
//				printf("muder is B");
//				break;
//			case 3:
//				printf("muder is C");
//				break;
//			case 4:
//				printf("muder is D");
//				break;
//
//			}
//		
//		}
//		ture = 0;
//		lie = 0;
//	}
//
//	return 0;
//
//
//
//}