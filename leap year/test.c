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

//��������������ֲ���

int binary_search(int* a, int k, int s)//int* a ���ݹ�������arr����ĸ�ĵ�ַ a��ָ��
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

		//�ҵ��ͷ����ҵ�λ�õ��±�
		//�Ҳ����ͷ���-1
	int ret = binary_search(arr, key, sz);
	//���鴫�Σ����ݵ��� ��������ĸ�ĵ�ַ
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