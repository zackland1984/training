#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{

		//Ñ°ÕÒ×ó²àÅ¼Êý
		while (left < right && arr[left] % 2 == 1)
		{
			left++;
		}
		//Ñ°ÕÒÓÒ²àÆæÊý
		while (left < right && arr[right] % 2 == 0)
		{
			right--;
		}
		if (left < right)
		{
			int tmp = 0;
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}

	}


}
void print(int * arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(arr+i));
	}
	printf("\n");


}


int main()
{
	int arr[] = { 1,6,9,4,3,1,2,4,5,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//×ó²à·ÅÆæÊýÓÒ±ß·ÅÅ¼Êý
	move(arr, sz);
	print(arr, sz);


}