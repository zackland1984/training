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
			printf("���ݳɹ�\n");
		}
		else
		{
			perror("AddContact");
			printf("������ϵ��ʧ��\n");
			return;
		}
	}
}


void AddContact(Contact* pc)
{
	//��������
	CheckCapacity(pc);
	//����һ���˵���Ϣ
	printf("��������:>");
	scanf("%s", &pc->data[pc->sz].name);
	printf("����������:>");
	scanf("%d", &pc->data[pc->sz].age);
	printf("�������Ա�:>");
	scanf("%s", &pc->data[pc->sz].sex);
	printf("������绰:>");
	scanf("%s", &pc->data[pc->sz].tele);
	printf("�������ַ:>");
	scanf("%s", &pc->data[pc->sz].addr);
	pc->sz++;
	printf("���ӳɹ�\n");
}

void PrintContact(const Contact* pc)
{
	int i = 0;
	//��ӡ����
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	//��ӡ����
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
			return i;//�����±�
		}
	}
	return - 1;
}
void DelContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ�����ɾ��\n");
		return;
	}
	printf("������Ҫɾ�����˵�����:>");
	scanf("%s", name);
	//1.�� ɾ��
	//2 �� ɾ�����˲�����
	int pos = FindByname(pc, name);
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����");
		return;
	}
	//ɾ�����Ǻ�һλ��ǰŲ1
	int i = 0;
	for (i = pos; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("ɾ���ɹ�\n");
}

void SearchContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("����Ҫ���ҵ��˵�����:>");
	scanf("%s", name);
	int pos = FindByname(pc, name);
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����");
		return;
	}
	else
	{
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	int pos = FindByname(pc, name);
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����");
		return;
	}
	else
	{
		printf("��������:>");
		scanf("%s", &pc->data[pos].name);
		printf("����������:>");
		scanf("%d", &pc->data[pos].age);
		printf("�������Ա�:>");
		scanf("%s", &pc->data[pos].sex);
		printf("������绰:>");
		scanf("%s", &pc->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s", &pc->data[pos].addr);

		printf("�޸ĳɹ�\n");
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
