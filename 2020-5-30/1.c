#include <Windows.h>
#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a + b > c&&a + c > b&&c + b > a)
	{
		int s = (a + b + c) / 2;
		int area = sqrt(s*(s - a)*(s - b)*(s - c));
		printf("area=%d", area);
		if (a ==b&&b ==c)
		{
			printf("�ȱ�������\n");
		}
		else if (a == b || a == c || b == c)
		{
			printf("����������\n");
		}
		else if (a*a + b*b == c*c)
		{
			printf("ֱ��������\n");
		}
		else
		{
			printf("һ��������\n");
		}
	}
	else
	{
		printf("���ܹ���������\n");
	}
	system("pause");
	return 0;
}