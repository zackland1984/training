#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void menu()
{
printf("###################\n");
printf("######1. play#####\n");
printf("######2. exit#####\n");
printf("###################\n");

}
//1.�����������
//2.�ж����֣�������ʾ��

void game()
{

	int rnum, inputnum;
	printf("������²�����:\n");

	rnum=rand()%100+1;
	//printf("%d\n", rnum);//����
	
	while(1)
	{
		scanf("%d", &inputnum);
		if (inputnum > rnum)
		{
			printf("����ֵ����\n");
		
		}
		else if (rnum > inputnum)
		{
			printf("����ֵС��\n");
	
		}
		else
		{
			printf("�����\n");
			break;

		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//�˵���ӡ
		scanf("%d",& input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("��������������\n");
			break;
		}

	} while (input!=2);



	return 0;

}