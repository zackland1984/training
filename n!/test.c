#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main(void)
//{
//	int n = 0;
//	int s = 0;
//	int tmp = 1;
//	scanf("%d",&n);//����n
//	do
//	{
//		s++;//s�Լ�1
//		tmp = tmp * s;//tmp�洢ÿ�μ�����
//	
//	}  while (n > s);//�����жϿ���ѭ������
//
//	printf("%d", tmp);
//
//	return 0;
//}
//int main() 
//{
//	int n = 3, i = 1, j = 1;
//	int summ = 1, suml = 0;
//
//	for (i = 1;i < n+1; i++)
//	{
//		summ *= i;
//		suml += summ;
//	}
//	printf("%d\n", suml);
//
//
//
//}
//���ֲ���1-10
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 1;
	int size = sizeof(arr) / sizeof(arr[0]);//Ԫ���������
	int left = 0;
	int right = size - 1;

	while (left <= right)
	{
		int mid = (right + left) / 2;
		if (key < arr[mid])
		{
			right = mid - 1;
		}
		else if (key > arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			printf("found sub = %d\n",mid);
			break;

		}
		if (left > right)
		{
			printf("can't found sub");

		}


	}


	return 0;

}
