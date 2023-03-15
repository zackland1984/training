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
//1.生成随机数；
//2.判断数字，给出提示；

void game()
{

	int rnum, inputnum;
	printf("请输入猜测数字:\n");

	rnum=rand()%100+1;
	//printf("%d\n", rnum);//调试
	
	while(1)
	{
		scanf("%d", &inputnum);
		if (inputnum > rnum)
		{
			printf("输入值大了\n");
		
		}
		else if (rnum > inputnum)
		{
			printf("输入值小了\n");
	
		}
		else
		{
			printf("答对了\n");
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
		menu();//菜单打印
		scanf("%d",& input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("错误，请重新输入\n");
			break;
		}

	} while (input!=2);



	return 0;

}