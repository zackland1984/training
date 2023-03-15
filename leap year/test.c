#include <stdio.h>

//int is_leap_year(int x)
//{
//	if ((x % 4 == 0) && (x % 100 != 0) || x % 400 == 0)
//	{
//		return 1;
//
//	}
//	else
//	{
//		return 0;
//	}
//}


//
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000;y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//
//
//	return 0;
//}

//整形有序数组二分查找

int binary_search(int* a, int k, int s)//int* a 传递过来的是arr首字母的地址 a是指针
{
	int left = 0;
	int right = s - 1;
	
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (a[mid] > k)
		{
			right = mid - 1;
		}
		else if (a[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;//can't find
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 6;
	int sz = sizeof(arr)/ sizeof(arr[0]);

		//找到就返回找到位置的下标
		//找不到就返回-1
	int ret = binary_search(arr, key, sz);
	//数组传参，传递的是 数组首字母的地址
	if (-1 == ret)
	{
		printf("can't find\n");
	}
	else
	{
		printf("find,key:%d\n", ret);
	}
	return 0;

}