#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
void Reservenum(int *p,int num)
{
	int *start = p;
	int *end = p + num - 1;
	while (start < end)
	{
		while (start < end && *start % 2 == 1)
		{
			start++;
		}
		while (start < end && *end % 2 == 0)
		{
			end--;
		}
		int temp = 0;
		temp = *start;
		*start = *end;
		*end = temp;
	}
}
int main()
{
	int arr1[10] = { 1, 5, 4, 2, 7, 9, 3, 6, 8, 11 };
	int num = sizeof(arr1) / sizeof(arr1[0]);
	Reservenum(arr1,num);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	system("pause");
	return 0;
}