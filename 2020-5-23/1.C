//����һ����ݺ��·ݣ��жϸ�����Ƿ�Ϊ���꣬�����ݸ������·��ж���ʲô���ڷݺ͸����ж����죬�������ܱ�4�����������ܱ�100������\
�����ܱ�400����,3-5������5-8�ļ�9-11�＾1.2.12Ϊ����
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
		printf("����");
		break;
	case 5:
	case 6:
	case 7:
	case 8:
		printf("����\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("����\n");
		break;
	case 12:
	case 1:
	case 2:
		printf("����\n");
	}
}
void Judgeleapyears(int years, int month)
{
	int leap = 0;
	if ((years % 4 == 0 && years % 100 != 0) || (years % 400 == 0))
	{
		leap = 1;
		printf("%d������\n", years);

		Judgedays(month,leap);
	}
	else
	{
		leap = 0;
		printf("%d��������\n",years);
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