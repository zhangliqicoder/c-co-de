#include "cal.h"
void menu()
{
	printf("##########################\n");
	printf("##########################\n");
	printf("##1 Myadd     2.Mysub#####\n");
	printf("##########################\n");
	printf("##3.Mymul     4.Mydiv#####\n");
	printf("##             0 EXIST####\n");
	printf("##########################\n");
	printf("enter your select->:\n");

}
int main()
{
	int select;
	int ret = 0;
	int x, y;
	int(*fun[5])(int x, int y) = { NULL, Myadd, Mysub, Mymul, Mydiv };
	do
	{
		menu();
		
		printf("enter your select->");
		scanf("%d", &select);
		if (select<0 || select>4)
		{
			printf("enter eroer ,enter again\n");
			continue;
		}
		else if (select == 0)
		{
			break;
		}
		printf("输入你的操作数：");
		scanf("%d %d", &x, &y);
		ret=(*fun[select])(x,y);
		printf("%d\n", ret);
	} while (select);
	system("pause");
	return 0;

}