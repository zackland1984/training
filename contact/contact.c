#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void IntiContact(Contact* pc) {
	pc->data = (PeoInfo*)malloc(DEFAULT_SIZE*sizeof(PeoInfo));
		if (pc->data == NULL)
		{
			perror("InitContact");
			return;
		}
		pc->sz = 0;
		pc->capacity = DEFAULT_SIZE;
		//load
		LoadContact(pc);
}

void CheckCapacity(Contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("增容成功\n");
		}
		else
		{
			perror("AddContact");
			printf("增加联系人失败\n");
			return;
		}
	}
}


void AddContact(Contact* pc)
{
	//考虑扩容
	CheckCapacity(pc);
	//增加一个人的信息
	printf("输入姓名:>");
	scanf("%s", &pc->data[pc->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &pc->data[pc->sz].age);
	printf("请输入性别:>");
	scanf("%s", &pc->data[pc->sz].sex);
	printf("请输入电话:>");
	scanf("%s", &pc->data[pc->sz].tele);
	printf("请输入地址:>");
	scanf("%s", &pc->data[pc->sz].addr);
	pc->sz++;
	printf("增加成功\n");
}

void PrintContact(const Contact* pc)
{
	int i = 0;
	//打印标题
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
	//打印数据
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}
int FindByname(Contact* pc, char* name)
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(name, pc->data[i].name) == 0)
		{
			return i;//返回下标
		}
	}
	return - 1;
}
void DelContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	if (pc->sz == 0)
	{
		printf("通讯录为空，无需删除\n");
		return;
	}
	printf("请输入要删除的人的姓名:>");
	scanf("%s", name);
	//1.有 删除
	//2 无 删除的人不存在
	int pos = FindByname(pc, name);
	if (pos == -1)
	{
		printf("要删除的人不存在");
		return;
	}
	//删除就是后一位向前挪1
	int i = 0;
	for (i = pos; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("删除成功\n");
}

void SearchContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("输入要查找的人的名字:>");
	scanf("%s", name);
	int pos = FindByname(pc, name);
	if (pos == -1)
	{
		printf("要删除的人不存在");
		return;
	}
	else
	{
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);
	}



}

void ModifyContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改人的名字:>");
	scanf("%s", name);
	int pos = FindByname(pc, name);
	if (pos == -1)
	{
		printf("要删除的人不存在");
		return;
	}
	else
	{
		printf("输入姓名:>");
		scanf("%s", &pc->data[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &pc->data[pos].age);
		printf("请输入性别:>");
		scanf("%s", &pc->data[pos].sex);
		printf("请输入电话:>");
		scanf("%s", &pc->data[pos].tele);
		printf("请输入地址:>");
		scanf("%s", &pc->data[pos].addr);

		printf("修改成功\n");
	}
}

void SaveContact(Contact* pc)
{
	FILE* pf = fopen("contact.dat", "w");
	if (pf == NULL)
	{
		perror("SaveContact");
		return;
	}
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite(pc->data + i, sizeof(PeoInfo), 1, pf);
	}
	fclose(pf);
	pf = NULL;
}
void DestoryContact(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
}

void LoadContact(Contact* pc)
{
	FILE* pf = fopen("contact.dat", "r");
	if (pf == NULL)
	{
		perror("LoadContact");
		return;
	}
	PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(PeoInfo), 1, pf))
	{
		CheckCapacity(pc);
		pc->data[pc->sz] = tmp;
		pc->sz++;
	}
	fclose(pf);
	pf = NULL;
}

void SortContact(Contact* pc)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < pc->sz - 1; i++)
	{
		for (j = 0; j < pc->sz - 1 - i; j++)
		{
			if (pc->data[j].age > pc->data[j + 1].age)
			{
				PeoInfo tmp = { 0 };
				tmp = pc->data[j];
				pc->data[j] = pc->data[j + 1];
				pc->data[j + 1] = tmp;
			}
		}
	}
	PrintContact(pc);
}
