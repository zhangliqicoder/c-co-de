//Ñî»ÔÈý½Ç
#include <stdio.h>
#include <Windows.h>
#pragma warning(disable:4996)
void YangHui(int a[10][10])
{
	int i = 0;
	int j = 0;
	for (i = 2; i < 10; i++)
	{
		for (j=1; j <i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int a[10][10] = { 0 };
	int i = 0;
	for (; i < 10; i++)
	{
		int j = 0;
		for (; j < i; j++)
		{
			a[i][j] = 1;
			
		}
		printf("\n");

	}
	YangHui(a);
	system("pause");
	return 0;
}