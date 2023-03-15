#include<stdio.h>

void bubble_sort(int  arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//Ωªªª
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j+1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;

			}

			
		}

	}



}
int main()
{
	//…˝–Ú√∞≈›≈≈–Ú
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	
}