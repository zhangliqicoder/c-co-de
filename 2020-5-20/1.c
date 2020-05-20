#include<Windows.h>
#include <stdio.h>
#pragma warning(disable:4996)
#define RET 100
void Reservestr(char *p,int num)
{
	char *start = p;
	char temp;
	char *end = p + num-1;
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;

	}
}
void Reservestr1(char *q, int low, int high)
{
	char temp1;
	for (int i = low, j = 0; i < ((low + high + 1) / 2); i++, j++)
	{
		temp1 = q[i];
		q[i] = q[high - j];
		q[high - j] = temp1;
	}
}
int main()
{
	int j = 0;
	int k = 0;
	char str[RET] = "I Love bit";
	int num = strlen(str);
	Reservestr(str,num);
	for (int i = 0; i < num; i++)
	{
		if (str[i] == ' ')
		{
			k = i;
			Reservestr1(str, j, k - 1);
			j = k + 1;
		}
	}
	printf("%s\n", str);
	system("pause");
	return 0;
}