//输入一个年份和月份，判断该年份是否为闰年，并根据给出的月份判断是什么季节份和改月有多少天，闰年是能被4整除，但不能被100整除，\
或者能被400整除,3-5春季，5-8夏季9-11秋季1.2.12为冬季
#include <Windows.h>
#include <stdio.h>
#pragma warning(disable:4996)
void Judgedays(int month,int a)
{
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("%d=31\n", month);
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("%d=30\n", month);
		break;
	case 2:
		if (a == 1)
			printf("%d=29\n", month);
		else
			printf("%d=28\n", month);
		break;
	default:
		break;
	}

}
void Judgeseason(int month)
{
	switch (month)
	{

	case 3:
	case 4:
		printf("春天");
		break;
	case 5:
	case 6:
	case 7:
	case 8:
		printf("夏天\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("秋天\n");
		break;
	case 12:
	case 1:
	case 2:
		printf("冬天\n");
	}
}
void Judgeleapyears(int years, int month)
{
	int leap = 0;
	if ((years % 4 == 0 && years % 100 != 0) || (years % 400 == 0))
	{
		leap = 1;
		printf("%d是闰年\n", years);

		Judgedays(month,leap);
	}
	else
	{
		leap = 0;
		printf("%d不是闰年\n",years);
		Judgedays(month, leap);
		switch (month)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("%d=31\n", month);
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("%d=30\n", month);
			break;
		case 2:
			printf("%d=28\n", month);
			break;
		default:
			break;

		}
	}
}

int main()
{
	int years = 0;
	int month = 0;
	printf("please enter years and month:");
	scanf("%d %d", &years, &month);
	Judgeleapyears(years, month);
	Judgeseason(month);
	system("pause");
	return 0;
}