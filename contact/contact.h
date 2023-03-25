#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_SIZE 3
#define INC_SZ 2
typedef struct PeoInfo {
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;
typedef struct Contact
{
	PeoInfo* data;//ָ��̬����Ŀռ䣬���������ϵ�˵���Ϣ
	int sz;//��¼���ǵ�ǰͨѶ¼����Ч��Ϣ�ĸ���
	int capacity;//��¼��ǰͨѶ¼���������
}Contact;

//��ʼ��ͨѶ¼
void IntiContact(Contact* pc);

void PrintContact(Contact* pc);

void DelContact(Contact* pc);

void SearchContact(Contact* pc);

void ModifyContact(Contact* pc);

void SaveContact(Contact* pc);

void DestoryContact(Contact* pc);

void LoadContact(Contact* pc);

void SortContact(Contact* pc);