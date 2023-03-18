//#define _CRT_SECURE_NO_WARNINGS 1
//
//
////实现strlen
//#include<stdio.h>
//#include<assert.h>
////int my_strlen(const char* arr)
////{
////	int i = 0;
////	int count = 0;
////	assert(arr != NULL);
////	while (arr[i] != '\0')
////	{
////		count++;
////		i++;
////	}
////
////	return count;
////}
////
////int main()
////{
////	char arr[] = "abcdef";
////	int len = my_strlen(arr);
////	printf("%d", len);
////  return 0;
////}
//
////实现strcmp
//int my_strcmp(const char* str1,const char* str2)
//{
//	int i = 0;
//	while (*(str1 + i) != '\0' || *(str2 + i) != '\0')
//	{
//		if ((*(str1 + i) - *(str2 + i)) != 0)
//		{
//			return *(str1 + i) - *(str2 + i);
//		}
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "123"; 
//	char arr2[] = "456";
//	char arr3[] = "123";
//	
//	printf("arr1 and arr2 %d\n", my_strcmp(arr1, arr2));
//	printf("arr1 and arr3 %d\n", my_strcmp(arr1, arr3));
//
//
//
//}