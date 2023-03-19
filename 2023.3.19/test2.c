#define _CRT_SECURE_NO_WARNINGS 1
//qsort ≈≈–ÚΩ·ππÃÂ
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stu
{
	char name[20];
	int age;

};
//int sort_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//
//}
int sort_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);

}
void print(struct stu* s,int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%s %d\n", (s+i)->name, (s+i)->age);

	}
}
void test2()
{
	struct stu s[3] = { {"zhangsan",30},{"lisi",34},{"wangwu",20} };
	int sz = sizeof(s) / sizeof(s[0]);
	//qsort(s, sz, sizeof(s[0]), sort_by_age);
	qsort(s, sz, sizeof(s[0]), sort_by_name);
	print(s, sz);
}
int main()
{
	//test1();
	test2();

	return 0;
}