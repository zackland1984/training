#include<stdio.h>
////�� 1/1+1/2-1/3+1/4-1/5......-1/99+1/100
//int main()
//{
//	int i = 0;
//	double tmp = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		tmp += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", tmp);
//}

//��ӡ99�˷���
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i <= 9; i++)
//	{
//		printf("\n");
//
//		for (j = 1; j <= i; j++) 
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//
//		}
//	}
//
//
//}

//��дһ������reverse_string(char * string) �ݹ�ʵ��
//ʵ�� ����������ַ������ַ��������У����������ӡ
//����ʹ��C���Կ⺯������ַ�������������
//�� char arr[]="abcdef" ������: fedcbc
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//
//	}
//	return count;
//}
////�ǵݹ�д��
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str)-1;
//	while (right > left)
//	{
//	    //����д��
//		//char tmp = str[left];
//		//str[left] = str[right];
//		//str[right] = tmp;
//		//left++;
//		//right--;
//		// 
//		//ָ��д��
//		char tmp = *(str + left);
//		*(str + left)= *(str + right);
//		*(str + right) = tmp;
//		left++;
//		right--;
//	}
//
//}


//void reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*(str) = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse_string(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//arr �� ������Ԫ�صĵ�ַ
//	printf("%s\n", arr);
//	return 0;
//
//}

//pow�㷨��ʵ��
double pow(int x, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else if (k > 0)
	{
		return x * pow(x, k - 1);
	}
	else
	{
		return 1.0 / (pow(x, -k));
	}
}
int main()
{
	int x = 0;
	int k = 0;
	scanf("%d %d", &x, &k);
	printf("%lf\n", pow(x, k));


	return 0;
}